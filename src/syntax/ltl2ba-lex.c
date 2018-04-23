/***** ltl2ba : lex.c *****/

/* Written by Denis Oddoux, LIAFA, France                                 */
/* Copyright (c) 2001  Denis Oddoux                                       */
/* Modified by Paul Gastin, LSV, France                                   */
/* Copyright (c) 2007  Paul Gastin                                        */
/*                                                                        */
/* This program is free software; you can redistribute it and/or modify   */
/* it under the terms of the GNU General Public License as published by   */
/* the Free Software Foundation; either version 2 of the License, or      */
/* (at your option) any later version.                                    */
/*                                                                        */
/* This program is distributed in the hope that it will be useful,        */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of         */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          */
/* GNU General Public License for more details.                           */
/*                                                                        */
/* You should have received a copy of the GNU General Public License      */
/* along with this program; if not, write to the Free Software            */
/* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA*/
/*                                                                        */
/* Based on the translation algorithm by Gastin and Oddoux,               */
/* presented at the 13th International Conference on Computer Aided       */
/* Verification, CAV 2001, Paris, France.                                 */
/* Proceedings - LNCS 2102, pp. 53-65                                     */
/*                                                                        */
/* Send bug-reports and/or questions to Paul Gastin                       */
/* http://www.lsv.ens-cachan.fr/~gastin                                   */
/*                                                                        */
/* Some of the code in this file was taken from the Spin software         */
/* Written by Gerard J. Holzmann, Bell Laboratories, U.S.A.               */

#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#include <ltl2ba/ltl2ba.h>
// Should be first, otherwise LTSmin print macros are in its the way
#undef Debug
#undef Assert

#include <syntax/ltl2ba-lex.h>
#include <syntax/ltl2ba-lex-helper.h>
#include <syntax/ltsmin-syntax.h>
#include <syntax/ltsmin-tl.h>
#include <syntax/ltsmin-buchi.h>

#include <syntax/ltsmin-standard.h>
#include <pins2pins/ltl.h>

#include <util/runtime.h>
#include <util/util.h>


static ltsmin_expr_list_t *le_list = NULL;
static ltsmin_lin_expr_t *le;
static int le_at;

static int  tl_lex(void);

extern YYSTYPE  tl_yylval;
char    yytext[2048];

#define Token(y)        tl_yylval = tl_nn(y,ZN,ZN); append_uform(yytext); \
                return y
//Debug ("LTL Lexer: passing token '%s' to LTL2BA", yytext);

#define LTL_LPAR ((void*)0x01)
#define LTL_RPAR ((void*)0x02)

// print function for ltl2ba (not to be used elsewhere)
static char *
ltsmin_expr_print_ltl(ltsmin_expr_t ltl,char* buf)
{
    // no equation
    Assert (ltl, "Empty LTL expression");

    // left eq
    switch(ltl->node_type) {
        case BINARY_OP:
            *buf++='(';
            buf = ltsmin_expr_print_ltl(ltl->arg1, buf);
        default:;
    }
    // middle
    switch(ltl->token) {
        case LTL_SVAR: sprintf(buf, "@S%d", ltl->idx); break;
        case LTL_EVAR: sprintf(buf, "@E%d", ltl->idx); break;
        case LTL_NUM: sprintf(buf, "%d", ltl->idx); break;
        case LTL_CHUNK: sprintf(buf, "@H%d", ltl->idx); break;
        case LTL_LT: sprintf(buf, " < "); break;
        case LTL_LEQ: sprintf(buf, " <= "); break;
        case LTL_GT: sprintf(buf, " > "); break;
        case LTL_GEQ: sprintf(buf, " >= "); break;
        case LTL_EQ: sprintf(buf, " == "); break;
        case LTL_NEQ: sprintf(buf, " != "); break;
        case LTL_EN: sprintf(buf, " ?? "); break;
        case LTL_TRUE: sprintf(buf, "true"); break;
        case LTL_OR: sprintf(buf, " or "); break;
        case LTL_NOT: sprintf(buf, "!"); break;
        case LTL_NEXT: sprintf(buf, "X "); break;
        case LTL_UNTIL: sprintf(buf, " U "); break;
        case LTL_FALSE: sprintf(buf, "false"); break;
        case LTL_AND: sprintf(buf, " and "); break;
        case LTL_EQUIV: sprintf(buf, " <-> "); break;
        case LTL_IMPLY: sprintf(buf, " -> "); break;
        case LTL_FUTURE: sprintf(buf, "F "); break;
        case LTL_GLOBALLY: sprintf(buf, "G "); break;
        case LTL_MULT: sprintf(buf, " * "); break;
        case LTL_DIV: sprintf(buf, " / "); break;
        case LTL_REM: sprintf(buf, " %% "); break;
        case LTL_ADD: sprintf(buf, " + "); break;
        case LTL_SUB: sprintf(buf, " - "); break;
        default:
            Abort("unknown LTL token");
    }
    buf += strlen(buf);
    // right eq
    switch(ltl->node_type) {
        case UNARY_OP:
            buf = ltsmin_expr_print_ltl(ltl->arg1, buf);
            break;
        case BINARY_OP:
            buf = ltsmin_expr_print_ltl(ltl->arg2, buf);
            *buf++=')';
            break;
        default:;
    }
    *buf='\0';
    return buf;
}

