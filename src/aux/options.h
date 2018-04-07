#ifndef OPTIONS_H_
#define OPTIONS_H_

static struct options_s {
    bool            POR;
    bool            SYM;
    const char     *FNAME;
} SETTINGS = {
    .POR = false,
    .SYM = false,
    .FNAME = NULL
};


extern void parse_options(int argc, const char **argv);

#endif
