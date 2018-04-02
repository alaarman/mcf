
#include <fnmatch.h>
#include <string.h>

#include "util/runtime.h"
#include "util/string-map.h"
#include "util/util.h"


struct string_string_map {
	char **pattern;
	char **value;
};

struct string_set {
	char **pattern;
};

string_map_t SSMcreateSWP(const char* swp_spec){
	string_map_t pol=RT_NEW(struct string_string_map);
	int N=1;
	char*pattern=strdup(swp_spec);
	char*tmp=pattern;
	int separator;
	if (strchr(tmp,',')!=NULL){
	    separator=',';
	} else {
	    separator=';';
	}
	while((tmp=strchr(tmp,separator))){
		tmp++;
		N++;
	}
	Debug("Spec length is %d",N);
	pol->pattern=RTmalloc(N*sizeof(char*));
	pol->value=RTmalloc(N*sizeof(char*));
	for(int i=0;i<N-1;i++){
		pol->pattern[i]=pattern;
		tmp=strchr(pattern,separator);
		tmp[0]=0;
		pattern=tmp+1;
		tmp=strrchr(pol->pattern[i],':');
		if (!tmp){
			Abort("bad map entry %s",pattern);
		}
		tmp[0]=0;
		pol->value[i]=tmp+1;
		Debug("map rule %d: %s -> %s",i,pol->pattern[i],pol->value[i]);
	}
	pol->pattern[N-1]=NULL;
	pol->value[N-1]=pattern;
	Debug("map default is %s",pol->value[N-1]);
	return pol;
}


char* SSMcall(string_map_t map,const char*input){
	if (map) {
		int i;
		for(i=0;map->pattern[i];i++){
			if (!fnmatch(map->pattern[i],input,0)) {
				break;
			}			
		}
		Debug("result for %s is %s",input,map->value[i]);
		return map->value[i];
	} else {
		Debug("empty map");
	}
	return NULL;
}

string_set_t SSMcreateSWPset(const char* swp_spec){
	string_set_t pol=RT_NEW(struct string_set);
	int N=2;
	char*pattern=strdup(swp_spec);
	char*tmp=pattern;
	int separator;
	if (strchr(tmp,',')!=NULL){
	    separator=',';
	} else {
	    separator=';';
	}
	while((tmp=strchr(tmp,separator))){
		tmp++;
		N++;
	}
	Debug("Spec length is %d",N);
	pol->pattern=RTmalloc(N*sizeof(char*));
	for(int i=0;i<N-2;i++){
		pol->pattern[i]=pattern;
		tmp=strchr(pattern,separator);
		tmp[0]=0;
		pattern=tmp+1;
	}
	pol->pattern[N-2]=pattern;
	pol->pattern[N-1]=NULL;
	return pol;
}

int SSMmember(string_set_t map,const char*input){
	if (map) {
		int i;
		for(i=0;map->pattern[i];i++){
		    if (map->pattern[i]==NULL) return 0;
		    if (map->pattern[i][0]=='!'){
		        switch(fnmatch(map->pattern[i]+1,input,0)){
		            case 0: return 0;
		            case FNM_NOMATCH: continue;
		            default: Abort("error in fnmatch");
				}    
		    } else {
		        switch(fnmatch(map->pattern[i],input,0)){
		            case 0: return 1;
		            case FNM_NOMATCH: continue;
		            default: Abort("error in fnmatch");
				}    
			}			
		}
	} else {
		Debug("empty map");
	}
	return 0;
}