static int
tl_lex(void)
{
    if (le_at >= le->count) { sprintf(yytext, ";"); Token(';'); }
    ltsmin_expr_t e = le->lin_expr[le_at++];
    if (e == LTL_LPAR) { sprintf(yytext,"("); Token('('); }
    if (e == LTL_RPAR) { sprintf(yytext,")"); Token(')'); }

    switch(e->token) {
        case LTL_TRUE:
            sprintf(yytext, "true");
            Token(TRUE);
        case LTL_FALSE:
            sprintf(yytext, "false");
            Token(FALSE);
        case LTL_AND:
            sprintf(yytext, "&&");
            Token(AND);
        case LTL_OR:
            sprintf(yytext, "||");
            Token(OR);
        case LTL_NOT:
            sprintf(yytext, "!");
            Token(NOT);
        case LTL_FUTURE:
            sprintf(yytext, "<>");
            Token(EVENTUALLY);
        case LTL_GLOBALLY:
            sprintf(yytext, "[]");
            Token(ALWAYS);
        case LTL_UNTIL:
            sprintf(yytext, "U");
            Token(U_OPER);
        case LTL_RELEASE:
            sprintf(yytext, "V");
            Token(V_OPER);
#ifdef NXT
        case LTL_NEXT:
            sprintf(yytext, "X");
            Token(NEXT);
#endif
        case LTL_EQUIV:
            sprintf(yytext, "<->");
            Token(EQUIV);
        case LTL_IMPLY:
            sprintf(yytext, "->");
            Token(IMPLIES);
        case LTL_EQ:
        case LTL_SVAR:
        case LTL_EN:
        case LTL_VAR:
        case LTL_NEQ:
        case LTL_LT:
        case LTL_LEQ:
        case LTL_GT:
        case LTL_GEQ:
        case LTL_MULT:
        case LTL_DIV:
        case LTL_REM:
        case LTL_ADD:
        case LTL_SUB: {
            ltsmin_expr_print_ltl(e, yytext);
            /*ltsmin_expr_t ne = */ltsmin_expr_lookup(e, yytext, &le_list);

            tl_yylval = tl_nn(PREDICATE,ZN,ZN);
            tl_yylval->sym = tl_lookup(yytext);
            append_uform(yytext);
            }
            Debug ("LTL Lexer: passing token '%s' to LTL2BA", yytext);
            return PREDICATE;
        default:
            Abort("unhandled LTL_TOKEN: %s\n", LTL_NAME(e->token));
            break;
    }
    tl_yyerror("expected something...");
    return 0;
}

/* ltsmin extension for passing an ltsmin-expression to ltl2ba */
void
ltsmin_ltl2ba(ltsmin_expr_t e)
{
    ltl2ba_init();
#ifdef LTSMIN_DEBUG
    tl_verbose = log_active (infoLong);
#endif
    tl_yylex = tl_lex;
    set_uform("");
    const int le_size = 64;
    // linearized expression
    le = RTmalloc(sizeof(ltsmin_lin_expr_t) + le_size * sizeof(ltsmin_expr_t));
    le->size = le_size;
    le->count = 0;

    linearize_ltsmin_expr(e, &le);

    // print linearized expression for debugging:
    /*for(int i=0; i < le->count; i++) {
        if (le->lin_expr[i] == LTL_LPAR) {
            printf("par (\n");
        } else if (le->lin_expr[i] == LTL_RPAR) {
            printf("par )\n");
        } else {
            printf("token %d, idx %d\n", le->lin_expr[i]->token, le->lin_expr[i]->idx);
        }
    }*/

    le_at = 0;

    // now start parsing the expression
    tl_parse();
}

// XXX make proper interface in ltl2ba
extern int sym_size, n_sym, sym_id;
extern char **sym_table;

ltsmin_buchi_t*
ltsmin_buchi()
{
    ltsmin_buchi_t* res = NULL;
    int     accept = buchi_accept();
    BState *bstates = buchi_bstates();
    BTrans *t;
    BState *s;
    if(bstates->nxt == bstates) { /* empty automaton */
        return NULL;
    }
    if(bstates->nxt->nxt == bstates && bstates->nxt->id == 0) { /* true */
        return NULL;
    }

    // mapping map_id[final * 32 + s_id + 1] -> state id
    int map_id[32*32];
    int state_count = 0;
    for(s = bstates->prv; s != bstates; s = s->prv) {
        map_id[s->final * 32 + s->id + 1] = state_count++;
    }

    // allocate buchi struct
    res = RTmalloc(sizeof(ltsmin_buchi_t) + state_count * sizeof(ltsmin_buchi_state_t*));
    int n_symbols = sym_id;
    res->acceptance_set = 0;
    res->predicate_count = n_symbols;
    res->predicates = RTmalloc(n_symbols * sizeof(ltsmin_expr_t));
    res->edge_predicates = 1; // indicate that there may be transition predicates
    for (int i=0; i < n_symbols; i++) {
        ltsmin_expr_t e = ltsmin_expr_lookup (NULL, sym_table[i], &le_list);
        Debug("LTL symbol table: lookup up predicate '%s': %p", sym_table[i], e);
        Assert (e != NULL, "Lookup failed for expression: %s", sym_table[i]);
        res->predicates[i] = e;
    }
    res->state_count = state_count;
    int index = 0;
    state_count = 0;
    for(s = bstates->prv; s != bstates; s = s->prv) {
        ltsmin_buchi_state_t * bs = NULL;
        int transition_count = 0;
        // count transitions
        for(t = s->trans->nxt; t != s->trans; t = t->nxt)
            transition_count++;
        // allocate memory for transitions
        bs = RTmalloc(sizeof(ltsmin_buchi_state_t) + transition_count * sizeof(ltsmin_buchi_transition_t));
        bs->accept = (s->final == accept);
        bs->transition_count = transition_count;

        transition_count = 0;
        for(t = s->trans->nxt; t != s->trans; t = t->nxt) {
            bs->transitions[transition_count].acc_set = 0;
            bs->transitions[transition_count].pos = t->pos;
            bs->transitions[transition_count].neg = t->neg;
            bs->transitions[transition_count].to_state = map_id[t->to->final*32+t->to->id+1];
            bs->transitions[transition_count].index = index++;
            transition_count++;
        }

        res->states[state_count++] = bs;
    }
    res->trans_count = index;
    return res;
}

static size_t
print_ltsmin_buchi_helper (const ltsmin_buchi_t *ba, ltsmin_parse_env_t env,
                           int is_hoa, int i, int j, char *buf, size_t max_buf)
{
    size_t n = 0;
    for(int k=0; k < ba->predicate_count; k++) {
        if (ba->states[i]->transitions[j].pos[k/32] & (1<<(k%32))) {
            if (n!=0) n += snprintf(buf + (buf?n:0), max_buf, " && ");
            char *expr = LTSminPrintExpr(ba->predicates[k], env);
            n += snprintf(buf + (buf?n:0), max_buf, "%s",expr);
        }
        if (ba->states[i]->transitions[j].neg[k/32] & (1<<(k%32))) {
            if (n!=0) n += snprintf(buf + (buf?n:0), max_buf, " && ");
            char *expr = LTSminPrintExpr(ba->predicates[k], env);
            n += snprintf(buf + (buf?n:0), max_buf, "!%s",expr);
        }
    }

    if (n == 0) n += snprintf(buf + (buf?n:0), max_buf, "true");

    if (is_hoa && ba->states[i]->transitions[j].acc_set) { // HOA acceptance
        n += snprintf(buf + (buf?n:0), max_buf, " {");
        for (int p=0; p<32; p++) {
            if ( ba->states[i]->transitions[j].acc_set & (1 << p) )
                n += snprintf(buf + (buf?n:0), max_buf, " %d",p);
        }
        n += snprintf(buf + (buf?n:0), max_buf, " }");
    }

    return n;
}

void
print_ltsmin_buchi(const ltsmin_buchi_t *ba, ltsmin_parse_env_t env)
{
    int is_hoa = ba->acceptance_set;
    if (is_hoa) { // HOA acceptance
        char *buf = NULL;
        for (int p=0; p<32; p++) {
            if ( ba->acceptance_set & (1 << p) ) {
                // print two times, first to obtain the size (+ nullbyte)
                size_t n = snprintf(NULL, 0, " %d", p) + 1;
                buf = RTmalloc (sizeof (char) * n);
                // and the second time for the actual print
                snprintf(buf, n, " %d", p);
            }
        }
        Print("Acceptance set: {%s }", buf);
        RTfree(buf);
    }
    for(int i=0; i < ba->state_count; i++) {
        if (is_hoa) {
            if (!ba->states[i]->accept) {
                Print(" state %d:", i);
            } else {
                char *buf = NULL;
                for (int p=0; p<32; p++) {
                    if ( ba->states[i]->accept & (1 << p) ) {
                        // print two times, first to obtain the size (+ nullbyte)
                        size_t n = snprintf(NULL, 0, " %d", p) + 1;
                        buf = RTmalloc (sizeof (char) * n);
                        // and the second time for the actual print
                        snprintf(buf, n, " %d", p);
                    }
                }
                Print(" state %d: {%s }", i, buf);
                RTfree(buf);
            }
        }
        else {
            Print(" state %d: %s", i, ba->states[i]->accept ? "accepting" : "non-accepting");
        }
        for(int j=0; j < ba->states[i]->transition_count; j++) {
            // print two times, first to obtain the size (+ nullbyte)
            size_t n = print_ltsmin_buchi_helper (ba, env, is_hoa, i, j, NULL, 0) + 1;
            char *buf = RTmalloc (sizeof (char) * n);
            // and the second time for the actual print
            print_ltsmin_buchi_helper (ba, env, is_hoa, i, j, buf, n);

            Print("  -> %d, | %s", ba->states[i]->transitions[j].to_state, buf);
            RTfree(buf);
        }
    }
}

void
check_LTL(ltsmin_expr_t e, ltsmin_parse_env_t env, struct LTL_info* info)
{
    switch (e->node_type) {
        case BINARY_OP: {
            check_LTL(e->arg1, env, info);
            check_LTL(e->arg2, env, info);
            break;
        }
        case UNARY_OP: {
            switch (e->token) {
                case LTL_NEXT: {
                    info->has_X = 1;
                    break;
                }
                default: break;
            }
            check_LTL(e->arg1, env, info);
            break;
        }
        case EVAR: {
            info->has_EVAR = 1;
            break;
        }
        default: break;
    }
}

ltsmin_buchi_t *
init_ltsmin_buchi(lts_type_t ltstype, const char *ltl_file, bool negate)
{
    Print("LTL layer: formula: %s", ltl_file);
    ltsmin_parse_env_t ltl = ltl_parse_file (ltl_file, ltstype);
    LTL_info_t LTL_info = {0, 0};
    check_LTL(ltl->expr, ltl, &LTL_info);

    ltl->expr = LTSminExpr(UNARY_OP, LTL_NOT, 0, ltl->expr, NULL);

    ltsmin_buchi_t *ba;
#ifdef HAVE_SPOT
    if (type == PINS_BUCHI_TYPE_TGBA || type == PINS_BUCHI_TYPE_SPOTBA) {
        ltsmin_ltl2spot(notltl, type == PINS_BUCHI_TYPE_TGBA, env);
        ba = ltsmin_hoa_buchi(env);
    } else {
#endif
        //Assert(type == PINS_BUCHI_TYPE_BA, "Buchi type is not possible without Spot");
        ltsmin_ltl2ba(ltl->expr);
        ba = ltsmin_buchi();
#ifdef HAVE_SPOT
    }
#endif

    if (NULL == ba || ba->state_count == 0) {
        Print("Empty buchi automaton.");
        Abort("The property is TRUE.");
    }
    if (ba->predicate_count > 30) {
        Abort("more than 30 predicates in buchi automaton are currently not supported");
    }
    ba->env = ltl;

    Print("buchi has %d states", ba->state_count);
    if (DEBUG) print_ltsmin_buchi(ba, ltl);
    return ba;
}

void
ltl_exit (void *model)
{
#ifdef HAVE_SPOT
    ltsmin_hoa_destroy();
#endif
    (void)model;
}

