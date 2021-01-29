/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_begin = 261,
     keyword_if = 262,
     keyword_unless = 263,
     keyword_while = 264,
     keyword_until = 265,
     keyword_for = 266,
     keyword_undef = 267,
     keyword_rescue = 268,
     keyword_ensure = 269,
     keyword_end = 270,
     keyword_then = 271,
     keyword_elsif = 272,
     keyword_else = 273,
     keyword_case = 274,
     keyword_when = 275,
     keyword_break = 276,
     keyword_next = 277,
     keyword_redo = 278,
     keyword_retry = 279,
     keyword_in = 280,
     keyword_do = 281,
     keyword_do_cond = 282,
     keyword_do_block = 283,
     keyword_do_LAMBDA = 284,
     keyword_return = 285,
     keyword_yield = 286,
     keyword_super = 287,
     keyword_self = 288,
     keyword_nil = 289,
     keyword_true = 290,
     keyword_false = 291,
     keyword_and = 292,
     keyword_or = 293,
     keyword_not = 294,
     modifier_if = 295,
     modifier_unless = 296,
     modifier_while = 297,
     modifier_until = 298,
     modifier_rescue = 299,
     keyword_alias = 300,
     keyword_BEGIN = 301,
     keyword_END = 302,
     keyword__LINE__ = 303,
     keyword__FILE__ = 304,
     keyword__ENCODING__ = 305,
     tIDENTIFIER = 306,
     tFID = 307,
     tGVAR = 308,
     tIVAR = 309,
     tCONSTANT = 310,
     tCVAR = 311,
     tLABEL_TAG = 312,
     tINTEGER = 313,
     tFLOAT = 314,
     tCHAR = 315,
     tXSTRING = 316,
     tREGEXP = 317,
     tSTRING = 318,
     tSTRING_PART = 319,
     tSTRING_MID = 320,
     tNTH_REF = 321,
     tBACK_REF = 322,
     tREGEXP_END = 323,
     tUPLUS = 324,
     tUMINUS = 325,
     tPOW = 326,
     tCMP = 327,
     tEQ = 328,
     tEQQ = 329,
     tNEQ = 330,
     tGEQ = 331,
     tLEQ = 332,
     tANDOP = 333,
     tOROP = 334,
     tMATCH = 335,
     tNMATCH = 336,
     tDOT2 = 337,
     tDOT3 = 338,
     tAREF = 339,
     tASET = 340,
     tLSHFT = 341,
     tRSHFT = 342,
     tCOLON2 = 343,
     tCOLON3 = 344,
     tOP_ASGN = 345,
     tASSOC = 346,
     tLPAREN = 347,
     tLPAREN_ARG = 348,
     tRPAREN = 349,
     tLBRACK = 350,
     tLBRACE = 351,
     tLBRACE_ARG = 352,
     tSTAR = 353,
     tDSTAR = 354,
     tAMPER = 355,
     tLAMBDA = 356,
     tANDDOT = 357,
     tSYMBEG = 358,
     tREGEXP_BEG = 359,
     tWORDS_BEG = 360,
     tSYMBOLS_BEG = 361,
     tSTRING_BEG = 362,
     tXSTRING_BEG = 363,
     tSTRING_DVAR = 364,
     tLAMBEG = 365,
     tHEREDOC_BEG = 366,
     tHEREDOC_END = 367,
     tLITERAL_DELIM = 368,
     tHD_LITERAL_DELIM = 369,
     tHD_STRING_PART = 370,
     tHD_STRING_MID = 371,
     tLOWEST = 372,
     tUMINUS_NUM = 373,
     tLAST_TOKEN = 374
   };
#endif
/* Tokens.  */
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_begin 261
#define keyword_if 262
#define keyword_unless 263
#define keyword_while 264
#define keyword_until 265
#define keyword_for 266
#define keyword_undef 267
#define keyword_rescue 268
#define keyword_ensure 269
#define keyword_end 270
#define keyword_then 271
#define keyword_elsif 272
#define keyword_else 273
#define keyword_case 274
#define keyword_when 275
#define keyword_break 276
#define keyword_next 277
#define keyword_redo 278
#define keyword_retry 279
#define keyword_in 280
#define keyword_do 281
#define keyword_do_cond 282
#define keyword_do_block 283
#define keyword_do_LAMBDA 284
#define keyword_return 285
#define keyword_yield 286
#define keyword_super 287
#define keyword_self 288
#define keyword_nil 289
#define keyword_true 290
#define keyword_false 291
#define keyword_and 292
#define keyword_or 293
#define keyword_not 294
#define modifier_if 295
#define modifier_unless 296
#define modifier_while 297
#define modifier_until 298
#define modifier_rescue 299
#define keyword_alias 300
#define keyword_BEGIN 301
#define keyword_END 302
#define keyword__LINE__ 303
#define keyword__FILE__ 304
#define keyword__ENCODING__ 305
#define tIDENTIFIER 306
#define tFID 307
#define tGVAR 308
#define tIVAR 309
#define tCONSTANT 310
#define tCVAR 311
#define tLABEL_TAG 312
#define tINTEGER 313
#define tFLOAT 314
#define tCHAR 315
#define tXSTRING 316
#define tREGEXP 317
#define tSTRING 318
#define tSTRING_PART 319
#define tSTRING_MID 320
#define tNTH_REF 321
#define tBACK_REF 322
#define tREGEXP_END 323
#define tUPLUS 324
#define tUMINUS 325
#define tPOW 326
#define tCMP 327
#define tEQ 328
#define tEQQ 329
#define tNEQ 330
#define tGEQ 331
#define tLEQ 332
#define tANDOP 333
#define tOROP 334
#define tMATCH 335
#define tNMATCH 336
#define tDOT2 337
#define tDOT3 338
#define tAREF 339
#define tASET 340
#define tLSHFT 341
#define tRSHFT 342
#define tCOLON2 343
#define tCOLON3 344
#define tOP_ASGN 345
#define tASSOC 346
#define tLPAREN 347
#define tLPAREN_ARG 348
#define tRPAREN 349
#define tLBRACK 350
#define tLBRACE 351
#define tLBRACE_ARG 352
#define tSTAR 353
#define tDSTAR 354
#define tAMPER 355
#define tLAMBDA 356
#define tANDDOT 357
#define tSYMBEG 358
#define tREGEXP_BEG 359
#define tWORDS_BEG 360
#define tSYMBOLS_BEG 361
#define tSTRING_BEG 362
#define tXSTRING_BEG 363
#define tSTRING_DVAR 364
#define tLAMBEG 365
#define tHEREDOC_BEG 366
#define tHEREDOC_END 367
#define tLITERAL_DELIM 368
#define tHD_LITERAL_DELIM 369
#define tHD_STRING_PART 370
#define tHD_STRING_MID 371
#define tLOWEST 372
#define tUMINUS_NUM 373
#define tLAST_TOKEN 374




/* Copy the first part of user declarations.  */
#line 7 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"

#undef PARSER_DEBUG
#ifdef PARSER_DEBUG
# define YYDEBUG 1
#endif
#define YYERROR_VERBOSE 1
/*
 * Force yacc to use our memory management.  This is a little evil because
 * the macros assume that "parser_state *p" is in scope
 */
#define YYMALLOC(n)    mrb_malloc(p->mrb, (n))
#define YYFREE(o)      mrb_free(p->mrb, (o))
#define YYSTACK_USE_ALLOCA 0

#include <ctype.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <mruby.h>
#include <mruby/compile.h>
#include <mruby/proc.h>
#include <mruby/error.h>
#include <mruby/throw.h>
#include "node.h"

#define YYLEX_PARAM p

typedef mrb_ast_node node;
typedef struct mrb_parser_state parser_state;
typedef struct mrb_parser_heredoc_info parser_heredoc_info;

static int yyparse(parser_state *p);
static int yylex(void *lval, parser_state *p);
static void yyerror(parser_state *p, const char *s);
static void yywarn(parser_state *p, const char *s);
static void yywarning(parser_state *p, const char *s);
static void backref_error(parser_state *p, node *n);
static void void_expr_error(parser_state *p, node *n);
static void tokadd(parser_state *p, int32_t c);

#define identchar(c) (ISALNUM(c) || (c) == '_' || !ISASCII(c))

typedef unsigned int stack_type;

#define BITSTACK_PUSH(stack, n) ((stack) = ((stack)<<1)|((n)&1))
#define BITSTACK_POP(stack)     ((stack) = (stack) >> 1)
#define BITSTACK_LEXPOP(stack)  ((stack) = ((stack) >> 1) | ((stack) & 1))
#define BITSTACK_SET_P(stack)   ((stack)&1)

#define COND_PUSH(n)    BITSTACK_PUSH(p->cond_stack, (n))
#define COND_POP()      BITSTACK_POP(p->cond_stack)
#define COND_LEXPOP()   BITSTACK_LEXPOP(p->cond_stack)
#define COND_P()        BITSTACK_SET_P(p->cond_stack)

#define CMDARG_PUSH(n)  BITSTACK_PUSH(p->cmdarg_stack, (n))
#define CMDARG_POP()    BITSTACK_POP(p->cmdarg_stack)
#define CMDARG_LEXPOP() BITSTACK_LEXPOP(p->cmdarg_stack)
#define CMDARG_P()      BITSTACK_SET_P(p->cmdarg_stack)

#define SET_LINENO(c,n) ((c)->lineno = (n))
#define NODE_LINENO(c,n) do {\
  if (n) {\
     (c)->filename_index = (n)->filename_index;\
     (c)->lineno = (n)->lineno;\
  }\
} while (0)

#define sym(x) ((mrb_sym)(intptr_t)(x))
#define nsym(x) ((node*)(intptr_t)(x))
#define nint(x) ((node*)(intptr_t)(x))
#define intn(x) ((int)(intptr_t)(x))

static inline mrb_sym
intern_cstr_gen(parser_state *p, const char *s)
{
  return mrb_intern_cstr(p->mrb, s);
}
#define intern_cstr(s) intern_cstr_gen(p,(s))

static inline mrb_sym
intern_gen(parser_state *p, const char *s, size_t len)
{
  return mrb_intern(p->mrb, s, len);
}
#define intern(s,len) intern_gen(p,(s),(len))

static inline mrb_sym
intern_gen_c(parser_state *p, const char c)
{
  return mrb_intern(p->mrb, &c, 1);
}
#define intern_c(c) intern_gen_c(p,(c))

static void
cons_free_gen(parser_state *p, node *cons)
{
  cons->cdr = p->cells;
  p->cells = cons;
}
#define cons_free(c) cons_free_gen(p, (c))

static void*
parser_palloc(parser_state *p, size_t size)
{
  void *m = mrb_pool_alloc(p->pool, size);

  if (!m) {
    MRB_THROW(p->jmp);
  }
  return m;
}

static node*
cons_gen(parser_state *p, node *car, node *cdr)
{
  node *c;

  if (p->cells) {
    c = p->cells;
    p->cells = p->cells->cdr;
  }
  else {
    c = (node *)parser_palloc(p, sizeof(mrb_ast_node));
  }

  c->car = car;
  c->cdr = cdr;
  c->lineno = p->lineno;
  c->filename_index = p->current_filename_index;
  /* beginning of next partial file; need to point the previous file */
  if (p->lineno == 0 && p->current_filename_index > 0) {
    c->filename_index-- ;
  }
  return c;
}
#define cons(a,b) cons_gen(p,(a),(b))

static node*
list1_gen(parser_state *p, node *a)
{
  return cons(a, 0);
}
#define list1(a) list1_gen(p, (a))

static node*
list2_gen(parser_state *p, node *a, node *b)
{
  return cons(a, cons(b,0));
}
#define list2(a,b) list2_gen(p, (a),(b))

static node*
list3_gen(parser_state *p, node *a, node *b, node *c)
{
  return cons(a, cons(b, cons(c,0)));
}
#define list3(a,b,c) list3_gen(p, (a),(b),(c))

static node*
list4_gen(parser_state *p, node *a, node *b, node *c, node *d)
{
  return cons(a, cons(b, cons(c, cons(d, 0))));
}
#define list4(a,b,c,d) list4_gen(p, (a),(b),(c),(d))

static node*
list5_gen(parser_state *p, node *a, node *b, node *c, node *d, node *e)
{
  return cons(a, cons(b, cons(c, cons(d, cons(e, 0)))));
}
#define list5(a,b,c,d,e) list5_gen(p, (a),(b),(c),(d),(e))

static node*
list6_gen(parser_state *p, node *a, node *b, node *c, node *d, node *e, node *f)
{
  return cons(a, cons(b, cons(c, cons(d, cons(e, cons(f, 0))))));
}
#define list6(a,b,c,d,e,f) list6_gen(p, (a),(b),(c),(d),(e),(f))

static node*
append_gen(parser_state *p, node *a, node *b)
{
  node *c = a;

  if (!a) return b;
  while (c->cdr) {
    c = c->cdr;
  }
  if (b) {
    c->cdr = b;
  }
  return a;
}
#define append(a,b) append_gen(p,(a),(b))
#define push(a,b) append_gen(p,(a),list1(b))

static char*
parser_strndup(parser_state *p, const char *s, size_t len)
{
  char *b = (char *)parser_palloc(p, len+1);

  memcpy(b, s, len);
  b[len] = '\0';
  return b;
}
#undef strndup
#define strndup(s,len) parser_strndup(p, s, len)

static char*
parser_strdup(parser_state *p, const char *s)
{
  return parser_strndup(p, s, strlen(s));
}
#undef strdup
#define strdup(s) parser_strdup(p, s)

/* xxx ----------------------------- */

static node*
local_switch(parser_state *p)
{
  node *prev = p->locals;

  p->locals = cons(0, 0);
  return prev;
}

static void
local_resume(parser_state *p, node *prev)
{
  p->locals = prev;
}

static void
local_nest(parser_state *p)
{
  p->locals = cons(0, p->locals);
}

static void
local_unnest(parser_state *p)
{
  if (p->locals) {
    p->locals = p->locals->cdr;
  }
}

static mrb_bool
local_var_p(parser_state *p, mrb_sym sym)
{
  node *l = p->locals;

  while (l) {
    node *n = l->car;
    while (n) {
      if (sym(n->car) == sym) return TRUE;
      n = n->cdr;
    }
    l = l->cdr;
  }
  return FALSE;
}

static void
local_add_f(parser_state *p, mrb_sym sym)
{
  if (p->locals) {
    p->locals->car = push(p->locals->car, nsym(sym));
  }
}

static void
local_add(parser_state *p, mrb_sym sym)
{
  if (!local_var_p(p, sym)) {
    local_add_f(p, sym);
  }
}

static void
local_add_blk(parser_state *p, mrb_sym blk)
{
  /* allocate register for block */
  local_add_f(p, blk ? blk : mrb_intern_lit(p->mrb, "&"));
}

static void
local_add_kw(parser_state *p, mrb_sym kwd)
{
  /* allocate register for keywords hash */
  local_add_f(p, kwd ? kwd : mrb_intern_lit(p->mrb, "**"));
}

static node*
locals_node(parser_state *p)
{
  return p->locals ? p->locals->car : NULL;
}

/* (:scope (vars..) (prog...)) */
static node*
new_scope(parser_state *p, node *body)
{
  return cons((node*)NODE_SCOPE, cons(locals_node(p), body));
}

/* (:begin prog...) */
static node*
new_begin(parser_state *p, node *body)
{
  if (body) {
    return list2((node*)NODE_BEGIN, body);
  }
  return cons((node*)NODE_BEGIN, 0);
}

#define newline_node(n) (n)

/* (:rescue body rescue else) */
static node*
new_rescue(parser_state *p, node *body, node *resq, node *els)
{
  return list4((node*)NODE_RESCUE, body, resq, els);
}

static node*
new_mod_rescue(parser_state *p, node *body, node *resq)
{
  return new_rescue(p, body, list1(list3(0, 0, resq)), 0);
}

/* (:ensure body ensure) */
static node*
new_ensure(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_ENSURE, cons(a, cons(0, b)));
}

/* (:nil) */
static node*
new_nil(parser_state *p)
{
  return list1((node*)NODE_NIL);
}

/* (:true) */
static node*
new_true(parser_state *p)
{
  return list1((node*)NODE_TRUE);
}

/* (:false) */
static node*
new_false(parser_state *p)
{
  return list1((node*)NODE_FALSE);
}

/* (:alias new old) */
static node*
new_alias(parser_state *p, mrb_sym a, mrb_sym b)
{
  return cons((node*)NODE_ALIAS, cons(nsym(a), nsym(b)));
}

/* (:if cond then else) */
static node*
new_if(parser_state *p, node *a, node *b, node *c)
{
  void_expr_error(p, a);
  return list4((node*)NODE_IF, a, b, c);
}

/* (:unless cond then else) */
static node*
new_unless(parser_state *p, node *a, node *b, node *c)
{
  void_expr_error(p, a);
  return list4((node*)NODE_IF, a, c, b);
}

/* (:while cond body) */
static node*
new_while(parser_state *p, node *a, node *b)
{
  void_expr_error(p, a);
  return cons((node*)NODE_WHILE, cons(a, b));
}

/* (:until cond body) */
static node*
new_until(parser_state *p, node *a, node *b)
{
  void_expr_error(p, a);
  return cons((node*)NODE_UNTIL, cons(a, b));
}

/* (:for var obj body) */
static node*
new_for(parser_state *p, node *v, node *o, node *b)
{
  void_expr_error(p, o);
  return list4((node*)NODE_FOR, v, o, b);
}

/* (:case a ((when ...) body) ((when...) body)) */
static node*
new_case(parser_state *p, node *a, node *b)
{
  node *n = list2((node*)NODE_CASE, a);
  node *n2 = n;

  void_expr_error(p, a);
  while (n2->cdr) {
    n2 = n2->cdr;
  }
  n2->cdr = b;
  return n;
}

/* (:postexe a) */
static node*
new_postexe(parser_state *p, node *a)
{
  return cons((node*)NODE_POSTEXE, a);
}

/* (:self) */
static node*
new_self(parser_state *p)
{
  return list1((node*)NODE_SELF);
}

/* (:call a b c) */
static node*
new_call(parser_state *p, node *a, mrb_sym b, node *c, int pass)
{
  node *n = list4(nint(pass?NODE_CALL:NODE_SCALL), a, nsym(b), c);
  void_expr_error(p, a);
  NODE_LINENO(n, a);
  return n;
}

/* (:fcall self mid args) */
static node*
new_fcall(parser_state *p, mrb_sym b, node *c)
{
  node *n = new_self(p);
  NODE_LINENO(n, c);
  n = list4((node*)NODE_FCALL, n, nsym(b), c);
  NODE_LINENO(n, c);
  return n;
}

/* (:super . c) */
static node*
new_super(parser_state *p, node *c)
{
  return cons((node*)NODE_SUPER, c);
}

/* (:zsuper) */
static node*
new_zsuper(parser_state *p)
{
  return list1((node*)NODE_ZSUPER);
}

/* (:yield . c) */
static node*
new_yield(parser_state *p, node *c)
{
  if (c) {
    if (c->cdr) {
      yyerror(p, "both block arg and actual block given");
    }
    return cons((node*)NODE_YIELD, c->car);
  }
  return cons((node*)NODE_YIELD, 0);
}

/* (:return . c) */
static node*
new_return(parser_state *p, node *c)
{
  return cons((node*)NODE_RETURN, c);
}

/* (:break . c) */
static node*
new_break(parser_state *p, node *c)
{
  return cons((node*)NODE_BREAK, c);
}

/* (:next . c) */
static node*
new_next(parser_state *p, node *c)
{
  return cons((node*)NODE_NEXT, c);
}

/* (:redo) */
static node*
new_redo(parser_state *p)
{
  return list1((node*)NODE_REDO);
}

/* (:retry) */
static node*
new_retry(parser_state *p)
{
  return list1((node*)NODE_RETRY);
}

/* (:dot2 a b) */
static node*
new_dot2(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_DOT2, cons(a, b));
}

/* (:dot3 a b) */
static node*
new_dot3(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_DOT3, cons(a, b));
}

/* (:colon2 b c) */
static node*
new_colon2(parser_state *p, node *b, mrb_sym c)
{
  void_expr_error(p, b);
  return cons((node*)NODE_COLON2, cons(b, nsym(c)));
}

/* (:colon3 . c) */
static node*
new_colon3(parser_state *p, mrb_sym c)
{
  return cons((node*)NODE_COLON3, nsym(c));
}

/* (:and a b) */
static node*
new_and(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_AND, cons(a, b));
}

/* (:or a b) */
static node*
new_or(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_OR, cons(a, b));
}

/* (:array a...) */
static node*
new_array(parser_state *p, node *a)
{
  return cons((node*)NODE_ARRAY, a);
}

/* (:splat . a) */
static node*
new_splat(parser_state *p, node *a)
{
  return cons((node*)NODE_SPLAT, a);
}

/* (:hash (k . v) (k . v)...) */
static node*
new_hash(parser_state *p, node *a)
{
  return cons((node*)NODE_HASH, a);
}

/* (:kw_hash (k . v) (k . v)...) */
static node*
new_kw_hash(parser_state *p, node *a)
{
  return cons((node*)NODE_KW_HASH, a);
}

/* (:sym . a) */
static node*
new_sym(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_SYM, nsym(sym));
}

static mrb_sym
new_strsym(parser_state *p, node* str)
{
  const char *s = (const char*)str->cdr->car;
  size_t len = (size_t)str->cdr->cdr;

  return mrb_intern(p->mrb, s, len);
}

/* (:lvar . a) */
static node*
new_lvar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_LVAR, nsym(sym));
}

/* (:gvar . a) */
static node*
new_gvar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_GVAR, nsym(sym));
}

/* (:ivar . a) */
static node*
new_ivar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_IVAR, nsym(sym));
}

/* (:cvar . a) */
static node*
new_cvar(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_CVAR, nsym(sym));
}

/* (:const . a) */
static node*
new_const(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_CONST, nsym(sym));
}

/* (:undef a...) */
static node*
new_undef(parser_state *p, mrb_sym sym)
{
  return list2((node*)NODE_UNDEF, nsym(sym));
}

/* (:class class super body) */
static node*
new_class(parser_state *p, node *c, node *s, node *b)
{
  void_expr_error(p, s);
  return list4((node*)NODE_CLASS, c, s, cons(locals_node(p), b));
}

/* (:sclass obj body) */
static node*
new_sclass(parser_state *p, node *o, node *b)
{
  void_expr_error(p, o);
  return list3((node*)NODE_SCLASS, o, cons(locals_node(p), b));
}

/* (:module module body) */
static node*
new_module(parser_state *p, node *m, node *b)
{
  return list3((node*)NODE_MODULE, m, cons(locals_node(p), b));
}

/* (:def m lv (arg . body)) */
static node*
new_def(parser_state *p, mrb_sym m, node *a, node *b)
{
  return list5((node*)NODE_DEF, nsym(m), locals_node(p), a, b);
}

/* (:sdef obj m lv (arg . body)) */
static node*
new_sdef(parser_state *p, node *o, mrb_sym m, node *a, node *b)
{
  void_expr_error(p, o);
  return list6((node*)NODE_SDEF, o, nsym(m), locals_node(p), a, b);
}

/* (:arg . sym) */
static node*
new_arg(parser_state *p, mrb_sym sym)
{
  return cons((node*)NODE_ARG, nsym(sym));
}

static void
local_add_margs(parser_state *p, node *n)
{
  while (n) {
    if (n->car->car == (node*)NODE_MASGN) {
      node *t = n->car->cdr->cdr;

      n->car->cdr->cdr = NULL;
      while (t) {
        local_add_f(p, sym(t->car));
        t = t->cdr;
      }
      local_add_margs(p, n->car->cdr->car->car);
      local_add_margs(p, n->car->cdr->car->cdr->cdr->car);
    }
    n = n->cdr;
  }
}

/* (m o r m2 tail) */
/* m: (a b c) */
/* o: ((a . e1) (b . e2)) */
/* r: a */
/* m2: (a b c) */
/* b: a */
static node*
new_args(parser_state *p, node *m, node *opt, mrb_sym rest, node *m2, node *tail)
{
  node *n;

  local_add_margs(p, m);
  local_add_margs(p, m2);
  n = cons(m2, tail);
  n = cons(nsym(rest), n);
  n = cons(opt, n);
  return cons(m, n);
}

/* (:args_tail keywords rest_keywords_sym block_sym) */
static node*
new_args_tail(parser_state *p, node *kws, node *kwrest, mrb_sym blk)
{
  node *k;

  if (kws || kwrest) {
    local_add_kw(p, (kwrest && kwrest->cdr)? sym(kwrest->cdr) : 0);
  }

  local_add_blk(p, blk);

  // allocate register for keywords arguments
  // order is for Proc#parameters
  for (k = kws; k; k = k->cdr) {
    if (!k->car->cdr->cdr->car) { // allocate required keywords
      local_add_f(p, sym(k->car->cdr->car));
    }
  }
  for (k = kws; k; k = k->cdr) {
    if (k->car->cdr->cdr->car) { // allocate keywords with default
      local_add_f(p, sym(k->car->cdr->car));
    }
  }

  return list4((node*)NODE_ARGS_TAIL, kws, kwrest, nsym(blk));
}

/* (:kw_arg kw_sym def_arg) */
static node*
new_kw_arg(parser_state *p, mrb_sym kw, node *def_arg)
{
  mrb_assert(kw);
  return list3((node*)NODE_KW_ARG, nsym(kw), def_arg);
}

/* (:block_arg . a) */
static node*
new_block_arg(parser_state *p, node *a)
{
  return cons((node*)NODE_BLOCK_ARG, a);
}

/* (:block arg body) */
static node*
new_block(parser_state *p, node *a, node *b)
{
  return list4((node*)NODE_BLOCK, locals_node(p), a, b);
}

/* (:lambda arg body) */
static node*
new_lambda(parser_state *p, node *a, node *b)
{
  return list4((node*)NODE_LAMBDA, locals_node(p), a, b);
}

/* (:asgn lhs rhs) */
static node*
new_asgn(parser_state *p, node *a, node *b)
{
  void_expr_error(p, b);
  return cons((node*)NODE_ASGN, cons(a, b));
}

/* (:masgn mlhs=(pre rest post)  mrhs) */
static node*
new_masgn(parser_state *p, node *a, node *b)
{
  void_expr_error(p, b);
  return cons((node*)NODE_MASGN, cons(a, b));
}

/* (:masgn mlhs mrhs) no check */
static node*
new_masgn_param(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_MASGN, cons(a, b));
}

/* (:asgn lhs rhs) */
static node*
new_op_asgn(parser_state *p, node *a, mrb_sym op, node *b)
{
  void_expr_error(p, b);
  return list4((node*)NODE_OP_ASGN, a, nsym(op), b);
}

/* (:int . i) */
static node*
new_int(parser_state *p, const char *s, int base)
{
  return list3((node*)NODE_INT, (node*)strdup(s), nint(base));
}

#ifndef MRB_WITHOUT_FLOAT
/* (:float . i) */
static node*
new_float(parser_state *p, const char *s)
{
  return cons((node*)NODE_FLOAT, (node*)strdup(s));
}
#endif

/* (:str . (s . len)) */
static node*
new_str(parser_state *p, const char *s, size_t len)
{
  return cons((node*)NODE_STR, cons((node*)strndup(s, len), nint(len)));
}

/* (:dstr . a) */
static node*
new_dstr(parser_state *p, node *a)
{
  return cons((node*)NODE_DSTR, a);
}

static int
string_node_p(node *n)
{
  return (int)((enum node_type)(intptr_t)n->car == NODE_STR);
}

static node*
composite_string_node(parser_state *p, node *a, node *b)
{
  size_t newlen = (size_t)a->cdr + (size_t)b->cdr;
  char *str = (char*)mrb_pool_realloc(p->pool, a->car, (size_t)a->cdr + 1, newlen + 1);
  memcpy(str + (size_t)a->cdr, b->car, (size_t)b->cdr);
  str[newlen] = '\0';
  a->car = (node*)str;
  a->cdr = (node*)newlen;
  cons_free(b);
  return a;
}

static node*
concat_string(parser_state *p, node *a, node *b)
{
  if (string_node_p(a)) {
    if (string_node_p(b)) {
      /* a == NODE_STR && b == NODE_STR */
      composite_string_node(p, a->cdr, b->cdr);
      cons_free(b);
      return a;
    }
    else {
      /* a == NODE_STR && b == NODE_DSTR */

      if (string_node_p(b->cdr->car)) {
        /* a == NODE_STR && b->[NODE_STR, ...] */
        composite_string_node(p, a->cdr, b->cdr->car->cdr);
        cons_free(b->cdr->car);
        b->cdr->car = a;
        return b;
      }
    }
  }
  else if (string_node_p(b)) {
    /* a == NODE_DSTR && b == NODE_STR */

    node *c;
    for (c = a; c->cdr != NULL; c = c->cdr) ;
    if (string_node_p(c->car)) {
      /* a->[..., NODE_STR] && b == NODE_STR */
      composite_string_node(p, c->car->cdr, b->cdr);
      cons_free(b);
      return a;
    }

    push(a, b);
    return a;
  }
  else {
    /* a == NODE_DSTR && b == NODE_DSTR */

    node *c, *d;
    for (c = a; c->cdr != NULL; c = c->cdr) ;
    if (string_node_p(c->car) && string_node_p(b->cdr->car)) {
      /* a->[..., NODE_STR] && b->[NODE_STR, ...] */
      d = b->cdr;
      cons_free(b);
      composite_string_node(p, c->car->cdr, d->car->cdr);
      cons_free(d->car);
      c->cdr = d->cdr;
      cons_free(d);
      return a;
    }
    else {
      c->cdr = b->cdr;
      cons_free(b);
      return a;
    }
  }

  return new_dstr(p, list2(a, b));
}

/* (:str . (s . len)) */
static node*
new_xstr(parser_state *p, const char *s, int len)
{
  return cons((node*)NODE_XSTR, cons((node*)strndup(s, len), nint(len)));
}

/* (:xstr . a) */
static node*
new_dxstr(parser_state *p, node *a)
{
  return cons((node*)NODE_DXSTR, a);
}

/* (:dsym . a) */
static node*
new_dsym(parser_state *p, node *a)
{
  return cons((node*)NODE_DSYM, a);
}

/* (:regx . (s . (opt . enc))) */
static node*
new_regx(parser_state *p, const char *p1, const char* p2, const char* p3)
{
  return cons((node*)NODE_REGX, cons((node*)p1, cons((node*)p2, (node*)p3)));
}

/* (:dregx . (a . b)) */
static node*
new_dregx(parser_state *p, node *a, node *b)
{
  return cons((node*)NODE_DREGX, cons(a, b));
}

/* (:backref . n) */
static node*
new_back_ref(parser_state *p, int n)
{
  return cons((node*)NODE_BACK_REF, nint(n));
}

/* (:nthref . n) */
static node*
new_nth_ref(parser_state *p, int n)
{
  return cons((node*)NODE_NTH_REF, nint(n));
}

/* (:heredoc . a) */
static node*
new_heredoc(parser_state *p)
{
  parser_heredoc_info *inf = (parser_heredoc_info *)parser_palloc(p, sizeof(parser_heredoc_info));
  return cons((node*)NODE_HEREDOC, (node*)inf);
}

static void
new_bv(parser_state *p, mrb_sym id)
{
}

static node*
new_literal_delim(parser_state *p)
{
  return cons((node*)NODE_LITERAL_DELIM, 0);
}

/* (:words . a) */
static node*
new_words(parser_state *p, node *a)
{
  return cons((node*)NODE_WORDS, a);
}

/* (:symbols . a) */
static node*
new_symbols(parser_state *p, node *a)
{
  return cons((node*)NODE_SYMBOLS, a);
}

/* xxx ----------------------------- */

/* (:call a op) */
static node*
call_uni_op(parser_state *p, node *recv, const char *m)
{
  void_expr_error(p, recv);
  return new_call(p, recv, intern_cstr(m), 0, 1);
}

/* (:call a op b) */
static node*
call_bin_op(parser_state *p, node *recv, const char *m, node *arg1)
{
  return new_call(p, recv, intern_cstr(m), list1(list1(arg1)), 1);
}

static void
args_with_block(parser_state *p, node *a, node *b)
{
  if (b) {
    if (a->cdr) {
      yyerror(p, "both block arg and actual block given");
    }
    a->cdr = b;
  }
}

static void
call_with_block(parser_state *p, node *a, node *b)
{
  node *n;

  switch ((enum node_type)intn(a->car)) {
  case NODE_SUPER:
  case NODE_ZSUPER:
    if (!a->cdr) a->cdr = cons(0, b);
    else {
      args_with_block(p, a->cdr, b);
    }
    break;
  case NODE_CALL:
  case NODE_FCALL:
  case NODE_SCALL:
    n = a->cdr->cdr->cdr;
    if (!n->car) n->car = cons(0, b);
    else {
      args_with_block(p, n->car, b);
    }
    break;
  default:
    break;
  }
}

static node*
negate_lit(parser_state *p, node *n)
{
  return cons((node*)NODE_NEGATE, n);
}

static node*
cond(node *n)
{
  return n;
}

static node*
ret_args(parser_state *p, node *n)
{
  if (n->cdr) {
    yyerror(p, "block argument should not be given");
    return NULL;
  }
  if (!n->car->cdr) return n->car->car;
  return new_array(p, n->car);
}

static void
assignable(parser_state *p, node *lhs)
{
  if (intn(lhs->car) == NODE_LVAR) {
    local_add(p, sym(lhs->cdr));
  }
}

static node*
var_reference(parser_state *p, node *lhs)
{
  node *n;

  if (intn(lhs->car) == NODE_LVAR) {
    if (!local_var_p(p, sym(lhs->cdr))) {
      n = new_fcall(p, sym(lhs->cdr), 0);
      cons_free(lhs);
      return n;
    }
  }

  return lhs;
}

typedef enum mrb_string_type  string_type;

static node*
new_strterm(parser_state *p, string_type type, int term, int paren)
{
  return cons(nint(type), cons((node*)0, cons(nint(paren), nint(term))));
}

static void
end_strterm(parser_state *p)
{
  cons_free(p->lex_strterm->cdr->cdr);
  cons_free(p->lex_strterm->cdr);
  cons_free(p->lex_strterm);
  p->lex_strterm = NULL;
}

static parser_heredoc_info *
parsing_heredoc_inf(parser_state *p)
{
  node *nd = p->parsing_heredoc;
  if (nd == NULL)
    return NULL;
  /* mrb_assert(nd->car->car == NODE_HEREDOC); */
  return (parser_heredoc_info*)nd->car->cdr;
}

static void
heredoc_treat_nextline(parser_state *p)
{
  if (p->heredocs_from_nextline == NULL)
    return;
  if (p->parsing_heredoc == NULL) {
    node *n;
    p->parsing_heredoc = p->heredocs_from_nextline;
    p->lex_strterm_before_heredoc = p->lex_strterm;
    p->lex_strterm = new_strterm(p, parsing_heredoc_inf(p)->type, 0, 0);
    n = p->all_heredocs;
    if (n) {
      while (n->cdr)
        n = n->cdr;
      n->cdr = p->parsing_heredoc;
    }
    else {
      p->all_heredocs = p->parsing_heredoc;
    }
  }
  else {
    node *n, *m;
    m = p->heredocs_from_nextline;
    while (m->cdr)
      m = m->cdr;
    n = p->all_heredocs;
    mrb_assert(n != NULL);
    if (n == p->parsing_heredoc) {
      m->cdr = n;
      p->all_heredocs = p->heredocs_from_nextline;
      p->parsing_heredoc = p->heredocs_from_nextline;
    }
    else {
      while (n->cdr != p->parsing_heredoc) {
        n = n->cdr;
        mrb_assert(n != NULL);
      }
      m->cdr = n->cdr;
      n->cdr = p->heredocs_from_nextline;
      p->parsing_heredoc = p->heredocs_from_nextline;
    }
  }
  p->heredocs_from_nextline = NULL;
}

static void
heredoc_end(parser_state *p)
{
  p->parsing_heredoc = p->parsing_heredoc->cdr;
  if (p->parsing_heredoc == NULL) {
    p->lstate = EXPR_BEG;
    p->cmd_start = TRUE;
    end_strterm(p);
    p->lex_strterm = p->lex_strterm_before_heredoc;
    p->lex_strterm_before_heredoc = NULL;
  }
  else {
    /* next heredoc */
    p->lex_strterm->car = nint(parsing_heredoc_inf(p)->type);
  }
}
#define is_strterm_type(p,str_func) (intn((p)->lex_strterm->car) & (str_func))

/* xxx ----------------------------- */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1218 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
{
    node *nd;
    mrb_sym id;
    int num;
    stack_type stack;
    const struct vtable *vars;
}
/* Line 193 of yacc.c.  */
#line 1549 "/Users/yume/Desktop/MRuby2/mruby/build/host/mrbgems/mruby-compiler/core/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1562 "/Users/yume/Desktop/MRuby2/mruby/build/host/mrbgems/mruby-compiler/core/y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   11645

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  146
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  176
/* YYNRULES -- Number of rules.  */
#define YYNRULES  587
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1026

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   374

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     145,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   132,     2,     2,     2,   130,   125,     2,
     140,   141,   128,   126,   138,   127,   144,   129,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   143,
     122,   118,   121,   119,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   137,     2,   142,   124,     2,   139,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   135,   123,   136,   133,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   131,   134
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    24,    30,    35,    38,    40,    42,    46,    49,    50,
      55,    58,    62,    66,    70,    74,    78,    83,    85,    89,
      93,    97,   101,   103,   107,   111,   118,   124,   130,   136,
     142,   146,   148,   152,   154,   156,   160,   164,   168,   171,
     173,   175,   177,   179,   181,   186,   187,   193,   196,   200,
     205,   211,   216,   222,   225,   228,   231,   234,   237,   239,
     243,   245,   249,   251,   254,   258,   264,   267,   272,   275,
     280,   282,   286,   288,   292,   295,   299,   301,   304,   306,
     311,   315,   319,   323,   327,   330,   332,   334,   339,   343,
     347,   351,   355,   358,   360,   362,   364,   367,   369,   373,
     375,   377,   379,   381,   383,   385,   387,   389,   390,   395,
     397,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   425,   427,   429,   431,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   453,   455,
     457,   459,   461,   463,   465,   467,   469,   471,   473,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   503,   505,   507,   509,   511,   513,   515,
     517,   519,   521,   523,   525,   527,   529,   531,   533,   535,
     539,   543,   550,   556,   562,   568,   574,   579,   583,   587,
     591,   595,   599,   603,   607,   611,   615,   620,   625,   628,
     631,   635,   639,   643,   647,   651,   655,   659,   663,   667,
     671,   675,   679,   683,   686,   689,   693,   697,   701,   705,
     712,   719,   721,   723,   726,   731,   734,   736,   740,   744,
     746,   748,   750,   752,   755,   760,   763,   765,   768,   771,
     776,   778,   779,   782,   785,   788,   790,   792,   795,   797,
     800,   804,   809,   813,   818,   821,   823,   825,   827,   829,
     831,   833,   835,   837,   838,   843,   844,   845,   851,   852,
     856,   860,   864,   867,   871,   875,   877,   880,   885,   889,
     892,   894,   897,   898,   899,   905,   912,   919,   920,   921,
     929,   930,   931,   939,   945,   950,   951,   952,   962,   963,
     970,   971,   972,   981,   982,   988,   989,   990,   998,   999,
    1000,  1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,  1027,
    1029,  1031,  1033,  1039,  1041,  1044,  1046,  1048,  1050,  1055,
    1062,  1066,  1072,  1075,  1080,  1082,  1083,  1088,  1093,  1096,
    1099,  1101,  1104,  1105,  1112,  1121,  1126,  1133,  1138,  1142,
    1149,  1152,  1157,  1164,  1167,  1172,  1175,  1180,  1182,  1184,
    1186,  1187,  1192,  1194,  1199,  1201,  1206,  1208,  1212,  1214,
    1216,  1221,  1223,  1227,  1231,  1232,  1238,  1241,  1246,  1252,
    1258,  1261,  1266,  1271,  1275,  1279,  1283,  1286,  1288,  1293,
    1294,  1300,  1301,  1307,  1313,  1315,  1317,  1324,  1326,  1328,
    1330,  1332,  1335,  1337,  1340,  1342,  1344,  1346,  1348,  1350,
    1352,  1355,  1357,  1359,  1362,  1366,  1368,  1371,  1373,  1374,
    1379,  1381,  1384,  1387,  1391,  1394,  1398,  1400,  1402,  1405,
    1407,  1410,  1412,  1415,  1417,  1418,  1423,  1426,  1430,  1432,
    1437,  1440,  1442,  1444,  1446,  1448,  1450,  1453,  1456,  1460,
    1462,  1464,  1467,  1470,  1472,  1474,  1476,  1478,  1480,  1482,
    1484,  1486,  1488,  1490,  1492,  1494,  1496,  1498,  1500,  1502,
    1503,  1504,  1509,  1513,  1516,  1519,  1522,  1524,  1527,  1529,
    1531,  1535,  1537,  1541,  1543,  1545,  1548,  1550,  1555,  1558,
    1561,  1563,  1566,  1567,  1574,  1583,  1588,  1595,  1600,  1607,
    1610,  1615,  1622,  1625,  1630,  1633,  1638,  1640,  1641,  1643,
    1645,  1647,  1649,  1651,  1653,  1655,  1656,  1661,  1663,  1667,
    1670,  1673,  1676,  1678,  1682,  1684,  1688,  1690,  1692,  1695,
    1697,  1699,  1701,  1704,  1707,  1709,  1711,  1712,  1717,  1719,
    1722,  1724,  1728,  1732,  1736,  1740,  1743,  1745,  1747,  1749,
    1751,  1753,  1755,  1757,  1759,  1761,  1763,  1765,  1767,  1769,
    1771,  1773,  1775,  1776,  1778,  1779,  1781,  1784,  1787,  1788,
    1790,  1792,  1794,  1796,  1798,  1800,  1802,  1805
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     147,     0,    -1,    -1,   148,   149,    -1,   150,   313,    -1,
     321,    -1,   151,    -1,   150,   320,   151,    -1,     1,   151,
      -1,   156,    -1,    -1,    46,   152,   135,   149,   136,    -1,
     154,   246,   222,   249,    -1,   155,   313,    -1,   321,    -1,
     156,    -1,   155,   320,   156,    -1,     1,   156,    -1,    -1,
      45,   178,   157,   178,    -1,    12,   179,    -1,   156,    40,
     161,    -1,   156,    41,   161,    -1,   156,    42,   161,    -1,
     156,    43,   161,    -1,   156,    44,   156,    -1,    47,   135,
     154,   136,    -1,   158,    -1,   167,   118,   162,    -1,   174,
     118,   196,    -1,   167,   118,   183,    -1,   167,   118,   196,
      -1,   160,    -1,   174,   118,   159,    -1,   271,    90,   159,
      -1,   218,   137,   188,   316,    90,   159,    -1,   218,   311,
      51,    90,   159,    -1,   218,   311,    55,    90,   159,    -1,
     218,    88,    55,    90,   162,    -1,   218,    88,    51,    90,
     159,    -1,   273,    90,   159,    -1,   162,    -1,   162,    44,
     156,    -1,   158,    -1,   162,    -1,   160,    37,   160,    -1,
     160,    38,   160,    -1,    39,   314,   160,    -1,   132,   162,
      -1,   183,    -1,   160,    -1,   166,    -1,   163,    -1,   239,
      -1,   239,   312,   308,   190,    -1,    -1,    97,   165,   229,
     154,   136,    -1,   307,   190,    -1,   307,   190,   164,    -1,
     218,   311,   308,   190,    -1,   218,   311,   308,   190,   164,
      -1,   218,    88,   308,   190,    -1,   218,    88,   308,   190,
     164,    -1,    32,   190,    -1,    31,   190,    -1,    30,   189,
      -1,    21,   189,    -1,    22,   189,    -1,   169,    -1,    92,
     168,   315,    -1,   169,    -1,    92,   168,   315,    -1,   171,
      -1,   171,   170,    -1,   171,    98,   173,    -1,   171,    98,
     173,   138,   172,    -1,   171,    98,    -1,   171,    98,   138,
     172,    -1,    98,   173,    -1,    98,   173,   138,   172,    -1,
      98,    -1,    98,   138,   172,    -1,   173,    -1,    92,   168,
     315,    -1,   170,   138,    -1,   171,   170,   138,    -1,   170,
      -1,   171,   170,    -1,   270,    -1,   218,   137,   188,   316,
      -1,   218,   311,    51,    -1,   218,    88,    51,    -1,   218,
     311,    55,    -1,   218,    88,    55,    -1,    89,    55,    -1,
     273,    -1,   270,    -1,   218,   137,   188,   316,    -1,   218,
     311,    51,    -1,   218,    88,    51,    -1,   218,   311,    55,
      -1,   218,    88,    55,    -1,    89,    55,    -1,   273,    -1,
      51,    -1,    55,    -1,    89,   175,    -1,   175,    -1,   218,
      88,   175,    -1,    51,    -1,    55,    -1,    52,    -1,   181,
      -1,   182,    -1,   177,    -1,   266,    -1,   178,    -1,    -1,
     179,   138,   180,   178,    -1,   123,    -1,   124,    -1,   125,
      -1,    72,    -1,    73,    -1,    74,    -1,    80,    -1,    81,
      -1,   121,    -1,    76,    -1,   122,    -1,    77,    -1,    75,
      -1,    86,    -1,    87,    -1,   126,    -1,   127,    -1,   128,
      -1,    98,    -1,   129,    -1,   130,    -1,    71,    -1,    99,
      -1,   132,    -1,   133,    -1,    69,    -1,    70,    -1,    84,
      -1,    85,    -1,   139,    -1,    48,    -1,    49,    -1,    50,
      -1,    46,    -1,    47,    -1,    45,    -1,    37,    -1,     6,
      -1,    21,    -1,    19,    -1,     3,    -1,     5,    -1,    26,
      -1,    18,    -1,    17,    -1,    15,    -1,    14,    -1,    36,
      -1,    11,    -1,    25,    -1,     4,    -1,    22,    -1,    34,
      -1,    39,    -1,    38,    -1,    23,    -1,    13,    -1,    24,
      -1,    30,    -1,    33,    -1,    32,    -1,    16,    -1,    35,
      -1,    12,    -1,    20,    -1,    31,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,   174,   118,   185,    -1,   271,
      90,   185,    -1,   218,   137,   188,   316,    90,   185,    -1,
     218,   311,    51,    90,   185,    -1,   218,   311,    55,    90,
     185,    -1,   218,    88,    51,    90,   185,    -1,   218,    88,
      55,    90,   185,    -1,    89,    55,    90,   185,    -1,   273,
      90,   185,    -1,   183,    82,   183,    -1,   183,    83,   183,
      -1,   183,   126,   183,    -1,   183,   127,   183,    -1,   183,
     128,   183,    -1,   183,   129,   183,    -1,   183,   130,   183,
      -1,   183,    71,   183,    -1,   131,    58,    71,   183,    -1,
     131,    59,    71,   183,    -1,    69,   183,    -1,    70,   183,
      -1,   183,   123,   183,    -1,   183,   124,   183,    -1,   183,
     125,   183,    -1,   183,    72,   183,    -1,   183,   121,   183,
      -1,   183,    76,   183,    -1,   183,   122,   183,    -1,   183,
      77,   183,    -1,   183,    73,   183,    -1,   183,    74,   183,
      -1,   183,    75,   183,    -1,   183,    80,   183,    -1,   183,
      81,   183,    -1,   132,   183,    -1,   133,   183,    -1,   183,
      86,   183,    -1,   183,    87,   183,    -1,   183,    78,   183,
      -1,   183,    79,   183,    -1,   183,   119,   183,   314,   120,
     183,    -1,   183,   119,   183,   314,    57,   183,    -1,   197,
      -1,   321,    -1,   195,   317,    -1,   195,   194,   305,   317,
      -1,   305,   317,    -1,   183,    -1,   183,    44,   183,    -1,
     140,   188,   315,    -1,   321,    -1,   186,    -1,   321,    -1,
     189,    -1,   195,   138,    -1,   195,   194,   305,   138,    -1,
     305,   138,    -1,   166,    -1,   195,   193,    -1,   305,   193,
      -1,   195,   194,   305,   193,    -1,   192,    -1,    -1,   191,
     189,    -1,   100,   183,    -1,   194,   192,    -1,   321,    -1,
     138,    -1,   138,   259,    -1,   183,    -1,    98,   183,    -1,
     195,   194,   183,    -1,   195,   194,    98,   183,    -1,   195,
     194,   183,    -1,   195,   194,    98,   183,    -1,    98,   183,
      -1,   250,    -1,   251,    -1,   256,    -1,   257,    -1,   258,
      -1,   272,    -1,   273,    -1,    52,    -1,    -1,     6,   198,
     153,    15,    -1,    -1,    -1,    93,   199,   156,   200,   315,
      -1,    -1,    93,   201,   315,    -1,    92,   154,   141,    -1,
     218,    88,    55,    -1,    89,    55,    -1,    95,   184,   142,
      -1,    96,   304,   136,    -1,    30,    -1,    31,   187,    -1,
      39,   140,   160,   315,    -1,    39,   140,   315,    -1,   307,
     241,    -1,   240,    -1,   240,   241,    -1,    -1,    -1,   101,
     202,   235,   203,   236,    -1,     7,   161,   219,   154,   221,
      15,    -1,     8,   161,   219,   154,   222,    15,    -1,    -1,
      -1,     9,   204,   161,   220,   205,   154,    15,    -1,    -1,
      -1,    10,   206,   161,   220,   207,   154,    15,    -1,    19,
     161,   313,   244,    15,    -1,    19,   313,   244,    15,    -1,
      -1,    -1,    11,   223,    25,   208,   161,   220,   209,   154,
      15,    -1,    -1,     3,   176,   274,   210,   153,    15,    -1,
      -1,    -1,     3,    86,   160,   211,   318,   212,   153,    15,
      -1,    -1,     4,   176,   213,   153,    15,    -1,    -1,    -1,
       5,   177,   214,   215,   276,   153,    15,    -1,    -1,    -1,
       5,   302,   310,   216,   177,   217,   276,   153,    15,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,   197,    -1,
     318,    -1,    16,    -1,   318,    16,    -1,   318,    -1,    27,
      -1,   222,    -1,    17,   161,   219,   154,   221,    -1,   321,
      -1,    18,   154,    -1,   174,    -1,   167,    -1,   291,    -1,
     291,   138,    98,   288,    -1,   291,   138,    98,   288,   138,
     291,    -1,   291,   138,    98,    -1,   291,   138,    98,   138,
     291,    -1,    98,   288,    -1,    98,   288,   138,   291,    -1,
      98,    -1,    -1,    98,   138,   225,   291,    -1,   280,   138,
     283,   301,    -1,   280,   301,    -1,   283,   301,    -1,   300,
      -1,   138,   226,    -1,    -1,   291,   138,   295,   138,   298,
     227,    -1,   291,   138,   295,   138,   298,   138,   291,   227,
      -1,   291,   138,   295,   227,    -1,   291,   138,   295,   138,
     291,   227,    -1,   291,   138,   298,   227,    -1,   291,   138,
     227,    -1,   291,   138,   298,   138,   291,   227,    -1,   291,
     227,    -1,   295,   138,   298,   227,    -1,   295,   138,   298,
     138,   291,   227,    -1,   295,   227,    -1,   295,   138,   291,
     227,    -1,   298,   227,    -1,   298,   138,   291,   227,    -1,
     226,    -1,   321,    -1,   230,    -1,    -1,   123,   231,   232,
     123,    -1,    79,    -1,   123,   228,   232,   123,    -1,   314,
      -1,   314,   143,   233,   314,    -1,   234,    -1,   233,   138,
     234,    -1,    51,    -1,   287,    -1,   140,   286,   232,   141,
      -1,   286,    -1,   110,   154,   136,    -1,    29,   153,    15,
      -1,    -1,    28,   238,   229,   153,    15,    -1,   166,   237,
      -1,   239,   312,   308,   187,    -1,   239,   312,   308,   187,
     241,    -1,   239,   312,   308,   190,   237,    -1,   307,   186,
      -1,   218,   311,   308,   187,    -1,   218,    88,   308,   186,
      -1,   218,    88,   309,    -1,   218,   311,   186,    -1,   218,
      88,   186,    -1,    32,   186,    -1,    32,    -1,   218,   137,
     188,   316,    -1,    -1,   135,   242,   229,   154,   136,    -1,
      -1,    26,   243,   229,   153,    15,    -1,    20,   195,   219,
     154,   245,    -1,   222,    -1,   244,    -1,    13,   247,   248,
     219,   154,   246,    -1,   321,    -1,   183,    -1,   196,    -1,
     321,    -1,    91,   174,    -1,   321,    -1,    14,   154,    -1,
     321,    -1,   269,    -1,   265,    -1,   264,    -1,   268,    -1,
     252,    -1,   251,   252,    -1,    60,    -1,    63,    -1,   107,
      63,    -1,   107,   253,    63,    -1,   254,    -1,   253,   254,
      -1,    65,    -1,    -1,    64,   255,   154,   136,    -1,   113,
      -1,   114,   259,    -1,   108,    61,    -1,   108,   253,    61,
      -1,   104,    62,    -1,   104,   253,    62,    -1,   111,    -1,
     260,    -1,   259,   260,    -1,   112,    -1,   261,   112,    -1,
     262,    -1,   261,   262,    -1,   116,    -1,    -1,   115,   263,
     154,   136,    -1,   105,    63,    -1,   105,   253,    63,    -1,
     266,    -1,   103,   107,   253,    63,    -1,   103,   267,    -1,
     177,    -1,    54,    -1,    53,    -1,    56,    -1,    63,    -1,
     107,    63,    -1,   106,    63,    -1,   106,   253,    63,    -1,
      58,    -1,    59,    -1,   131,    58,    -1,   131,    59,    -1,
      51,    -1,    54,    -1,    53,    -1,    56,    -1,    55,    -1,
     270,    -1,   270,    -1,    34,    -1,    33,    -1,    35,    -1,
      36,    -1,    49,    -1,    48,    -1,    50,    -1,    66,    -1,
      67,    -1,    -1,    -1,   122,   275,   161,   318,    -1,   140,
     286,   315,    -1,   286,   318,    -1,    51,    57,    -1,   277,
     183,    -1,   277,    -1,   277,   218,    -1,   277,    -1,   279,
      -1,   280,   138,   279,    -1,   278,    -1,   281,   138,   278,
      -1,    71,    -1,    99,    -1,   282,    51,    -1,   282,    -1,
     281,   138,   283,   301,    -1,   281,   301,    -1,   283,   301,
      -1,   300,    -1,   138,   284,    -1,    -1,   291,   138,   296,
     138,   298,   285,    -1,   291,   138,   296,   138,   298,   138,
     291,   285,    -1,   291,   138,   296,   285,    -1,   291,   138,
     296,   138,   291,   285,    -1,   291,   138,   298,   285,    -1,
     291,   138,   298,   138,   291,   285,    -1,   291,   285,    -1,
     296,   138,   298,   285,    -1,   296,   138,   298,   138,   291,
     285,    -1,   296,   285,    -1,   296,   138,   291,   285,    -1,
     298,   285,    -1,   298,   138,   291,   285,    -1,   284,    -1,
      -1,    55,    -1,    54,    -1,    53,    -1,    56,    -1,   287,
      -1,    51,    -1,   288,    -1,    -1,    92,   290,   224,   315,
      -1,   289,    -1,   291,   138,   289,    -1,    51,   118,    -1,
     292,   183,    -1,   292,   218,    -1,   294,    -1,   295,   138,
     294,    -1,   293,    -1,   296,   138,   293,    -1,   128,    -1,
      98,    -1,   297,    51,    -1,   297,    -1,   125,    -1,   100,
      -1,   299,    51,    -1,   138,   300,    -1,   321,    -1,   272,
      -1,    -1,   140,   303,   160,   315,    -1,   321,    -1,   305,
     317,    -1,   306,    -1,   305,   138,   306,    -1,   183,    91,
     183,    -1,    51,    57,   183,    -1,   252,    57,   183,    -1,
      99,   183,    -1,    51,    -1,    55,    -1,    52,    -1,    51,
      -1,    55,    -1,    52,    -1,   181,    -1,    51,    -1,    52,
      -1,   181,    -1,   144,    -1,    88,    -1,   144,    -1,   102,
      -1,   311,    -1,    88,    -1,    -1,   320,    -1,    -1,   319,
      -1,   314,   141,    -1,   314,   142,    -1,    -1,   319,    -1,
     194,    -1,   143,    -1,   319,    -1,   260,    -1,   145,    -1,
     318,    -1,   320,   318,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1375,  1375,  1375,  1386,  1392,  1396,  1401,  1405,  1411,
    1413,  1412,  1424,  1451,  1457,  1461,  1466,  1470,  1476,  1476,
    1480,  1484,  1488,  1492,  1496,  1500,  1504,  1509,  1510,  1514,
    1518,  1522,  1526,  1529,  1533,  1537,  1541,  1545,  1549,  1554,
    1558,  1565,  1566,  1570,  1574,  1575,  1579,  1583,  1587,  1591,
    1594,  1603,  1604,  1607,  1608,  1615,  1614,  1627,  1631,  1636,
    1640,  1645,  1649,  1654,  1658,  1662,  1666,  1670,  1676,  1680,
    1686,  1687,  1693,  1697,  1701,  1705,  1709,  1713,  1717,  1721,
    1725,  1729,  1735,  1736,  1742,  1746,  1752,  1756,  1762,  1766,
    1770,  1774,  1778,  1782,  1788,  1794,  1801,  1805,  1809,  1813,
    1817,  1821,  1827,  1833,  1840,  1844,  1847,  1851,  1855,  1862,
    1863,  1864,  1865,  1870,  1877,  1878,  1881,  1885,  1885,  1891,
    1892,  1893,  1894,  1895,  1896,  1897,  1898,  1899,  1900,  1901,
    1902,  1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,
    1912,  1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1923,
    1923,  1923,  1924,  1924,  1925,  1925,  1925,  1926,  1926,  1926,
    1926,  1927,  1927,  1927,  1928,  1928,  1928,  1929,  1929,  1929,
    1929,  1930,  1930,  1930,  1930,  1931,  1931,  1931,  1931,  1932,
    1932,  1932,  1932,  1933,  1933,  1933,  1933,  1934,  1934,  1937,
    1941,  1945,  1949,  1953,  1957,  1961,  1966,  1971,  1976,  1980,
    1984,  1988,  1992,  1996,  2000,  2004,  2008,  2012,  2016,  2020,
    2024,  2028,  2032,  2036,  2040,  2044,  2048,  2052,  2056,  2060,
    2064,  2068,  2072,  2076,  2080,  2084,  2088,  2092,  2096,  2100,
    2104,  2108,  2114,  2115,  2120,  2124,  2131,  2135,  2143,  2149,
    2150,  2153,  2154,  2155,  2160,  2165,  2172,  2178,  2183,  2188,
    2193,  2200,  2200,  2211,  2217,  2221,  2227,  2228,  2231,  2237,
    2243,  2248,  2255,  2260,  2265,  2272,  2273,  2274,  2275,  2276,
    2277,  2278,  2279,  2284,  2283,  2295,  2299,  2294,  2304,  2304,
    2308,  2312,  2316,  2320,  2325,  2330,  2334,  2338,  2342,  2346,
    2350,  2351,  2357,  2363,  2356,  2375,  2383,  2391,  2391,  2391,
    2398,  2398,  2398,  2405,  2411,  2416,  2418,  2415,  2427,  2425,
    2441,  2446,  2439,  2461,  2459,  2474,  2478,  2473,  2493,  2499,
    2492,  2514,  2518,  2522,  2526,  2532,  2539,  2540,  2541,  2544,
    2545,  2548,  2549,  2557,  2558,  2564,  2568,  2571,  2575,  2579,
    2583,  2588,  2592,  2596,  2600,  2606,  2605,  2615,  2619,  2623,
    2627,  2633,  2638,  2643,  2647,  2651,  2655,  2659,  2663,  2667,
    2671,  2675,  2679,  2683,  2687,  2691,  2695,  2699,  2705,  2710,
    2717,  2717,  2721,  2726,  2733,  2737,  2743,  2744,  2747,  2752,
    2755,  2759,  2765,  2769,  2776,  2775,  2788,  2798,  2802,  2807,
    2814,  2818,  2822,  2826,  2830,  2834,  2838,  2842,  2846,  2853,
    2852,  2865,  2864,  2878,  2886,  2895,  2898,  2905,  2908,  2912,
    2913,  2916,  2920,  2923,  2927,  2930,  2931,  2932,  2933,  2936,
    2937,  2943,  2944,  2945,  2949,  2955,  2956,  2962,  2967,  2966,
    2977,  2981,  2987,  2991,  2997,  3001,  3007,  3010,  3011,  3014,
    3020,  3026,  3027,  3030,  3037,  3036,  3050,  3054,  3061,  3066,
    3073,  3079,  3080,  3081,  3082,  3083,  3087,  3093,  3097,  3103,
    3104,  3105,  3109,  3115,  3119,  3123,  3127,  3131,  3137,  3143,
    3147,  3151,  3155,  3159,  3163,  3171,  3178,  3189,  3190,  3194,
    3198,  3197,  3213,  3219,  3225,  3228,  3233,  3239,  3243,  3249,
    3253,  3259,  3263,  3269,  3270,  3273,  3277,  3283,  3287,  3291,
    3295,  3301,  3306,  3311,  3315,  3319,  3323,  3327,  3331,  3335,
    3339,  3343,  3347,  3351,  3355,  3359,  3363,  3368,  3374,  3379,
    3384,  3389,  3396,  3400,  3407,  3412,  3411,  3423,  3427,  3433,
    3440,  3447,  3454,  3458,  3464,  3468,  3474,  3475,  3478,  3483,
    3490,  3491,  3494,  3500,  3504,  3510,  3515,  3515,  3540,  3541,
    3547,  3552,  3558,  3564,  3569,  3579,  3586,  3587,  3588,  3591,
    3592,  3593,  3594,  3597,  3598,  3599,  3602,  3603,  3606,  3610,
    3616,  3617,  3623,  3624,  3627,  3628,  3631,  3634,  3637,  3638,
    3639,  3642,  3643,  3644,  3647,  3654,  3655,  3659
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "keyword_class", "keyword_module",
  "keyword_def", "keyword_begin", "keyword_if", "keyword_unless",
  "keyword_while", "keyword_until", "keyword_for", "keyword_undef",
  "keyword_rescue", "keyword_ensure", "keyword_end", "keyword_then",
  "keyword_elsif", "keyword_else", "keyword_case", "keyword_when",
  "keyword_break", "keyword_next", "keyword_redo", "keyword_retry",
  "keyword_in", "keyword_do", "keyword_do_cond", "keyword_do_block",
  "keyword_do_LAMBDA", "keyword_return", "keyword_yield", "keyword_super",
  "keyword_self", "keyword_nil", "keyword_true", "keyword_false",
  "keyword_and", "keyword_or", "keyword_not", "modifier_if",
  "modifier_unless", "modifier_while", "modifier_until", "modifier_rescue",
  "keyword_alias", "keyword_BEGIN", "keyword_END", "keyword__LINE__",
  "keyword__FILE__", "keyword__ENCODING__", "tIDENTIFIER", "tFID", "tGVAR",
  "tIVAR", "tCONSTANT", "tCVAR", "tLABEL_TAG", "tINTEGER", "tFLOAT",
  "tCHAR", "tXSTRING", "tREGEXP", "tSTRING", "tSTRING_PART", "tSTRING_MID",
  "tNTH_REF", "tBACK_REF", "tREGEXP_END", "tUPLUS", "tUMINUS", "tPOW",
  "tCMP", "tEQ", "tEQQ", "tNEQ", "tGEQ", "tLEQ", "tANDOP", "tOROP",
  "tMATCH", "tNMATCH", "tDOT2", "tDOT3", "tAREF", "tASET", "tLSHFT",
  "tRSHFT", "tCOLON2", "tCOLON3", "tOP_ASGN", "tASSOC", "tLPAREN",
  "tLPAREN_ARG", "tRPAREN", "tLBRACK", "tLBRACE", "tLBRACE_ARG", "tSTAR",
  "tDSTAR", "tAMPER", "tLAMBDA", "tANDDOT", "tSYMBEG", "tREGEXP_BEG",
  "tWORDS_BEG", "tSYMBOLS_BEG", "tSTRING_BEG", "tXSTRING_BEG",
  "tSTRING_DVAR", "tLAMBEG", "tHEREDOC_BEG", "tHEREDOC_END",
  "tLITERAL_DELIM", "tHD_LITERAL_DELIM", "tHD_STRING_PART",
  "tHD_STRING_MID", "tLOWEST", "'='", "'?'", "':'", "'>'", "'<'", "'|'",
  "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "tUMINUS_NUM", "'!'",
  "'~'", "tLAST_TOKEN", "'{'", "'}'", "'['", "','", "'`'", "'('", "')'",
  "']'", "';'", "'.'", "'\\n'", "$accept", "program", "@1", "top_compstmt",
  "top_stmts", "top_stmt", "@2", "bodystmt", "compstmt", "stmts", "stmt",
  "@3", "command_asgn", "command_rhs", "expr", "expr_value",
  "command_call", "block_command", "cmd_brace_block", "@4", "command",
  "mlhs", "mlhs_inner", "mlhs_basic", "mlhs_item", "mlhs_list",
  "mlhs_post", "mlhs_node", "lhs", "cname", "cpath", "fname", "fsym",
  "undef_list", "@5", "op", "reswords", "arg", "aref_args", "arg_rhs",
  "paren_args", "opt_paren_args", "opt_call_args", "call_args",
  "command_args", "@6", "block_arg", "opt_block_arg", "comma", "args",
  "mrhs", "primary", "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14",
  "@15", "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23", "@24",
  "@25", "@26", "primary_value", "then", "do", "if_tail", "opt_else",
  "for_var", "f_margs", "@27", "block_args_tail", "opt_block_args_tail",
  "block_param", "opt_block_param", "block_param_def", "@28",
  "opt_bv_decl", "bv_decls", "bvar", "f_larglist", "lambda_body",
  "do_block", "@29", "block_call", "method_call", "brace_block", "@30",
  "@31", "case_body", "cases", "opt_rescue", "exc_list", "exc_var",
  "opt_ensure", "literal", "string", "string_fragment", "string_rep",
  "string_interp", "@32", "xstring", "regexp", "heredoc", "heredoc_bodies",
  "heredoc_body", "heredoc_string_rep", "heredoc_string_interp", "@33",
  "words", "symbol", "basic_symbol", "sym", "symbols", "numeric",
  "variable", "var_lhs", "var_ref", "backref", "superclass", "@34",
  "f_arglist", "f_label", "f_kw", "f_block_kw", "f_block_kwarg", "f_kwarg",
  "kwrest_mark", "f_kwrest", "args_tail", "opt_args_tail", "f_args",
  "f_bad_arg", "f_norm_arg", "f_arg_item", "@35", "f_arg", "f_opt_asgn",
  "f_opt", "f_block_opt", "f_block_optarg", "f_optarg", "restarg_mark",
  "f_rest_arg", "blkarg_mark", "f_block_arg", "opt_f_block_arg",
  "singleton", "@36", "assoc_list", "assocs", "assoc", "operation",
  "operation2", "operation3", "dot_or_colon", "call_op", "call_op2",
  "opt_terms", "opt_nl", "rparen", "rbracket", "trailer", "term", "nl",
  "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,    61,    63,
      58,    62,    60,   124,    94,    38,    43,    45,    42,    47,
      37,   373,    33,   126,   374,   123,   125,    91,    44,    96,
      40,    41,    93,    59,    46,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   146,   148,   147,   149,   150,   150,   150,   150,   151,
     152,   151,   153,   154,   155,   155,   155,   155,   157,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     161,   162,   162,   163,   163,   165,   164,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   167,   167,
     168,   168,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   175,   175,   176,   176,   176,   177,
     177,   177,   177,   177,   178,   178,   179,   180,   179,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   184,   184,   184,   184,   185,   185,   186,   187,
     187,   188,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   191,   190,   192,   193,   193,   194,   194,   195,   195,
     195,   195,   196,   196,   196,   197,   197,   197,   197,   197,
     197,   197,   197,   198,   197,   199,   200,   197,   201,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   202,   203,   197,   197,   197,   204,   205,   197,
     206,   207,   197,   197,   197,   208,   209,   197,   210,   197,
     211,   212,   197,   213,   197,   214,   215,   197,   216,   217,
     197,   197,   197,   197,   197,   218,   219,   219,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   224,
     224,   224,   224,   224,   224,   225,   224,   226,   226,   226,
     226,   227,   227,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   229,   229,
     231,   230,   230,   230,   232,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   238,   237,   239,   239,   239,   239,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   242,
     241,   243,   241,   244,   245,   245,   246,   246,   247,   247,
     247,   248,   248,   249,   249,   250,   250,   250,   250,   251,
     251,   252,   252,   252,   252,   253,   253,   254,   255,   254,
     254,   254,   256,   256,   257,   257,   258,   259,   259,   260,
     260,   261,   261,   262,   263,   262,   264,   264,   265,   265,
     266,   267,   267,   267,   267,   267,   267,   268,   268,   269,
     269,   269,   269,   270,   270,   270,   270,   270,   271,   272,
     272,   272,   272,   272,   272,   272,   272,   273,   273,   274,
     275,   274,   276,   276,   277,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   283,   284,   284,   284,
     284,   285,   285,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   287,   287,
     287,   287,   288,   288,   289,   290,   289,   291,   291,   292,
     293,   294,   295,   295,   296,   296,   297,   297,   298,   298,
     299,   299,   300,   301,   301,   302,   303,   302,   304,   304,
     305,   305,   306,   306,   306,   306,   307,   307,   307,   308,
     308,   308,   308,   309,   309,   309,   310,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   315,   316,   317,   317,
     317,   318,   318,   318,   319,   320,   320,   321
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       0,     5,     4,     2,     1,     1,     3,     2,     0,     4,
       2,     3,     3,     3,     3,     3,     4,     1,     3,     3,
       3,     3,     1,     3,     3,     6,     5,     5,     5,     5,
       3,     1,     3,     1,     1,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     4,     0,     5,     2,     3,     4,
       5,     4,     5,     2,     2,     2,     2,     2,     1,     3,
       1,     3,     1,     2,     3,     5,     2,     4,     2,     4,
       1,     3,     1,     3,     2,     3,     1,     2,     1,     4,
       3,     3,     3,     3,     2,     1,     1,     4,     3,     3,
       3,     3,     2,     1,     1,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     6,     5,     5,     5,     5,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     6,
       6,     1,     1,     2,     4,     2,     1,     3,     3,     1,
       1,     1,     1,     2,     4,     2,     1,     2,     2,     4,
       1,     0,     2,     2,     2,     1,     1,     2,     1,     2,
       3,     4,     3,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     0,     5,     0,     3,
       3,     3,     2,     3,     3,     1,     2,     4,     3,     2,
       1,     2,     0,     0,     5,     6,     6,     0,     0,     7,
       0,     0,     7,     5,     4,     0,     0,     9,     0,     6,
       0,     0,     8,     0,     5,     0,     0,     7,     0,     0,
       9,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     5,     1,     2,     1,     1,     1,     4,     6,
       3,     5,     2,     4,     1,     0,     4,     4,     2,     2,
       1,     2,     0,     6,     8,     4,     6,     4,     3,     6,
       2,     4,     6,     2,     4,     2,     4,     1,     1,     1,
       0,     4,     1,     4,     1,     4,     1,     3,     1,     1,
       4,     1,     3,     3,     0,     5,     2,     4,     5,     5,
       2,     4,     4,     3,     3,     3,     2,     1,     4,     0,
       5,     0,     5,     5,     1,     1,     6,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     2,     3,     1,     2,     1,     0,     4,
       1,     2,     2,     3,     2,     3,     1,     1,     2,     1,
       2,     1,     2,     1,     0,     4,     2,     3,     1,     4,
       2,     1,     1,     1,     1,     1,     2,     2,     3,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     4,     3,     2,     2,     2,     1,     2,     1,     1,
       3,     1,     3,     1,     1,     2,     1,     4,     2,     2,
       1,     2,     0,     6,     8,     4,     6,     4,     6,     2,
       4,     6,     2,     4,     2,     4,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     3,     2,
       2,     2,     1,     3,     1,     3,     1,     1,     2,     1,
       1,     1,     2,     2,     1,     1,     0,     4,     1,     2,
       1,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,   273,     0,
       0,   297,   300,     0,     0,   572,   321,   322,   323,   324,
     285,   251,   397,   471,   470,   472,   473,   574,     0,    10,
       0,   475,   474,   476,   463,   272,   465,   464,   467,   466,
     459,   460,   421,   422,   477,   478,     0,     0,     0,     0,
     275,   587,   587,    80,   292,     0,     0,     0,     0,     0,
       0,   436,     0,     0,     0,     3,   572,     6,     9,    27,
      32,    44,    52,    51,     0,    68,     0,    72,    82,     0,
      49,   231,     0,    53,   290,   265,   266,   419,   267,   268,
     269,   417,   416,   448,   418,   415,   469,     0,   270,   271,
     251,     5,     8,   321,   322,   285,   587,   397,     0,   104,
     105,     0,     0,     0,     0,   107,   479,   325,     0,   469,
     271,     0,   313,   159,   169,   160,   156,   185,   186,   187,
     188,   167,   182,   175,   165,   164,   180,   163,   162,   158,
     183,   157,   170,   174,   176,   168,   161,   177,   184,   179,
     178,   171,   181,   166,   155,   173,   172,   154,   152,   153,
     149,   150,   151,   109,   111,   110,   144,   145,   140,   122,
     123,   124,   131,   128,   130,   125,   126,   146,   147,   132,
     133,   137,   141,   127,   129,   119,   120,   121,   134,   135,
     136,   138,   139,   142,   143,   148,   546,   315,   112,   113,
     545,     0,     0,     0,    50,     0,     0,     0,   469,     0,
     271,     0,     0,     0,     0,   336,   335,     0,     0,   469,
     271,   178,   171,   181,   166,   149,   150,   151,   109,   110,
       0,   114,   116,    20,   115,   439,   444,   443,   581,   584,
     572,   583,     0,   441,     0,   585,   582,   573,   556,     0,
       0,     0,     0,   246,   258,    66,   250,   587,   419,   587,
     550,    67,    65,   587,   240,   286,    64,     0,   239,   396,
      63,   574,     0,   575,    18,     0,     0,   208,     0,   209,
     282,     0,     0,     0,   572,    15,   574,    70,    14,     0,
     574,     0,   578,   578,   232,     0,     0,   578,   548,     0,
       0,    78,     0,    88,    95,   517,   453,   452,   454,   455,
       0,   451,   450,   434,   428,   427,   430,     0,     0,   425,
     446,     0,   457,     0,   423,     0,   432,     0,   461,   462,
      48,   223,   224,     4,   573,     0,     0,     0,     0,     0,
       0,     0,   384,   386,     0,    84,     0,    76,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   569,   587,   568,
       0,   571,   570,     0,   401,   399,   291,   420,     0,     0,
     390,    57,   289,   310,   104,   105,   106,   461,   462,   480,
     308,     0,   587,     0,     0,     0,   316,   567,   566,   318,
       0,   587,   282,   327,     0,   326,     0,     0,   587,     0,
       0,     0,     0,     0,     0,   282,     0,   587,     0,   305,
       0,   117,     0,     0,   440,   442,     0,     0,   586,     0,
     259,   555,   253,     0,   256,   247,     0,   255,     0,   256,
     248,     0,   574,   242,   587,   587,   241,   252,   574,     0,
     288,    47,     0,     0,     0,     0,     0,     0,    17,   574,
     280,    13,   573,    69,   276,   279,   283,   580,   233,   579,
     580,   235,   284,   549,    94,    86,     0,    81,     0,     0,
     587,     0,   523,   520,   519,   518,   521,   493,   525,   537,
     494,   541,   540,   536,   517,   293,   486,   491,   587,   496,
     587,   516,   381,   522,   524,   527,   502,     0,   534,   502,
     539,   502,     0,   500,   456,     0,     0,   431,   437,   435,
     426,   447,   458,   424,   433,     0,     0,     7,    21,    22,
      23,    24,    25,    45,    46,   587,     0,    28,    30,     0,
      31,   574,     0,    74,    85,    43,    33,    41,     0,   236,
     189,    29,     0,   271,   205,   213,   218,   219,   220,   215,
     217,   227,   228,   221,   222,   198,   199,   225,   226,   574,
     214,   216,   210,   211,   212,   200,   201,   202,   203,   204,
     559,   564,   560,   565,   395,   251,   393,   574,   559,   561,
     560,   562,   394,   587,   559,   560,   251,   587,   587,    34,
     236,   190,    40,   197,    55,    58,     0,     0,     0,   104,
     105,   108,     0,   574,   587,     0,   574,   517,     0,   274,
     587,   587,   407,   587,   328,   563,   281,   574,   559,   560,
     587,   330,   298,   329,   301,   563,   281,   574,   559,   560,
       0,     0,     0,     0,   258,     0,   304,   553,   552,   257,
       0,   260,   254,   587,   554,   551,   238,   256,     0,   245,
     287,   576,    19,     0,    26,   196,    71,    16,   574,   578,
      87,    79,   563,    93,   574,   559,   560,   484,   529,     0,
     574,     0,   485,     0,   498,   544,   495,     0,   499,     0,
     509,   530,     0,   512,   538,     0,   514,   542,   449,     0,
     438,   206,   207,   372,   370,     0,   369,   368,   264,     0,
      83,    77,     0,     0,     0,     0,     0,   587,     0,     0,
       0,     0,   392,    61,     0,   398,     0,     0,   391,    59,
     387,    54,     0,     0,   587,   311,     0,     0,   398,   314,
     547,   517,     0,     0,   319,   408,   409,   587,   410,     0,
     587,   333,     0,     0,   331,     0,     0,   398,     0,     0,
       0,     0,     0,   398,     0,   118,   445,   303,     0,     0,
     261,   249,   587,    11,   277,   234,   398,   523,   344,   574,
     337,     0,   374,     0,     0,   294,     0,   492,   587,   543,
     501,   528,   502,   502,   502,   535,   502,   523,   502,   429,
     367,   574,   574,   488,   489,   587,   587,   352,     0,   532,
     352,   352,   350,     0,     0,   262,    75,    42,   237,   559,
     560,   574,   559,   560,     0,     0,    39,   194,    38,   195,
      62,   577,     0,    36,   192,    37,   193,    60,   388,   389,
       0,     0,     0,     0,   481,   309,   574,     0,   483,   517,
       0,     0,   412,   334,     0,    12,   414,     0,   295,     0,
     296,     0,     0,   306,   260,   587,   244,   345,   342,   526,
       0,   380,     0,     0,     0,   497,     0,   505,     0,   507,
       0,   513,     0,   510,   515,     0,     0,     0,   487,     0,
     348,   349,   352,   360,   531,     0,   363,     0,   365,   385,
     263,   398,   230,   229,    35,   191,   402,   400,     0,     0,
     482,   317,     0,     0,   411,     0,    96,   103,     0,   413,
       0,   299,   302,     0,   404,   405,   403,     0,     0,   340,
     378,   574,   376,   379,   383,   382,   502,   502,   502,   502,
     373,   371,   282,     0,   490,   587,     0,   351,   358,   352,
     352,   352,   533,   352,   352,    56,   312,     0,   102,     0,
     587,     0,   587,   587,     0,   346,   343,     0,   338,     0,
     375,   506,     0,   503,   508,   511,   563,   281,   347,     0,
     355,     0,   357,     0,   364,     0,   361,   366,   320,    99,
     101,   574,   559,   560,   406,   332,   307,     0,   341,     0,
     377,   502,   352,   352,   352,   352,    97,   339,   504,   356,
       0,   353,   359,   362,   352,   354
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    65,    66,    67,   275,   410,   411,   284,
     285,   462,    69,   556,    70,   205,    71,    72,   615,   744,
      73,    74,   286,    75,    76,    77,   487,    78,   206,   115,
     116,   231,   232,   233,   651,   593,   199,    80,   291,   560,
     594,   265,   452,   453,   266,   267,   256,   445,   451,   454,
     550,    81,   202,   289,   678,   290,   305,   691,   212,   771,
     213,   772,   650,   933,   618,   616,   853,   404,   406,   627,
     628,   859,   278,   414,   642,   763,   764,   218,   789,   937,
     957,   903,   811,   715,   716,   812,   791,   941,   942,   505,
     795,   343,   545,    83,    84,   392,   608,   607,   437,   936,
     631,   757,   861,   865,    85,    86,    87,   318,   319,   526,
      88,    89,    90,   659,   241,   242,   243,   432,    91,    92,
      93,   312,    94,    95,   208,   209,    98,   210,   400,   617,
     752,   506,   507,   814,   815,   508,   509,   510,   800,   700,
     753,   513,   514,   515,   689,   516,   517,   518,   819,   820,
     519,   520,   521,   522,   523,   694,   201,   405,   296,   455,
     260,   121,   622,   596,   409,   403,   383,   244,   459,   460,
     735,   478,   415,   273,   247,   288
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -826
static const yytype_int16 yypact[] =
{
    -826,    98,  2785,  -826,  7387,  9342,  9675,  5490,  -826,  8997,
    8997,  -826,  -826,  9453,  6891,  5231,  7847,  7847,  -826,  -826,
    7847,  3027,  6249,  -826,  -826,  -826,  -826,   230,  6891,  -826,
      -2,  -826,  -826,  -826,  5628,  5743,  -826,  -826,  5858,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  9112,  9112,   118,  4508,
     335,  8077,  8307,  7165,  -826,  6617,   485,  1106,  1173,  1250,
     726,  -826,   354,  9227,  9112,  -826,   947,  -826,  1248,  -826,
     381,  -826,  -826,   216,   112,  -826,   121,  9564,  -826,   143,
   10006,   434,   467,    87,    39,  -826,   106,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,   361,   184,  -826,   455,
      37,  -826,  -826,  -826,  -826,  -826,   136,   136,   142,   833,
     843,  8997,   465,  4624,   373,  -826,   168,  -826,   557,  -826,
    -826,    37,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
      53,   102,   126,   135,  -826,  -826,  -826,  -826,  -826,  -826,
     175,   179,   187,   205,  -826,   213,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,   214,  3704,   241,   381,   202,   180,   664,    63,   232,
      66,   202,  8997,  8997,   265,  -826,  -826,   750,   303,    61,
      86,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    6754,  -826,  -826,   229,  -826,  -826,  -826,  -826,  -826,  -826,
     947,  -826,   366,  -826,   323,  -826,  -826,   947,  2894,  9112,
    9112,  9112,  9112,  -826, 11494,  -826,  -826,   242,   363,   287,
    -826,  -826,  -826,  7847,  -826,  -826,  -826,  7847,  -826,  -826,
    -826,  5347,  8997,  -826,  -826,   302,  4740,  -826,   775,   368,
     531,  7617,  4508,   311,   947,  1248,   299,   337,  -826,  7617,
     299,   328,    14,   150,  -826, 11494,   339,   150,  -826,   429,
    9786,   376,   779,   783,   811,   966,  -826,  -826,  -826,  -826,
    1304,  -826,  -826,  -826,  -826,  -826,  -826,   389,   693,  -826,
    -826,  1332,  -826,  1349,  -826,  1403,  -826,  1010,   446,   456,
    -826,  -826,  -826,  -826,  4999,  8997,  8997,  8997,  8997,  7617,
    8997,  8997,  -826,  -826,  8422,  -826,  4508,  7276,   413,  8422,
    9112,  9112,  9112,  9112,  9112,  9112,  9112,  9112,  9112,  9112,
    9112,  9112,  9112,  9112,  9112,  9112,  9112,  9112,  9112,  9112,
    9112,  9112,  9112,  9112,  9112,  9112,  2263,  -826,  7847,  -826,
   10071,  -826,  -826, 11233,  -826,  -826,  -826,  -826,  9227,  9227,
    -826,   457,  -826,   381,  -826,   838,  -826,  -826,  -826,  -826,
    -826, 10154,  7847, 10237,  3704,  8997,  -826,  -826,  -826,  -826,
     541,   544,   181,  -826,  3847,   550,  9112, 10320,  7847, 10403,
    9112,  9112,  4133,   846,   846,    94, 10486,  7847, 10569,  -826,
     497,  -826,  4740,   323,  -826,  -826,  8537,   562,  -826,  9112,
   10006, 10006, 10006,  9112,   389,  -826,  7962,  -826,  9112,  7732,
    -826,   479,   299,  -826,   443,   444,  -826,  -826,    84,   442,
    -826,  -826,  6891,  4249,   449, 10320, 10403,  9112,  1248,   299,
    -826,  -826,  5115,   470,  1248,  -826,  -826,  8192,  -826,  -826,
    -826,  -826,  -826,  -826,   838,   121,  9786,  -826,  9786, 10652,
    7847, 10735,    17,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  1336,  -826,  9112,  -826,   474,   536,
     476,  -826,  -826,  -826,  -826,  -826,   498,  9112,  -826,   500,
     552,   503,   592,  -826,  -826,  1407,  4740,   389,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  9112,  9112,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,   115,  9112,  -826, 11322,   242,
    -826,   299,  9786,   506,  -826,  -826,  -826,   604,   535,  1962,
    -826,  -826,   913,   194,   368, 10091, 10091, 10091, 10091,  1170,
    1170, 10174, 11515, 10091, 10091,  2587,  2587,   700,   700, 11262,
    1170,  1170,   879,   879,  1178,   401,   401,   368,   368,   368,
    3160,  6364,  3426,  6479,  -826,   136,  -826,   299,   623,  -826,
     631,  -826,  -826,  6249,  -826,  -826,  1848,   115,   115,  -826,
    2333,  -826,  -826,  -826,  -826,  -826,   947,  8997,  3704,   858,
     451,  -826,   136,   299,   136,   639,    84,  1569,  7028,  -826,
    8652,   637,  -826,   477,  -826,  5973,  6111,   299,   195,   218,
     637,  -826,  -826,  -826,  -826,    64,    99,   299,   111,   113,
    8997,  6891,   524,   650, 10006,   584,  -826, 10006, 10006,   389,
    9112, 11494,  -826,   287, 10006,  -826,  -826,  1080,  7962,  7502,
    -826,  -826,  -826,   532,  -826,  -826,    47,  1248,   299,   150,
     413,  -826,    42,   451,   299,    50,    74,  -826,  -826,  1227,
     299,    83, 10006,   169,  -826,  -826,  -826,    32,  -826,  1336,
    -826, 10006,  1336,  -826,  -826,  1091,  -826,  -826,  -826,   537,
    -826,   368,   368,  -826,  1336,  3704,  -826,  -826, 11340,  8767,
    -826,  -826,  9786,  7617,  9227,  9112, 10818,  7847, 10901,    58,
    9227,  9227,  -826,   457,   525,   675,  9227,  9227,  -826,   457,
      39,   216,  3704,  4740,   115,  -826,   947,   656,  -826,  -826,
    -826,  1336,  3704,   947,  -826, 11322,  -826,   583,  -826,  4392,
     662,  -826,  8997,   683,  -826,  9112,  9112,   219,  9112,  9112,
     687,  4883,  4883,   117,   846,  -826,  -826,  -826,  8882,  3990,
   10006,  -826,   574,  -826,  -826,  -826,   197,  -826,   437,   299,
     577,   579,   575,  3704,  4740,  -826,   666,  -826,   476,  -826,
    -826,  -826,   587,   590,   598,  -826,   600,   666,   598,  -826,
    -826,   299,   299,  9897,  -826,   602,   476,   607,  9897,  -826,
     608,   615,  -826,   715,  9112, 11408,  -826,  -826, 10006,  3293,
    3559,   299,   221,   235,  9112,  9112,  -826,  -826,  -826,  -826,
    -826,  -826,  9227,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
     748,   640,  4740,  3704,  -826,  -826,   299,   752,  -826,  1569,
   10008,   202,  -826,  -826,  4883,  -826,  -826,   202,  -826,  9112,
    -826,   773,   780,  -826, 10006,   131,  7502,  -826,   658,  -826,
    1451,  -826,   985,   784,   667,  -826,  1336,  -826,  1091,  -826,
    1091,  -826,  1091,  -826,  -826,   679,   688,   743,   923,   169,
    -826,  -826,  1102,  -826,   923,  1336,  -826,  1091,  -826,  -826,
   11426,   325, 10006, 10006,  -826,  -826,  -826,  -826,   680,   802,
    -826,  -826,  3704,   764,  -826,   943,   783,   811,  3704,  -826,
    3847,  -826,  -826,  4883,  -826,  -826,  -826,  1046,  1046,   487,
    -826,   255,  -826,  -826,  -826,  -826,   598,   682,   598,   598,
    -826,  -826,  -826, 10984,  -826,   476,   169,  -826,  -826,   685,
     695,   697,  -826,   699,   697,  -826,  -826,   806,   838, 11067,
    7847, 11150,   544,   477,   810,   703,   703,  1046,   707,   985,
    -826,  -826,  1091,  -826,  -826,  -826,   706,   711,  -826,  1336,
    -826,  1091,  -826,  1091,  -826,  1091,  -826,  -826,  -826,   858,
     451,   299,   789,   794,  -826,  -826,  -826,  1046,   703,  1046,
    -826,   598,   697,   709,   697,   697,   108,   703,  -826,  -826,
    1091,  -826,  -826,  -826,   697,  -826
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -826,  -826,  -826,   398,  -826,    30,  -826,  -178,   -40,  -826,
      52,  -826,  -218,  -340,  1039,    92,   -20,  -826,  -619,  -826,
     -13,   849,  -192,   -25,   -52,  -261,  -436,   -21,  1830,   -74,
     859,     3,   -17,  -826,  -826,     5,  -826,   983,  -826,   745,
      55,    13,  -323,   127,    -9,  -826,  -338,  -257,  -147,    67,
    -314,    40,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,   346,  -195,  -396,   -98,  -572,  -826,  -826,  -826,
     165,   634,  -826,  -538,  -826,  -826,  -278,  -826,   -96,  -826,
    -826,   145,  -826,  -826,  -826,   -76,  -826,  -826,  -410,  -826,
     -81,  -826,  -826,  -826,  -826,  -826,    20,    69,  -118,  -826,
    -826,  -826,  -826,   580,  -286,  -826,   660,  -826,  -826,  -826,
       1,  -826,  -826,  -826,  1723,  1854,   885,  1435,  -826,  -826,
      49,    23,   222,    12,  -826,  -826,  -826,  -113,  -283,  -241,
    -287,  -800,  -731,  -367,  -826,   851,  -613,  -658,  -825,    15,
     225,  -826,  -605,  -826,  -125,  -444,  -826,  -826,  -826,    10,
    -435,   840,  -280,  -826,  -826,   -77,  -826,   -24,   -27,  -205,
    -559,  -276,    26,  1254,   -19,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -588
static const yytype_int16 yytable[] =
{
     272,   101,   450,   253,   253,   380,   382,   253,   386,   283,
     197,   274,   198,   270,   665,   234,   422,   481,   512,   198,
     268,   483,   511,   653,   287,   348,   259,   259,   644,   234,
     259,   528,   301,   198,   102,   561,   258,   258,   396,   486,
     258,   245,   333,   330,   805,   117,   117,   334,   609,   612,
     294,   298,   681,   117,    68,   597,    68,   878,   311,   760,
     198,   293,   297,   384,   748,   384,   698,   -91,   770,   742,
     743,   258,   258,   283,   687,   -90,   264,   269,   767,   623,
     962,   473,   943,   257,   257,   475,   -96,   257,   773,   -99,
     469,   391,   245,   117,   803,   637,   595,   806,     3,   -92,
     603,   818,   211,   606,   647,   268,   387,   240,   662,   821,
     446,  -103,   793,   662,   840,   834,   721,   117,   292,  -102,
     847,   340,   341,   624,  -101,   786,   321,   323,   325,   327,
     419,   555,   501,   276,  -398,   688,   -98,   595,  -100,   603,
     428,  -471,   -97,   255,   261,   477,   480,   262,   624,   759,
     480,   436,   444,  -468,   551,   390,   421,   502,   528,   239,
     -91,   264,   269,   528,   962,   -69,    42,   684,   -90,    43,
     555,   555,   385,   280,   385,   381,   390,   263,   835,   943,
     -91,   -96,  -559,   -91,  -103,   -83,   624,   -91,   -90,   377,
    -470,   -90,   -92,   794,   713,   -90,  -398,  -471,   450,   -88,
     530,   466,   -91,   530,  -559,   530,   852,   530,   978,   530,
    -398,   624,   -92,    59,  -472,   -92,   433,   690,   413,   -92,
     796,   511,   -89,  -473,   -95,   491,   625,   486,   805,   239,
     344,   379,   -94,   311,   665,   198,   464,   -93,   714,  -560,
     497,   710,   283,  -398,   342,  -398,  -470,   666,   485,   -90,
     253,   -92,  -398,   670,   253,   -89,   447,   287,   447,   345,
     471,   349,   456,  -475,   676,   472,   245,  -474,   500,   501,
    -472,   467,   911,   438,   388,  -476,   263,   259,   703,  -473,
     706,   947,   271,   258,   389,   768,   826,   258,   449,   818,
     399,   486,   818,  -463,   502,   239,   412,   960,   416,  -102,
     963,  -467,   407,   934,   423,   424,   283,   668,   769,   869,
     245,   736,  -103,   -98,   235,   -89,   756,   236,   237,  -475,
     425,   287,   420,  -474,   547,   737,   553,   621,   429,   557,
     662,  -476,   801,   468,   257,   -89,  -100,   -97,   -89,   -98,
     117,   474,   -89,   436,   511,   238,   720,   239,    82,  -463,
      82,   118,   118,  -100,   885,   207,   207,  -467,   408,   217,
     438,   207,   207,   207,   537,   253,   207,   431,   557,   557,
     271,   900,   901,   710,   633,   239,   818,   456,   873,   525,
     444,   528,   640,   528,  1013,   601,    68,   117,   601,   253,
     836,   542,   652,   979,   457,    82,   843,   845,   258,   302,
     239,   456,   719,   785,   831,   253,   781,   530,   601,   207,
     632,   549,   328,   329,   253,   842,   549,   456,   340,   341,
     448,   750,   258,   302,   601,   449,   456,   538,   539,   540,
     541,   397,   398,   601,   680,   602,   485,   463,   258,   350,
     747,   665,  1016,   -97,   239,   672,   595,   258,   603,   643,
     643,  -468,   470,   447,   447,   -68,   663,   207,   602,    82,
     779,   486,   101,   234,   856,   935,   258,   198,   511,   258,
     476,   601,   350,   784,   602,   482,  -278,   253,   434,   -96,
    -278,   236,   237,   602,   484,   728,   709,   679,   787,   456,
     493,   494,   495,   496,   762,   759,   601,   258,   438,   -88,
     485,   235,   914,   655,   236,   237,   555,   695,   778,   695,
     258,   988,   555,   801,   488,    68,   394,   535,   555,   555,
     395,   602,  -325,   801,   677,   781,   117,   536,   117,   373,
     374,   375,   480,   895,   896,   801,  -325,   823,   787,  -281,
     493,   494,   495,   496,   717,   389,   602,   313,    82,   314,
     315,   554,   729,  -281,   614,   376,   629,   630,   207,   207,
     524,   887,   889,   891,   850,   893,   634,   894,   799,   377,
     734,  -325,   799,  -103,   857,   877,   511,   656,  -325,   251,
     798,   667,   669,   671,   879,   674,   733,   696,  -281,   822,
     528,  -560,   117,   -95,   739,  -281,   734,   741,   316,   317,
     413,   816,   268,   704,   378,   268,   717,   717,   -83,   207,
     734,   379,   693,   207,   697,   883,   738,   207,   207,   740,
     734,   467,    82,   268,   555,   977,   801,    82,    82,   758,
     761,   754,   761,   198,   775,    82,   699,   738,   702,   761,
     801,   705,   745,   707,   722,   401,   302,  1001,   723,  -102,
     732,   920,   234,   724,   749,   759,   198,   734,   264,   377,
     776,   264,   447,   792,   848,   777,   928,   841,   783,   -94,
     485,   855,   930,   809,   860,   919,   864,   732,   782,   264,
      82,   207,   207,   207,   207,    82,   207,   207,   258,   258,
     207,   624,    82,   302,   402,   562,   235,   549,   868,   236,
     237,   379,   870,   851,   557,   981,   983,   984,   985,   746,
     557,   838,   876,   736,   253,   880,   557,   557,   882,   863,
     881,   737,   444,   687,   207,   886,   456,   238,   888,   239,
     909,   871,   872,   601,   562,   562,   890,   813,   892,   875,
     899,   -98,   774,   717,   967,   902,   905,   258,   207,  -100,
      82,   207,   417,   907,   884,   529,   862,   314,   315,   866,
      82,   -90,   117,   916,   207,   842,   377,   921,    82,   -92,
    1018,   350,   854,   207,   799,   827,   917,   822,    82,   858,
     822,   447,   822,   602,   792,   792,   955,   326,   931,   816,
     314,   315,   816,   -97,   816,   932,   938,   695,   952,   944,
     643,   418,   950,   945,   734,   -98,   316,   317,   379,    82,
    -100,   951,   918,   -89,   695,   695,   965,   966,    82,   968,
     982,   998,   557,   989,   929,  1006,   371,   372,   373,   374,
     375,   822,   302,   991,   302,   993,   207,   995,   426,   316,
     317,  1007,   100,   816,   100,  1009,  -559,  1020,   971,   100,
     100,  -560,   377,   117,   867,   100,   100,   100,   117,  -556,
     100,   673,   215,   465,   822,   122,   822,   489,   822,  -557,
     822,  -469,    82,   641,   761,  1005,   816,   377,   816,   810,
     816,   377,   816,  1010,  -563,  -469,   849,   427,   972,   100,
     973,  1004,   200,   974,   379,   822,   258,   527,   302,  -271,
     117,   -98,   435,   100,   -98,   -98,  -100,   816,   922,  -100,
    -100,   954,   418,  -271,   980,   797,   490,   959,     0,   379,
    -469,  -463,   813,   379,   802,   813,  -282,  -469,   813,     0,
     813,  -467,   -98,     0,   -98,  -463,     0,  -100,     0,  -100,
    -282,     0,     0,     0,     0,  -467,  -563,     0,  -271,     0,
     350,   100,     0,   100,   695,  -271,     0,   253,   235,     0,
    -563,   236,   237,   207,    82,   363,   364,     0,  -556,   456,
    -463,   632,   761,  -556,   734,  -282,   601,  -463,  -557,   813,
    -467,     0,  -282,  -557,     0,     0,     0,  -467,     0,   238,
     258,   239,     0,  -563,     0,  -563,   207,     0,  -559,   254,
     254,   726,  -563,   254,   370,   371,   372,   373,   374,   375,
       0,   953,   813,     0,   813,   377,   813,   492,   813,   493,
     494,   495,   496,     0,     0,   377,   602,     0,     0,   277,
     279,   969,     0,     0,   254,   295,   940,   497,   493,   494,
     495,   496,   100,   813,     0,   377,   331,   332,   204,   204,
     727,     0,   100,   100,   204,     0,     0,   379,   498,   235,
     402,    82,   236,   237,   499,   500,   501,   379,   302,    82,
     562,   534,     0,   207,   314,   315,   562,   207,     0,     0,
     970,     0,   562,   562,     0,     0,     0,   379,    82,    82,
     238,   502,   239,     0,   503,     0,     0,   787,    82,   493,
     494,   495,   496,   100,     0,    82,   504,   100,   207,     0,
       0,   100,   100,     0,     0,     0,   100,    82,    82,     0,
       0,   100,   100,   316,   317,    82,     0,     0,     0,   100,
       0,     0,     0,   611,   613,     0,     0,     0,   498,    82,
      82,     0,   807,     0,   493,   494,   495,   496,     0,     0,
     393,     0,     0,   492,     0,   493,   494,   495,   496,   898,
       0,     0,   497,     0,   904,   611,   613,     0,     0,   320,
     314,   315,     0,   497,   100,   100,   100,   100,   100,   100,
     100,   100,     0,   498,   100,     0,   100,     0,   562,   100,
     500,   501,   235,     0,   498,   236,   237,     0,    82,    82,
     499,   500,   501,     0,     0,     0,   925,     0,     0,     0,
      82,     0,   675,     0,     0,     0,   502,     0,   100,   316,
     317,  -243,  -243,     0,     0,  -243,     0,   502,   100,   100,
     503,     0,   440,   441,   442,   331,   322,   314,   315,     0,
     956,   350,   100,     0,   100,   100,   254,     0,     0,   350,
     254,   204,   204,     0,   100,     0,   363,   364,   100,     0,
       0,     0,   100,     0,   363,   364,     0,   100,    82,   246,
       0,     0,   100,     0,    82,     0,    82,     0,   787,    82,
     493,   494,   495,   496,     0,     0,   316,   317,   335,   336,
     337,   338,   339,   368,   369,   370,   371,   372,   373,   374,
     375,     0,     0,   100,   371,   372,   373,   374,   375,     0,
     458,   461,   100,   324,   314,   315,   207,     0,     0,   498,
     246,     0,     0,     0,     0,   788,     0,   548,     0,     0,
     100,     0,   559,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   254,     0,   316,   317,     0,   100,   524,   314,   315,
       0,   610,   610,     0,   204,   204,   204,   204,     0,   543,
     544,     0,     0,     0,     0,   254,     0,   492,     0,   493,
     494,   495,   496,     0,     0,   531,   314,   315,     0,   610,
       0,   254,     0,   610,   610,     0,     0,   497,     0,     0,
     254,     0,   532,   314,   315,     0,     0,   316,   317,   654,
       0,     0,   657,     0,     0,     0,   658,     0,   498,   661,
       0,   664,   295,     0,   499,   500,   501,    99,     0,    99,
     120,   120,     0,     0,   626,   316,   317,     0,   220,     0,
     610,     0,     0,     0,   906,   908,     0,   100,   100,   246,
     661,   502,   316,   317,   503,   246,   533,   314,   315,     0,
     708,   314,   315,   254,     0,   837,   839,     0,     0,     0,
       0,   844,   846,     0,    99,     0,     0,     0,   304,   692,
     100,     0,     0,     0,   246,     0,     0,     0,     0,     0,
     701,   246,   787,     0,   493,   494,   495,   496,     0,     0,
     837,   839,   304,   844,   846,     0,   316,   317,   711,   712,
     316,   317,     0,     0,     0,     0,     0,     0,     0,   718,
       0,     0,     0,     0,     0,     0,   958,     0,   246,     0,
     790,     0,     0,   498,     0,     0,   479,   479,    99,   939,
       0,   479,     0,   804,     0,   100,   808,     0,     0,     0,
       0,     0,     0,   100,   100,   817,     0,   100,     0,     0,
     100,   100,     0,     0,     0,     0,   100,   100,     0,     0,
       0,     0,   100,   100,     0,     0,     0,   915,   246,     0,
       0,     0,   100,   990,   992,   994,     0,   996,   997,   100,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   100,   755,   915,     0,     0,     0,     0,   100,
     492,     0,   493,   494,   495,   496,     0,     0,     0,     0,
       0,     0,     0,   100,   100,     0,     0,    99,     0,     0,
     497,     0,     0,   780,     0,     0,  1019,  1021,  1022,  1023,
       0,   661,   295,     0,     0,     0,   204,     0,  1025,     0,
       0,   498,     0,     0,     0,     0,     0,   499,   500,   501,
       0,     0,     0,     0,     0,     0,     0,   246,   246,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,   204,
       0,     0,   100,   100,   502,     0,     0,   503,     0,     0,
       0,     0,   825,     0,   100,     0,     0,   610,   828,   751,
     254,    99,     0,   610,   610,     0,    99,    99,     0,   610,
     610,     0,     0,     0,    99,    96,   246,    96,   119,   119,
     119,     0,     0,     0,     0,   304,   219,   946,     0,   948,
       0,     0,     0,   949,     0,     0,     0,     0,   610,   610,
       0,   610,   610,     0,     0,     0,   961,     0,   964,     0,
       0,   874,   100,     0,     0,     0,     0,     0,   100,    99,
     100,     0,    96,   100,    99,     0,   303,     0,     0,     0,
       0,    99,   304,     0,   563,     0,     0,     0,   975,   976,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,   204,     0,     0,     0,     0,     0,   910,     0,     0,
     100,     0,     0,     0,     0,     0,     0,   912,   913,     0,
       0,     0,     0,   563,   563,   610,     0,     0,  1008,     0,
       0,     0,    79,  1011,    79,     0,    96,     0,     0,    99,
    1012,     0,  1014,   216,     0,     0,  1015,     0,  -587,    99,
       0,     0,   610,     0,     0,     0,    97,    99,    97,   295,
    1017,  -587,  -587,  -587,  -587,  -587,  -587,    99,  -587,     0,
     246,  1024,     0,     0,  -587,  -587,     0,     0,     0,    79,
       0,     0,     0,     0,     0,  -587,  -587,     0,  -587,  -587,
    -587,  -587,  -587,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,    97,     0,     0,     0,    99,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   304,     0,   304,     0,    96,     0,     0,     0,     0,
       0,     0,     0,   479,     0,     0,  -587,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
    -587,     0,     0,   254,     0,     0,     0,     0,     0,     0,
    -587,    99,     0,  -587,  -587,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -587,  -587,     0,     0,   304,   263,  -587,
       0,  -587,  -587,  -587,     0,     0,     0,     0,     0,    96,
     246,     0,     0,     0,    96,    96,   725,   246,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   303,     0,     0,     0,     0,   246,     0,
       0,     0,    79,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,     0,     0,   363,   364,
       0,     0,     0,    99,     0,     0,    97,    96,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,    96,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,     0,     0,     0,     0,     0,     0,     0,
    -258,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,    79,    79,     0,     0,   246,     0,     0,     0,    79,
       0,   246,     0,     0,     0,     0,     0,    96,     0,     0,
      97,     0,     0,     0,     0,    97,    97,    96,     0,     0,
       0,     0,     0,    97,     0,    96,     0,     0,     0,     0,
      99,     0,     0,     0,     0,    96,     0,   304,    99,   563,
       0,     0,     0,     0,    79,   563,     0,     0,     0,    79,
       0,   563,   563,     0,     0,     0,    79,    99,    99,   558,
       0,     0,     0,     0,     0,     0,    96,    99,    97,     0,
       0,     0,     0,    97,    99,    96,     0,     0,     0,     0,
      97,     0,     0,    97,     0,     0,    99,    99,     0,   303,
       0,   303,     0,     0,    99,     0,     0,     0,   558,   558,
       0,     0,     0,     0,     0,     0,     0,     0,    99,    99,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,    97,    97,    79,     0,     0,     0,   120,    96,
       0,     0,    79,   120,     0,     0,     0,     0,    97,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   303,    97,   563,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    99,    99,     0,
       0,     0,     0,    79,     0,   927,     0,     0,     0,    99,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   590,   591,     0,    97,   592,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,    96,     0,   175,   176,     0,     0,   177,   178,   179,
     180,     0,     0,     0,     0,     0,    79,    99,     0,     0,
       0,   181,   182,    99,     0,    99,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   725,     0,     0,
      97,     0,     0,     0,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,   194,     0,     0,     0,
       0,     0,   195,   263,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,     0,   363,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,   303,    96,     0,    79,     0,
       0,     0,   365,     0,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,     0,    96,    96,     0,     0,     0,
       0,     0,    97,     0,     0,    96,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,    96,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,   119,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,    79,   558,     0,     0,     0,     0,     0,
     558,     0,     0,     0,     0,     0,   558,   558,     0,    97,
       0,     0,    79,    79,     0,    96,    96,    97,    97,     0,
       0,     0,    79,   926,    97,     0,     0,    96,     0,    79,
      97,    97,     0,     0,     0,     0,    97,    97,     0,     0,
       0,    79,    79,     0,     0,     0,    97,     0,     0,    79,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    79,    97,    97,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,    97,    97,     0,
       0,    96,     0,    96,     0,     0,    96,     0,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,  -588,
    -588,     0,   558,   363,   364,     0,     0,     0,     0,     0,
       0,     0,    79,    79,     0,     0,     0,     0,     0,     0,
     924,     0,     0,     0,    79,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    97,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    79,     0,
      79,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,    97,     0,    97,  -587,     4,    97,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,     0,     0,    15,     0,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,     0,     0,    43,     0,
       0,    44,    45,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,    49,    50,     0,
      51,    52,     0,    53,     0,     0,    54,     0,    55,    56,
      57,    58,    59,    60,  -463,     0,    61,  -587,     0,     0,
    -587,  -587,     0,     0,     0,     0,     0,  -463,  -463,  -463,
    -463,  -463,  -463,     0,  -463,     0,    62,    63,    64,     0,
       0,  -463,  -463,     0,     0,     0,     0,     0,  -587,     0,
    -587,  -463,  -463,     0,  -463,  -463,  -463,  -463,  -463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   439,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,     0,     0,
    -463,  -463,  -463,     0,  -463,  -463,     0,     0,     0,     0,
       0,  -463,     0,     0,     0,     0,  -463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -463,     0,     0,  -463,
    -463,     0,  -463,  -463,     0,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,     0,     0,  -587,     0,     0,
    -463,  -463,  -463,     0,     0,  -463,  -463,  -463,  -463,  -463,
    -587,  -587,  -587,  -587,  -587,  -587,     0,  -587,     0,     0,
       0,     0,     0,     0,  -587,  -587,     0,     0,     0,     0,
       0,     0,     0,     0,  -587,  -587,     0,  -587,  -587,  -587,
    -587,  -587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,     0,     0,  -587,  -587,  -587,     0,     0,  -587,     0,
       0,     0,     0,     0,  -587,     0,     0,     0,     0,  -587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -587,
       0,     0,  -587,  -587,     0,     0,  -587,     0,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,     0,     0,
    -563,     0,     0,  -587,  -587,  -587,     0,   263,  -587,  -587,
    -587,  -587,  -587,  -563,  -563,  -563,     0,  -563,  -563,     0,
    -563,     0,     0,     0,     0,     0,  -563,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -563,  -563,     0,
    -563,  -563,  -563,  -563,  -563,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  -563,
    -563,  -563,  -563,  -563,     0,     0,  -563,  -563,  -563,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -563,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -563,     0,     0,  -563,  -563,     0,   -99,  -563,
       0,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  -563,
    -563,     0,     0,  -563,     0,  -563,  -563,  -563,   -91,     0,
       0,  -563,     0,  -563,  -563,  -563,  -563,  -563,  -563,     0,
    -563,  -563,     0,  -563,     0,     0,     0,     0,     0,  -563,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -563,  -563,     0,  -563,  -563,  -563,  -563,  -563,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -563,  -563,  -563,  -563,  -563,  -563,
    -563,  -563,  -563,  -563,  -563,  -563,  -563,     0,     0,  -563,
    -563,  -563,     0,   730,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -563,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -563,     0,     0,  -563,  -563,
       0,   -99,  -563,     0,  -563,  -563,  -563,  -563,  -563,  -563,
    -563,  -563,  -563,  -563,     0,     0,  -281,     0,  -563,  -563,
    -563,  -563,     0,     0,  -563,     0,  -563,  -563,  -563,  -281,
    -281,  -281,     0,  -281,  -281,     0,  -281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -281,  -281,     0,  -281,  -281,  -281,  -281,
    -281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
       0,     0,  -281,  -281,  -281,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -281,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -281,     0,
       0,  -281,  -281,     0,  -101,  -281,     0,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,     0,     0,  -281,
       0,     0,  -281,  -281,   -93,     0,     0,  -281,     0,  -281,
    -281,  -281,  -281,  -281,  -281,     0,  -281,  -281,     0,  -281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -281,  -281,     0,  -281,
    -281,  -281,  -281,  -281,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,     0,     0,  -281,  -281,  -281,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -281,     0,     0,  -281,  -281,     0,  -101,  -281,     0,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
       0,     0,     0,     0,     0,  -281,  -281,  -281,     0,     0,
    -281,     0,  -281,  -281,  -281,   281,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,  -587,  -587,  -587,
       0,     0,  -587,    15,     0,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,    42,     0,     0,    43,     0,     0,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,     0,    54,     0,    55,    56,    57,
      58,    59,    60,     0,     0,    61,  -587,     0,     0,  -587,
    -587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -587,   281,  -587,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,  -587,     0,  -587,  -587,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    49,
      50,     0,    51,    52,     0,    53,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,  -587,
       0,     0,  -587,  -587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -587,   281,  -587,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,     0,  -587,     0,     0,  -587,    15,
    -587,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
      42,     0,     0,    43,     0,     0,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,    49,    50,     0,    51,    52,     0,    53,     0,
       0,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,    61,  -587,     0,     0,  -587,  -587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -587,   281,  -587,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,  -587,     0,
       0,  -587,    15,     0,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,     0,     0,    43,     0,     0,    44,
      45,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,    51,    52,
       0,    53,     0,     0,    54,     0,    55,    56,    57,    58,
      59,    60,     0,     0,    61,  -587,     0,     0,  -587,  -587,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    62,    63,    64,     0,    15,     0,
      16,    17,    18,    19,     0,     0,  -587,     0,  -587,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
       0,     0,    43,     0,     0,    44,    45,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    49,    50,     0,    51,    52,     0,    53,     0,     0,
      54,     0,    55,    56,    57,    58,    59,    60,     0,     0,
      61,  -587,     0,     0,  -587,  -587,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,     0,     0,  -587,     0,     0,     0,     0,
       0,     0,  -587,   281,  -587,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,  -587,  -587,     0,     0,
       0,    15,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,    49,    50,     0,    51,    52,     0,
      53,     0,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,  -587,     0,     0,  -587,  -587,   281,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,    62,    63,    64,     0,    15,     0,    16,
      17,    18,    19,     0,     0,  -587,     0,  -587,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,     0,
       0,    43,     0,     0,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
     282,    50,     0,    51,    52,     0,    53,     0,     0,    54,
       0,    55,    56,    57,    58,    59,    60,     0,     0,    61,
    -587,     0,     0,  -587,  -587,   281,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,    62,
      63,    64,     0,    15,     0,    16,    17,    18,    19,  -587,
       0,  -587,     0,  -587,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,    42,     0,     0,    43,     0,     0,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,     0,    54,     0,    55,    56,    57,
      58,    59,    60,     0,     0,    61,  -587,     0,     0,  -587,
    -587,   281,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,     0,    62,    63,    64,     0,    15,
       0,    16,    17,    18,    19,  -587,     0,  -587,     0,  -587,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
      42,     0,     0,    43,     0,     0,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,    49,    50,     0,    51,    52,     0,    53,     0,
       0,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,    61,  -587,     0,     0,  -587,  -587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,     0,     0,  -587,     0,     0,     0,
       0,     0,     0,  -587,   281,  -587,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,  -587,     0,
       0,     0,    15,     0,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,     0,     0,    43,     0,     0,    44,
      45,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,    51,    52,
       0,    53,     0,     0,    54,     0,    55,    56,    57,    58,
      59,    60,     0,     0,    61,  -587,     0,     0,  -587,  -587,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    62,    63,    64,     0,    15,     0,
      16,    17,    18,    19,     0,     0,  -587,     0,  -587,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
       0,     0,    43,     0,     0,    44,    45,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    49,    50,     0,    51,    52,     0,    53,     0,     0,
      54,     0,    55,    56,    57,    58,    59,    60,     0,     0,
      61,   235,     0,     0,   236,   237,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      62,    63,    64,     0,    15,     0,    16,    17,    18,    19,
       0,     0,   238,     0,   239,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,     0,     0,    43,     0,
       0,    44,    45,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,    49,    50,     0,
      51,    52,     0,    53,     0,     0,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,    61,   235,     0,     0,
     236,   237,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,    62,    63,    64,     0,
      15,     0,    16,    17,    18,    19,     0,     0,   238,     0,
     239,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,     0,     0,    43,     0,     0,    44,    45,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,     0,     0,   113,    50,     0,    51,    52,     0,     0,
       0,     0,    54,     0,    55,    56,    57,    58,    59,    60,
       0,     0,    61,   235,     0,     0,   236,   237,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,    62,    63,    64,     0,    15,     0,    16,    17,
      18,    19,     0,     0,   238,     0,   239,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,     0,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,    36,    37,   165,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,     0,     0,
     175,   176,     0,     0,   177,   178,   179,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,   194,     0,     0,     0,     0,     0,   195,
     196,  -556,  -556,  -556,  -556,  -556,  -556,  -556,  -556,  -556,
       0,     0,     0,     0,     0,     0,     0,  -556,     0,  -556,
    -556,  -556,  -556,     0,  -556,     0,     0,     0,  -556,  -556,
    -556,  -556,  -556,  -556,  -556,     0,     0,  -556,     0,     0,
       0,     0,     0,     0,     0,     0,  -556,  -556,  -556,  -556,
    -556,  -556,  -556,  -556,  -556,     0,  -556,  -556,  -556,     0,
       0,  -556,     0,     0,  -556,  -556,     0,  -556,  -556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -556,     0,     0,
    -556,  -556,     0,  -556,  -556,     0,  -556,  -556,  -556,  -556,
       0,  -556,  -556,  -556,  -556,  -556,  -556,     0,     0,  -556,
       0,     0,     0,     0,     0,     0,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,     0,     0,     0,     0,  -556,
    -556,  -556,  -558,  -556,  -558,  -558,  -558,  -558,  -556,  -558,
       0,     0,     0,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
       0,     0,  -558,     0,     0,     0,     0,     0,     0,     0,
       0,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
       0,  -558,  -558,  -558,     0,     0,  -558,     0,     0,  -558,
    -558,     0,  -558,  -558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -558,     0,     0,  -558,  -558,     0,  -558,  -558,
       0,  -558,  -558,  -558,  -558,     0,  -558,  -558,  -558,  -558,
    -558,  -558,     0,     0,  -558,     0,     0,     0,     0,     0,
       0,  -557,  -557,  -557,  -557,  -557,  -557,  -557,  -557,  -557,
       0,     0,     0,     0,  -558,  -558,  -558,  -557,  -558,  -557,
    -557,  -557,  -557,  -558,  -557,     0,     0,     0,  -557,  -557,
    -557,  -557,  -557,  -557,  -557,     0,     0,  -557,     0,     0,
       0,     0,     0,     0,     0,     0,  -557,  -557,  -557,  -557,
    -557,  -557,  -557,  -557,  -557,     0,  -557,  -557,  -557,     0,
       0,  -557,     0,     0,  -557,  -557,     0,  -557,  -557,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -557,     0,     0,
    -557,  -557,     0,  -557,  -557,     0,  -557,  -557,  -557,  -557,
       0,  -557,  -557,  -557,  -557,  -557,  -557,     0,     0,  -557,
       0,     0,     0,     0,     0,     0,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,     0,     0,     0,     0,  -557,
    -557,  -557,  -559,  -557,  -559,  -559,  -559,  -559,  -557,     0,
       0,     0,     0,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
       0,     0,  -559,     0,     0,     0,     0,     0,     0,     0,
       0,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
       0,  -559,  -559,  -559,     0,     0,  -559,     0,     0,  -559,
    -559,     0,  -559,  -559,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -559,   765,     0,  -559,  -559,     0,  -559,  -559,
       0,  -559,  -559,  -559,  -559,     0,  -559,  -559,  -559,  -559,
    -559,  -559,     0,     0,  -559,     0,     0,     0,     0,     0,
       0,   -99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -559,  -559,  -559,     0,     0,     0,
       0,     0,     0,  -559,  -560,  -560,  -560,  -560,  -560,  -560,
    -560,  -560,  -560,     0,     0,     0,     0,     0,     0,     0,
    -560,     0,  -560,  -560,  -560,  -560,     0,     0,     0,     0,
       0,  -560,  -560,  -560,  -560,  -560,  -560,  -560,     0,     0,
    -560,     0,     0,     0,     0,     0,     0,     0,     0,  -560,
    -560,  -560,  -560,  -560,  -560,  -560,  -560,  -560,     0,  -560,
    -560,  -560,     0,     0,  -560,     0,     0,  -560,  -560,     0,
    -560,  -560,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -560,   766,     0,  -560,  -560,     0,  -560,  -560,     0,  -560,
    -560,  -560,  -560,     0,  -560,  -560,  -560,  -560,  -560,  -560,
       0,     0,  -560,     0,     0,     0,     0,     0,     0,  -101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -560,  -560,  -560,     0,     0,     0,     0,     0,
       0,  -560,  -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,
    -251,     0,     0,     0,     0,     0,     0,     0,  -251,     0,
    -251,  -251,  -251,  -251,     0,     0,     0,     0,     0,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,     0,     0,  -251,     0,
       0,     0,     0,     0,     0,     0,     0,  -251,  -251,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,     0,  -251,  -251,  -251,
       0,     0,  -251,     0,     0,  -251,  -251,     0,  -251,  -251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -251,     0,
       0,  -251,  -251,     0,  -251,  -251,     0,  -251,  -251,  -251,
    -251,     0,  -251,  -251,  -251,  -251,  -251,  -251,     0,     0,
    -251,     0,     0,     0,     0,     0,     0,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,     0,     0,     0,     0,
    -251,  -251,  -251,  -561,     0,  -561,  -561,  -561,  -561,   263,
       0,     0,     0,     0,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,     0,     0,  -561,     0,     0,     0,     0,     0,     0,
       0,     0,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,     0,  -561,  -561,  -561,     0,     0,  -561,     0,     0,
    -561,  -561,     0,  -561,  -561,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -561,     0,     0,  -561,  -561,     0,  -561,
    -561,     0,  -561,  -561,  -561,  -561,     0,  -561,  -561,  -561,
    -561,  -561,  -561,     0,     0,  -561,     0,     0,     0,     0,
       0,     0,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,     0,     0,     0,     0,  -561,  -561,  -561,  -562,     0,
    -562,  -562,  -562,  -562,  -561,     0,     0,     0,     0,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,     0,     0,  -562,     0,
       0,     0,     0,     0,     0,     0,     0,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,     0,  -562,  -562,  -562,
       0,     0,  -562,     0,     0,  -562,  -562,     0,  -562,  -562,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -562,     0,
       0,  -562,  -562,     0,  -562,  -562,     0,  -562,  -562,  -562,
    -562,     0,  -562,  -562,  -562,  -562,  -562,  -562,     0,     0,
    -562,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -562,  -562,  -562,     0,     0,     0,     0,     0,     0,  -562,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     0,     0,     0,   147,   148,   149,
     221,   222,   223,   224,   154,   155,   156,     0,     0,     0,
       0,     0,   157,   158,   159,   225,   226,   227,   228,   164,
     306,   307,   229,   308,     0,     0,     0,     0,     0,     0,
     309,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,   175,   176,     0,
       0,   177,   178,   179,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,     0,     0,     0,
       0,     0,     0,     0,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,     0,   193,
     194,     0,     0,     0,     0,     0,   195,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,     0,     0,   147,   148,   149,   221,   222,   223,
     224,   154,   155,   156,     0,     0,     0,     0,     0,   157,
     158,   159,   225,   226,   227,   228,   164,   306,   307,   229,
     308,     0,     0,     0,     0,     0,     0,   309,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,   175,   176,     0,     0,   177,   178,
     179,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   182,     0,     0,     0,     0,     0,     0,
       0,   430,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,   194,     0,     0,
       0,     0,     0,   195,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,     0,
       0,   147,   148,   149,   221,   222,   223,   224,   154,   155,
     156,     0,     0,     0,     0,     0,   157,   158,   159,   225,
     226,   227,   228,   164,     0,     0,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,   175,   176,     0,     0,   177,   178,   179,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     182,     0,     0,     0,   230,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,   194,     0,     0,     0,     0,     0,
     195,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,     0,     0,     0,   147,   148,
     149,   221,   222,   223,   224,   154,   155,   156,     0,     0,
       0,     0,     0,   157,   158,   159,   225,   226,   227,   228,
     164,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,     0,     0,   175,   176,
       0,     0,   177,   178,   179,   180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     193,   194,     0,     0,     0,     0,     0,   195,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,    15,     0,   103,   104,    18,    19,
       0,     0,     0,     0,     0,   105,   106,   107,    23,    24,
      25,    26,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,     0,     0,    43,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   299,     0,     0,   113,    50,     0,
      51,    52,     0,     0,     0,     0,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,    61,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    15,   114,   103,   104,    18,
      19,     0,     0,   300,     0,     0,   105,   106,   107,    23,
      24,    25,    26,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,    42,     0,     0,    43,
       0,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   299,     0,     0,   113,    50,
       0,    51,    52,     0,     0,     0,     0,    54,     0,    55,
      56,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,     0,     0,    15,   114,    16,    17,
      18,    19,     0,     0,   552,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    49,
      50,     0,    51,    52,     0,    53,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,    63,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,   248,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
       0,   250,  -256,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,   235,     0,     0,   236,   237,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    62,   252,    64,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    49,
      50,     0,    51,    52,     0,    53,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,    63,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,   248,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
       0,   250,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,   235,     0,     0,   236,   237,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,   248,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,   249,   250,   251,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,   252,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,   248,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
     660,   250,   251,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,   103,   104,
      18,    19,     0,     0,     0,     0,     0,   105,   106,   107,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,   248,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,   249,   250,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,   252,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,   248,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
     660,   250,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,   103,   104,
      18,    19,     0,     0,     0,     0,     0,   105,   106,   107,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,   248,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,     0,   250,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,   252,
      64,    15,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
     546,     0,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,   103,   104,
      18,    19,     0,     0,     0,     0,     0,   105,   106,   107,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,   249,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,   252,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
     546,     0,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,   103,   104,
      18,    19,     0,     0,     0,     0,     0,   105,   106,   107,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,   824,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,   252,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
     660,     0,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,    63,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   113,    50,     0,    51,    52,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    62,   252,    64,    15,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   113,
      50,     0,    51,    52,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,    62,   252,
      64,    15,     0,   103,   104,    18,    19,     0,     0,     0,
       0,     0,   105,   106,   107,    23,    24,    25,    26,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,   109,    35,    36,    37,   110,    39,     0,
      40,    41,    42,     0,     0,    43,     0,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,     0,     0,   113,    50,     0,    51,    52,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,    15,   114,   103,   104,    18,    19,     0,     0,
       0,     0,     0,   105,   106,   107,    23,    24,    25,    26,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,     0,     0,    43,     0,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,     0,    49,    50,     0,    51,    52,
       0,    53,     0,     0,    54,     0,    55,    56,    57,    58,
      59,    60,     0,     0,    61,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,    15,   114,   103,   104,    18,    19,     0,
       0,     0,     0,     0,   105,   106,   107,    23,    24,    25,
      26,     0,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,    42,     0,     0,    43,     0,     0,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   299,     0,     0,   346,    50,     0,    51,
      52,     0,   347,     0,     0,    54,     0,    55,    56,    57,
      58,    59,    60,     0,     0,    61,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,    15,   114,   103,   104,    18,    19,
       0,     0,     0,     0,     0,   105,   106,   107,    23,    24,
      25,    26,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,   109,    35,    36,    37,
     110,    39,     0,    40,    41,    42,     0,     0,    43,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   113,    50,     0,
      51,    52,     0,     0,     0,     0,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,    61,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    15,   114,   103,   104,    18,
      19,     0,     0,     0,     0,     0,   105,   106,   107,    23,
      24,    25,    26,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,    42,     0,     0,    43,
       0,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   299,     0,     0,   346,    50,
       0,    51,    52,     0,     0,     0,     0,    54,     0,    55,
      56,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,    15,   114,   103,   104,
      18,    19,     0,     0,     0,     0,     0,   105,   106,   107,
      23,    24,    25,    26,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,     0,     0,
      43,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   897,     0,     0,   113,
      50,     0,    51,    52,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,    15,   114,   103,
     104,    18,    19,     0,     0,     0,     0,     0,   105,   106,
     107,    23,    24,    25,    26,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,     0,
       0,    43,     0,     0,    44,    45,     0,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
       0,     0,   363,   364,     0,     0,     0,   923,     0,     0,
     113,    50,     0,    51,    52,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,    59,    60,     0,     0,    61,
       0,     0,   598,   599,     0,   365,   600,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,     0,     0,   114,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,   175,   176,     0,     0,   177,   178,   179,   180,     0,
       0,     0,   350,  -588,  -588,  -588,  -588,   355,   356,   181,
     182,  -588,  -588,     0,     0,     0,     0,   363,   364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,   194,   619,   591,     0,     0,   620,
     195,   263,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,   175,   176,     0,     0,   177,   178,
     179,   180,     0,     0,     0,   350,   351,   352,   353,   354,
     355,   356,   181,   182,   359,   360,     0,     0,     0,     0,
     363,   364,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,   194,   604,   599,
       0,     0,   605,   195,   263,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,   175,   176,     0,
       0,   177,   178,   179,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,     0,   193,
     194,   635,   591,     0,     0,   636,   195,   263,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,     0,     0,
     175,   176,     0,     0,   177,   178,   179,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,   194,   638,   599,     0,     0,   639,   195,
     263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,   175,   176,     0,     0,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,   194,   645,   591,     0,
       0,   646,   195,   263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,   175,   176,     0,     0,
     177,   178,   179,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   193,   194,
     648,   599,     0,     0,   649,   195,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,   175,
     176,     0,     0,   177,   178,   179,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
       0,   193,   194,   682,   591,     0,     0,   683,   195,   263,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
       0,     0,   175,   176,     0,     0,   177,   178,   179,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     181,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,   194,   685,   599,     0,     0,
     686,   195,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,     0,   175,   176,     0,     0,   177,
     178,   179,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   193,   194,   829,
     591,     0,     0,   830,   195,   263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,     0,     0,   175,   176,
       0,     0,   177,   178,   179,   180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     193,   194,   832,   599,     0,     0,   833,   195,   263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,   175,   176,     0,     0,   177,   178,   179,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     182,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,   194,   986,   591,     0,     0,   987,
     195,   263,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,   175,   176,     0,     0,   177,   178,
     179,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,   194,   999,   591,
       0,     0,  1000,   195,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,   175,   176,     0,
       0,   177,   178,   179,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,     0,   193,
     194,  1002,   599,     0,     0,  1003,   195,   263,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,     0,     0,
     175,   176,     0,     0,   177,   178,   179,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,   194,   604,   599,     0,     0,   605,   195,
     263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,   175,   176,     0,     0,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,     0,     0,   363,   364,
       0,     0,     0,     0,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,   194,     0,     0,     0,
       0,     0,   195,     0,     0,     0,     0,     0,     0,     0,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,     0,   239,   363,   364,
       0,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,     0,     0,   363,   364,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,     0,     0,     0,     0,     0,     0,   365,
    -258,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,     0,     0,     0,     0,     0,     0,     0,  -259,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,     0,     0,   363,   364,     0,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
       0,     0,   363,   364,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   365,     0,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,     0,
       0,     0,     0,     0,     0,   365,  -260,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,     0,     0,     0,
       0,     0,     0,     0,  -261,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,     0,     0,
     363,   364,     0,     0,     0,   443,   350,   351,   352,   353,
     354,   355,   356,   357,     0,   359,   360,     0,     0,     0,
       0,   363,   364,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   365,     0,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375
};

static const yytype_int16 yycheck[] =
{
      27,     2,   259,    16,    17,    82,    83,    20,    84,    49,
       7,    28,     7,    22,   449,    14,   211,   293,   305,    14,
      21,   297,   305,   433,    49,    77,    16,    17,   424,    28,
      20,   317,    53,    28,     4,   349,    16,    17,   112,   300,
      20,    15,    66,    63,   702,     5,     6,    66,   388,   389,
      51,    52,   488,    13,     2,   378,     4,   788,    55,   631,
      55,    51,    52,    26,   623,    26,   510,    25,   640,   607,
     608,    51,    52,   113,    57,    25,    21,    22,   637,   402,
     905,   286,   882,    16,    17,   290,    25,    20,   647,    25,
     282,   100,    66,    53,   699,   418,   376,   702,     0,    25,
     380,   714,    10,   383,   427,   106,    86,    15,   446,   714,
     257,    25,    29,   451,   733,    57,   552,    77,    51,    25,
     739,    37,    38,   403,    25,   684,    57,    58,    59,    60,
     207,   349,   100,   135,    26,   118,    25,   417,    25,   419,
     217,    88,    25,    16,    17,   292,   293,    20,   428,    18,
     297,    20,   138,    90,   346,   100,    90,   125,   444,   145,
     118,   106,   107,   449,   989,   118,    60,   490,   118,    63,
     388,   389,   135,    55,   135,    88,   121,   140,   120,   979,
     138,   118,   140,   141,   118,   138,   466,   145,   138,   102,
      88,   141,   118,   110,    79,   145,    88,   144,   455,   138,
     318,   278,   138,   321,   140,   323,   744,   325,   939,   327,
     102,   491,   138,   107,    88,   141,   240,   504,    16,   145,
      51,   504,    25,    88,   138,   302,   404,   488,   886,   145,
     118,   144,   138,   230,   669,   230,   276,   138,   123,   140,
      71,   527,   282,   135,    28,   137,   144,   452,   300,   138,
     263,   138,   144,   458,   267,   138,   257,   282,   259,   138,
     284,   118,   263,    88,   469,   284,   240,    88,    99,   100,
     144,    90,   831,   247,    90,    88,   140,   267,   519,   144,
     521,   886,   140,   263,    90,    90,   722,   267,   138,   902,
     122,   552,   905,    88,   125,   145,    55,   902,   118,   118,
     905,    88,    88,   875,   212,   213,   346,   454,    90,    90,
     284,    90,   118,   118,   112,   118,   630,   115,   116,   144,
      55,   346,    90,   144,   344,    90,   347,   401,    25,   349,
     668,   144,   699,   281,   267,   138,   118,   118,   141,   118,
     300,   289,   145,    20,   627,   143,   551,   145,     2,   144,
       4,     5,     6,   118,   798,     9,    10,   144,   144,    13,
     334,    15,    16,    17,   334,   378,    20,   138,   388,   389,
     140,   815,   816,   659,   414,   145,   989,   378,   774,   310,
     138,   667,   422,   669,   989,   380,   334,   347,   383,   402,
     730,   339,   432,   138,   267,    49,   736,   737,   378,    53,
     145,   402,   549,   679,   727,   418,   663,   525,   403,    63,
     411,   344,    58,    59,   427,    90,   349,   418,    37,    38,
      57,   626,   402,    77,   419,   138,   427,   335,   336,   337,
     338,    58,    59,   428,   486,   380,   488,   135,   418,    71,
     618,   876,  1001,   118,   145,   462,   726,   427,   728,   423,
     424,    90,   141,   454,   455,   118,   446,   111,   403,   113,
     655,   722,   463,   462,   751,   875,   446,   462,   751,   449,
     142,   466,    71,   678,   419,   136,   141,   490,   112,   118,
     145,   115,   116,   428,    55,   562,   526,   477,    51,   490,
      53,    54,    55,    56,    17,    18,   491,   477,   472,   138,
     552,   112,   842,   436,   115,   116,   724,   508,   655,   510,
     490,   955,   730,   880,   138,   463,    51,    71,   736,   737,
      55,   466,    88,   890,   472,   782,   486,    71,   488,   128,
     129,   130,   679,   811,   812,   902,   102,   715,    51,    88,
      53,    54,    55,    56,   545,    90,   491,    62,   202,    64,
      65,   138,   579,   102,    97,    88,    15,    13,   212,   213,
      63,   802,   803,   804,   742,   806,    16,   808,   693,   102,
     597,   137,   697,   118,   752,   138,   859,    15,   144,   100,
     693,   138,   138,   141,   789,   136,   595,    51,   137,   714,
     876,   140,   552,   138,   603,   144,   623,   606,   113,   114,
      16,   714,   603,    51,   137,   606,   607,   608,   138,   263,
     637,   144,   138,   267,   138,   793,   603,   271,   272,   606,
     647,    90,   276,   624,   842,   138,   993,   281,   282,   630,
     631,   628,   633,   628,   651,   289,   138,   624,   138,   640,
    1007,   138,   616,    51,   138,    88,   300,   970,    44,   118,
     595,   856,   651,   118,    15,    18,   651,   684,   603,   102,
     136,   606,   663,   690,   740,    15,   861,   142,   136,   138,
     722,    15,   867,   136,    91,   853,    14,   622,   668,   624,
     334,   335,   336,   337,   338,   339,   340,   341,   668,   669,
     344,   971,   346,   347,   137,   349,   112,   630,    15,   115,
     116,   144,    15,   743,   724,   946,   947,   948,   949,   617,
     730,   731,   138,    90,   727,   138,   736,   737,   143,   759,
     141,    90,   138,    57,   378,   138,   727,   143,   138,   145,
      15,   771,   772,   728,   388,   389,   138,   714,   138,   779,
     138,   118,   650,   744,   922,   138,   138,   727,   402,   118,
     404,   405,    88,   138,   794,    62,   757,    64,    65,   760,
     414,   138,   722,    15,   418,    90,   102,    15,   422,   138,
    1011,    71,   746,   427,   899,   723,   136,   902,   432,   753,
     905,   782,   907,   728,   811,   812,   899,    61,    15,   902,
      64,    65,   905,   118,   907,    15,   138,   798,    55,    15,
     774,   137,   123,   136,   831,    16,   113,   114,   144,   463,
      16,   123,   852,   138,   815,   816,   136,    15,   472,    55,
     138,    15,   842,   138,   864,    15,   126,   127,   128,   129,
     130,   956,   486,   138,   488,   138,   490,   138,    88,   113,
     114,   138,     2,   956,     4,   138,   140,   138,   925,     9,
      10,   140,   102,   813,   762,    15,    16,    17,   818,    26,
      20,   463,    13,    88,   989,     6,   991,    88,   993,    26,
     995,    88,   526,    27,   875,   973,   989,   102,   991,   714,
     993,   102,   995,   979,    26,   102,   741,   137,   928,    49,
     930,   972,     7,   933,   144,  1020,   876,   317,   552,    88,
     860,   112,   242,    63,   115,   116,   112,  1020,   859,   115,
     116,   899,   137,   102,   941,   693,   137,   902,    -1,   144,
     137,    88,   899,   144,   699,   902,    88,   144,   905,    -1,
     907,    88,   143,    -1,   145,   102,    -1,   143,    -1,   145,
     102,    -1,    -1,    -1,    -1,   102,    88,    -1,   137,    -1,
      71,   111,    -1,   113,   955,   144,    -1,   970,   112,    -1,
     102,   115,   116,   617,   618,    86,    87,    -1,   135,   970,
     137,   972,   973,   140,  1001,   137,   971,   144,   135,   956,
     137,    -1,   144,   140,    -1,    -1,    -1,   144,    -1,   143,
     970,   145,    -1,   135,    -1,   137,   650,    -1,   140,    16,
      17,    88,   144,    20,   125,   126,   127,   128,   129,   130,
      -1,    88,   989,    -1,   991,   102,   993,    51,   995,    53,
      54,    55,    56,    -1,    -1,   102,   971,    -1,    -1,    46,
      47,    88,    -1,    -1,    51,    52,    51,    71,    53,    54,
      55,    56,   202,  1020,    -1,   102,    63,    64,     9,    10,
     137,    -1,   212,   213,    15,    -1,    -1,   144,    92,   112,
     137,   715,   115,   116,    98,    99,   100,   144,   722,   723,
     724,    61,    -1,   727,    64,    65,   730,   731,    -1,    -1,
     137,    -1,   736,   737,    -1,    -1,    -1,   144,   742,   743,
     143,   125,   145,    -1,   128,    -1,    -1,    51,   752,    53,
      54,    55,    56,   263,    -1,   759,   140,   267,   762,    -1,
      -1,   271,   272,    -1,    -1,    -1,   276,   771,   772,    -1,
      -1,   281,   282,   113,   114,   779,    -1,    -1,    -1,   289,
      -1,    -1,    -1,   388,   389,    -1,    -1,    -1,    92,   793,
     794,    -1,    51,    -1,    53,    54,    55,    56,    -1,    -1,
     111,    -1,    -1,    51,    -1,    53,    54,    55,    56,   813,
      -1,    -1,    71,    -1,   818,   420,   421,    -1,    -1,    63,
      64,    65,    -1,    71,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,    92,   344,    -1,   346,    -1,   842,   349,
      99,   100,   112,    -1,    92,   115,   116,    -1,   852,   853,
      98,    99,   100,    -1,    -1,    -1,   860,    -1,    -1,    -1,
     864,    -1,   467,    -1,    -1,    -1,   125,    -1,   378,   113,
     114,   141,   142,    -1,    -1,   145,    -1,   125,   388,   389,
     128,    -1,   249,   250,   251,   252,    63,    64,    65,    -1,
     138,    71,   402,    -1,   404,   405,   263,    -1,    -1,    71,
     267,   212,   213,    -1,   414,    -1,    86,    87,   418,    -1,
      -1,    -1,   422,    -1,    86,    87,    -1,   427,   922,    15,
      -1,    -1,   432,    -1,   928,    -1,   930,    -1,    51,   933,
      53,    54,    55,    56,    -1,    -1,   113,   114,    40,    41,
      42,    43,    44,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,   463,   126,   127,   128,   129,   130,    -1,
     271,   272,   472,    63,    64,    65,   970,    -1,    -1,    92,
      66,    -1,    -1,    -1,    -1,    98,    -1,   344,    -1,    -1,
     490,    -1,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,    -1,
      -1,   378,    -1,   113,   114,    -1,   526,    63,    64,    65,
      -1,   388,   389,    -1,   335,   336,   337,   338,    -1,   340,
     341,    -1,    -1,    -1,    -1,   402,    -1,    51,    -1,    53,
      54,    55,    56,    -1,    -1,    63,    64,    65,    -1,   416,
      -1,   418,    -1,   420,   421,    -1,    -1,    71,    -1,    -1,
     427,    -1,    63,    64,    65,    -1,    -1,   113,   114,   436,
      -1,    -1,   439,    -1,    -1,    -1,   443,    -1,    92,   446,
      -1,   448,   449,    -1,    98,    99,   100,     2,    -1,     4,
       5,     6,    -1,    -1,   405,   113,   114,    -1,    13,    -1,
     467,    -1,    -1,    -1,   820,   821,    -1,   617,   618,   205,
     477,   125,   113,   114,   128,   211,    63,    64,    65,    -1,
      63,    64,    65,   490,    -1,   730,   731,    -1,    -1,    -1,
      -1,   736,   737,    -1,    49,    -1,    -1,    -1,    53,   506,
     650,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,
     517,   247,    51,    -1,    53,    54,    55,    56,    -1,    -1,
     765,   766,    77,   768,   769,    -1,   113,   114,   535,   536,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   546,
      -1,    -1,    -1,    -1,    -1,    -1,   902,    -1,   284,    -1,
     689,    -1,    -1,    92,    -1,    -1,   292,   293,   113,    98,
      -1,   297,    -1,   702,    -1,   715,   705,    -1,    -1,    -1,
      -1,    -1,    -1,   723,   724,   714,    -1,   727,    -1,    -1,
     730,   731,    -1,    -1,    -1,    -1,   736,   737,    -1,    -1,
      -1,    -1,   742,   743,    -1,    -1,    -1,   842,   334,    -1,
      -1,    -1,   752,   959,   960,   961,    -1,   963,   964,   759,
      -1,    -1,   762,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   771,   772,   630,   869,    -1,    -1,    -1,    -1,   779,
      51,    -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   793,   794,    -1,    -1,   202,    -1,    -1,
      71,    -1,    -1,   660,    -1,    -1,  1012,  1013,  1014,  1015,
      -1,   668,   669,    -1,    -1,    -1,   617,    -1,  1024,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,   424,    -1,
      -1,    -1,   842,    -1,    -1,    -1,    -1,    -1,    -1,   650,
      -1,    -1,   852,   853,   125,    -1,    -1,   128,    -1,    -1,
      -1,    -1,   719,    -1,   864,    -1,    -1,   724,   725,   140,
     727,   276,    -1,   730,   731,    -1,   281,   282,    -1,   736,
     737,    -1,    -1,    -1,   289,     2,   472,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,   300,    13,   886,    -1,   888,
      -1,    -1,    -1,   892,    -1,    -1,    -1,    -1,   765,   766,
      -1,   768,   769,    -1,    -1,    -1,   905,    -1,   907,    -1,
      -1,   778,   922,    -1,    -1,    -1,    -1,    -1,   928,   334,
     930,    -1,    49,   933,   339,    -1,    53,    -1,    -1,    -1,
      -1,   346,   347,    -1,   349,    -1,    -1,    -1,   937,   938,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,   762,    -1,    -1,    -1,    -1,    -1,   824,    -1,    -1,
     970,    -1,    -1,    -1,    -1,    -1,    -1,   834,   835,    -1,
      -1,    -1,    -1,   388,   389,   842,    -1,    -1,   977,    -1,
      -1,    -1,     2,   982,     4,    -1,   113,    -1,    -1,   404,
     989,    -1,   991,    13,    -1,    -1,   995,    -1,     0,   414,
      -1,    -1,   869,    -1,    -1,    -1,     2,   422,     4,   876,
    1009,    13,    14,    15,    16,    17,    18,   432,    20,    -1,
     616,  1020,    -1,    -1,    26,    27,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,   463,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,   472,    -1,   655,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   486,    -1,   488,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   679,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,   970,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   526,    -1,   115,   116,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   552,   140,   141,
      -1,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,   276,
     746,    -1,    -1,    -1,   281,   282,    44,   753,    -1,    -1,
      -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,   774,    -1,
      -1,    -1,   202,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    -1,   618,    -1,    -1,   202,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,    -1,   346,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,
      -1,   281,   282,    -1,    -1,   861,    -1,    -1,    -1,   289,
      -1,   867,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,
     276,    -1,    -1,    -1,    -1,   281,   282,   414,    -1,    -1,
      -1,    -1,    -1,   289,    -1,   422,    -1,    -1,    -1,    -1,
     715,    -1,    -1,    -1,    -1,   432,    -1,   722,   723,   724,
      -1,    -1,    -1,    -1,   334,   730,    -1,    -1,    -1,   339,
      -1,   736,   737,    -1,    -1,    -1,   346,   742,   743,   349,
      -1,    -1,    -1,    -1,    -1,    -1,   463,   752,   334,    -1,
      -1,    -1,    -1,   339,   759,   472,    -1,    -1,    -1,    -1,
     346,    -1,    -1,   349,    -1,    -1,   771,   772,    -1,   486,
      -1,   488,    -1,    -1,   779,    -1,    -1,    -1,   388,   389,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   793,   794,
      -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   388,   389,   414,    -1,    -1,    -1,   813,   526,
      -1,    -1,   422,   818,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,   414,    -1,
      -1,    -1,    -1,    -1,    -1,   552,   422,   842,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   432,   852,   853,    -1,
      -1,    -1,    -1,   463,    -1,   860,    -1,    -1,    -1,   864,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,   463,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,   618,    -1,    80,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,   526,   922,    -1,    -1,
      -1,    98,    99,   928,    -1,   930,    -1,    -1,   933,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
     526,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,
      -1,    -1,   139,   140,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   715,    -1,
      -1,    -1,    -1,    -1,    -1,   722,   723,    -1,   618,    -1,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    -1,   742,   743,    -1,    -1,    -1,
      -1,    -1,   618,    -1,    -1,   752,    -1,    -1,    -1,    -1,
      -1,    -1,   759,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   771,   772,    -1,    -1,    -1,    -1,
      -1,    -1,   779,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   793,   794,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   813,    -1,    -1,    -1,
      -1,   818,    -1,    -1,    -1,   715,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   723,   724,    -1,    -1,    -1,    -1,    -1,
     730,    -1,    -1,    -1,    -1,    -1,   736,   737,    -1,   715,
      -1,    -1,   742,   743,    -1,   852,   853,   723,   724,    -1,
      -1,    -1,   752,   860,   730,    -1,    -1,   864,    -1,   759,
     736,   737,    -1,    -1,    -1,    -1,   742,   743,    -1,    -1,
      -1,   771,   772,    -1,    -1,    -1,   752,    -1,    -1,   779,
      -1,    -1,    -1,   759,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   793,   794,   771,   772,    -1,    -1,    -1,
      -1,    -1,    -1,   779,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   922,    -1,   793,   794,    -1,
      -1,   928,    -1,   930,    -1,    -1,   933,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,   842,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   852,   853,    -1,    -1,    -1,    -1,    -1,    -1,
     860,    -1,    -1,    -1,   864,    -1,   842,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   852,   853,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   864,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   922,    -1,    -1,    -1,    -1,    -1,   928,    -1,
     930,    -1,    -1,   933,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   922,    -1,    -1,    -1,
      -1,    -1,   928,    -1,   930,     0,     1,   933,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,     0,    -1,   111,   112,    -1,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    -1,   131,   132,   133,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,   143,    -1,
     145,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,     0,    -1,    -1,
     136,   137,   138,    -1,    -1,   141,   142,   143,   144,   145,
      13,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    -1,    -1,
       0,    -1,    -1,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,    13,    14,    15,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    88,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,     0,    -1,   135,   136,   137,   138,    -1,
      -1,   141,    -1,   143,   144,   145,    13,    14,    15,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,     0,    -1,   135,   136,
     137,   138,    -1,    -1,   141,    -1,   143,   144,   145,    13,
      14,    15,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    88,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,    -1,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,     0,
      -1,    -1,   136,   137,   138,    -1,    -1,   141,    -1,   143,
     144,   145,    13,    14,    15,    -1,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,
     141,    -1,   143,   144,   145,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,
     106,   107,   108,    -1,    -1,   111,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,     1,   145,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    17,    18,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,     1,   145,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,   108,    -1,
      -1,   111,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,     1,   145,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,   106,
     107,   108,    -1,    -1,   111,   112,    -1,    -1,   115,   116,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,   131,   132,   133,    -1,    19,    -1,
      21,    22,    23,    24,    -1,    -1,   143,    -1,   145,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,   108,    -1,    -1,
     111,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,    -1,   143,     1,   145,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,   112,    -1,    -1,   115,   116,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,   131,   132,   133,    -1,    19,    -1,    21,
      22,    23,    24,    -1,    -1,   143,    -1,   145,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,    -1,    -1,   111,
     112,    -1,    -1,   115,   116,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,   131,
     132,   133,    -1,    19,    -1,    21,    22,    23,    24,   141,
      -1,   143,    -1,   145,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,
     106,   107,   108,    -1,    -1,   111,   112,    -1,    -1,   115,
     116,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,   131,   132,   133,    -1,    19,
      -1,    21,    22,    23,    24,   141,    -1,   143,    -1,   145,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,   108,    -1,
      -1,   111,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,    -1,    -1,   136,    -1,    -1,    -1,
      -1,    -1,    -1,   143,     1,   145,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,   106,
     107,   108,    -1,    -1,   111,   112,    -1,    -1,   115,   116,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,   131,   132,   133,    -1,    19,    -1,
      21,    22,    23,    24,    -1,    -1,   143,    -1,   145,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    95,    96,    -1,    98,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,   108,    -1,    -1,
     111,   112,    -1,    -1,   115,   116,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
     131,   132,   133,    -1,    19,    -1,    21,    22,    23,    24,
      -1,    -1,   143,    -1,   145,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,    -1,    -1,   111,   112,    -1,    -1,
     115,   116,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,   131,   132,   133,    -1,
      19,    -1,    21,    22,    23,    24,    -1,    -1,   143,    -1,
     145,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,    -1,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
      -1,    -1,   111,   112,    -1,    -1,   115,   116,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,   131,   132,   133,    -1,    19,    -1,    21,    22,
      23,    24,    -1,    -1,   143,    -1,   145,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    -1,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    98,    99,   100,   101,
      -1,   103,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,
     132,   133,    19,   135,    21,    22,    23,    24,   140,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    99,   100,   101,    -1,   103,   104,   105,   106,
     107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,   131,   132,   133,    19,   135,    21,
      22,    23,    24,   140,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    98,    99,   100,   101,
      -1,   103,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,
     132,   133,    19,   135,    21,    22,    23,    24,   140,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    99,   100,   101,    -1,   103,   104,   105,   106,
     107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,
      -1,    -1,    -1,   140,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    96,    -1,    98,
      99,   100,   101,    -1,   103,   104,   105,   106,   107,   108,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,
      -1,   140,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    95,    96,    -1,    98,    99,   100,
     101,    -1,   103,   104,   105,   106,   107,   108,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
     131,   132,   133,    19,    -1,    21,    22,    23,    24,   140,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,    -1,   103,   104,   105,
     106,   107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,   131,   132,   133,    19,    -1,
      21,    22,    23,    24,   140,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    95,    96,    -1,    98,    99,   100,
     101,    -1,   103,   104,   105,   106,   107,   108,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,   140,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,    -1,   139,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,
     139,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    80,    81,
      -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,    -1,    -1,   111,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,   131,    21,    22,    23,
      24,    -1,    -1,   138,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,   131,    21,    22,
      23,    24,    -1,    -1,   138,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    99,   100,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,   112,    -1,    -1,   115,   116,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    99,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,   112,    -1,    -1,   115,   116,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    99,   100,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    99,   100,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    99,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    99,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    99,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   131,   132,   133,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,   131,   132,
     133,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,   131,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,   106,
     107,   108,    -1,    -1,   111,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,   131,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,
     106,   107,   108,    -1,    -1,   111,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,   131,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    -1,
      95,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,    -1,    -1,   111,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,   131,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,   131,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,   131,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    -1,    95,    96,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,    -1,    51,    52,    -1,   119,    55,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,   131,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    98,
      99,    80,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    -1,   132,   133,    51,    52,    -1,    -1,    55,
     139,   140,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    87,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    98,    99,    80,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,   132,   133,    51,    52,
      -1,    -1,    55,   139,   140,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    -1,   132,
     133,    51,    52,    -1,    -1,    55,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,   132,   133,    51,    52,    -1,    -1,    55,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    -1,   132,   133,    51,    52,    -1,
      -1,    55,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,   132,   133,
      51,    52,    -1,    -1,    55,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    80,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      -1,   132,   133,    51,    52,    -1,    -1,    55,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    -1,   132,   133,    51,    52,    -1,    -1,
      55,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    -1,   132,   133,    51,
      52,    -1,    -1,    55,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    80,    81,
      -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    -1,
     132,   133,    51,    52,    -1,    -1,    55,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    -1,   132,   133,    51,    52,    -1,    -1,    55,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,   132,   133,    51,    52,
      -1,    -1,    55,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    -1,   132,
     133,    51,    52,    -1,    -1,    55,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,   132,   133,    51,    52,    -1,    -1,    55,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    80,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,   145,    86,    87,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     138,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   138,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   147,   148,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    19,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      58,    59,    60,    63,    66,    67,    69,    70,    89,    92,
      93,    95,    96,    98,   101,   103,   104,   105,   106,   107,
     108,   111,   131,   132,   133,   149,   150,   151,   156,   158,
     160,   162,   163,   166,   167,   169,   170,   171,   173,   174,
     183,   197,   218,   239,   240,   250,   251,   252,   256,   257,
     258,   264,   265,   266,   268,   269,   270,   271,   272,   273,
     307,   321,   151,    21,    22,    30,    31,    32,    39,    51,
      55,    86,    89,    92,   131,   175,   176,   197,   218,   270,
     273,   307,   176,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    45,    46,    47,
      48,    49,    50,    51,    52,    55,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    80,    81,    84,    85,    86,
      87,    98,    99,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   132,   133,   139,   140,   177,   181,   182,
     272,   302,   198,    89,   160,   161,   174,   218,   270,   271,
     273,   161,   204,   206,    89,   167,   174,   218,   223,   270,
     273,    33,    34,    35,    36,    48,    49,    50,    51,    55,
     103,   177,   178,   179,   266,   112,   115,   116,   143,   145,
     161,   260,   261,   262,   313,   318,   319,   320,    51,    98,
      99,   100,   132,   166,   183,   189,   192,   195,   252,   305,
     306,   189,   189,   140,   186,   187,   190,   191,   321,   186,
     190,   140,   314,   319,   178,   152,   135,   183,   218,   183,
      55,     1,    92,   154,   155,   156,   168,   169,   321,   199,
     201,   184,   195,   305,   321,   183,   304,   305,   321,    89,
     138,   173,   218,   270,   273,   202,    53,    54,    56,    63,
     107,   177,   267,    62,    64,    65,   113,   114,   253,   254,
      63,   253,    63,   253,    63,   253,    61,   253,    58,    59,
     162,   183,   183,   313,   320,    40,    41,    42,    43,    44,
      37,    38,    28,   237,   118,   138,    92,    98,   170,   118,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    86,    87,   119,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    88,   102,   137,   144,
     311,    88,   311,   312,    26,   135,   241,   252,    90,    90,
     186,   190,   241,   160,    51,    55,   175,    58,    59,   122,
     274,    88,   137,   311,   213,   303,   214,    88,   144,   310,
     153,   154,    55,    16,   219,   318,   118,    88,   137,   311,
      90,    90,   219,   161,   161,    55,    88,   137,   311,    25,
     107,   138,   263,   313,   112,   262,    20,   244,   318,    57,
     183,   183,   183,    91,   138,   193,   194,   321,    57,   138,
     193,   194,   188,   189,   195,   305,   321,   189,   160,   314,
     315,   160,   157,   135,   154,    88,   311,    90,   156,   168,
     141,   313,   320,   315,   156,   315,   142,   194,   317,   319,
     194,   317,   136,   317,    55,   170,   171,   172,   138,    88,
     137,   311,    51,    53,    54,    55,    56,    71,    92,    98,
      99,   100,   125,   128,   140,   235,   277,   278,   281,   282,
     283,   284,   286,   287,   288,   289,   291,   292,   293,   296,
     297,   298,   299,   300,    63,   253,   255,   259,   260,    62,
     254,    63,    63,    63,    61,    71,    71,   151,   161,   161,
     161,   161,   156,   160,   160,   238,    98,   162,   183,   195,
     196,   168,   138,   173,   138,   158,   159,   162,   174,   183,
     185,   196,   218,   273,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
      51,    52,    55,   181,   186,   308,   309,   188,    51,    52,
      55,   181,   186,   308,    51,    55,   308,   243,   242,   159,
     183,   185,   159,   185,    97,   164,   211,   275,   210,    51,
      55,   175,   308,   188,   308,   153,   160,   215,   216,    15,
      13,   246,   321,   154,    16,    51,    55,   188,    51,    55,
     154,    27,   220,   318,   220,    51,    55,   188,    51,    55,
     208,   180,   154,   244,   183,   195,    15,   183,   183,   259,
      98,   183,   192,   305,   183,   306,   315,   138,   194,   138,
     315,   141,   178,   149,   136,   185,   315,   156,   200,   305,
     170,   172,    51,    55,   188,    51,    55,    57,   118,   290,
     286,   203,   183,   138,   301,   321,    51,   138,   301,   138,
     285,   183,   138,   285,    51,   138,   285,    51,    63,   154,
     260,   183,   183,    79,   123,   229,   230,   321,   183,   194,
     315,   172,   138,    44,   118,    44,    88,   137,   311,   314,
      90,    90,   186,   190,   314,   316,    90,    90,   187,   190,
     187,   190,   229,   229,   165,   318,   161,   153,   316,    15,
     315,   140,   276,   286,   177,   183,   196,   247,   321,    18,
     222,   321,    17,   221,   222,    90,    90,   316,    90,    90,
     222,   205,   207,   316,   161,   178,   136,    15,   194,   219,
     183,   193,   305,   136,   315,   317,   316,    51,    98,   224,
     291,   232,   314,    29,   110,   236,    51,   278,   283,   300,
     284,   289,   296,   298,   291,   293,   298,    51,   291,   136,
     226,   228,   231,   277,   279,   280,   283,   291,   292,   294,
     295,   298,   300,   153,    98,   183,   172,   156,   183,    51,
      55,   188,    51,    55,    57,   120,   159,   185,   162,   185,
     164,   142,    90,   159,   185,   159,   185,   164,   241,   237,
     153,   154,   229,   212,   318,    15,   286,   153,   318,   217,
      91,   248,   321,   154,    14,   249,   321,   161,    15,    90,
      15,   154,   154,   220,   183,   154,   138,   138,   288,   315,
     138,   141,   143,   153,   154,   301,   138,   285,   138,   285,
     138,   285,   138,   285,   285,   232,   232,    89,   218,   138,
     301,   301,   138,   227,   218,   138,   227,   138,   227,    15,
     183,   316,   183,   183,   159,   185,    15,   136,   154,   153,
     315,    15,   276,    89,   174,   218,   270,   273,   219,   154,
     219,    15,    15,   209,   222,   244,   245,   225,   138,    98,
      51,   233,   234,   287,    15,   136,   291,   298,   291,   291,
     123,   123,    55,    88,   279,   283,   138,   226,   227,   295,
     298,   291,   294,   298,   291,   136,    15,   153,    55,    88,
     137,   311,   154,   154,   154,   291,   291,   138,   288,   138,
     314,   285,   138,   285,   285,   285,    51,    55,   301,   138,
     227,   138,   227,   138,   227,   138,   227,   227,    15,    51,
      55,   188,    51,    55,   246,   221,    15,   138,   291,   138,
     234,   291,   291,   298,   291,   291,   316,   291,   285,   227,
     138,   227,   227,   227,   291,   227
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, p)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, p); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_state *p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parser_state *p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_state *p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parser_state *p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, parser_state *p)
#else
static void
yy_reduce_print (yyvsp, yyrule, p)
    YYSTYPE *yyvsp;
    int yyrule;
    parser_state *p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , p);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_state *p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    parser_state *p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (parser_state *p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (parser_state *p)
#else
int
yyparse (p)
    parser_state *p;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1375 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_BEG;
                      if (!p->locals) p->locals = cons(0,0);
                    ;}
    break;

  case 3:
#line 1380 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->tree = new_scope(p, (yyvsp[(2) - (2)].nd));
                      NODE_LINENO(p->tree, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 4:
#line 1387 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 5:
#line 1393 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 6:
#line 1397 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_begin(p, (yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 7:
#line 1402 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), newline_node((yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 8:
#line 1406 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 10:
#line 1413 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 11:
#line 1417 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "BEGIN not supported");
                      local_resume(p, (yyvsp[(2) - (5)].nd));
                      (yyval.nd) = 0;
                    ;}
    break;

  case 12:
#line 1428 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if ((yyvsp[(2) - (4)].nd)) {
                        (yyval.nd) = new_rescue(p, (yyvsp[(1) - (4)].nd), (yyvsp[(2) - (4)].nd), (yyvsp[(3) - (4)].nd));
                        NODE_LINENO((yyval.nd), (yyvsp[(1) - (4)].nd));
                      }
                      else if ((yyvsp[(3) - (4)].nd)) {
                        yywarn(p, "else without rescue is useless");
                        (yyval.nd) = push((yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd));
                      }
                      else {
                        (yyval.nd) = (yyvsp[(1) - (4)].nd);
                      }
                      if ((yyvsp[(4) - (4)].nd)) {
                        if ((yyval.nd)) {
                          (yyval.nd) = new_ensure(p, (yyval.nd), (yyvsp[(4) - (4)].nd));
                        }
                        else {
                          (yyval.nd) = push((yyvsp[(4) - (4)].nd), new_nil(p));
                        }
                      }
                    ;}
    break;

  case 13:
#line 1452 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 14:
#line 1458 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 15:
#line 1462 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_begin(p, (yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 16:
#line 1467 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), newline_node((yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 17:
#line 1471 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_begin(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 18:
#line 1476 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {p->lstate = EXPR_FNAME;;}
    break;

  case 19:
#line 1477 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_alias(p, (yyvsp[(2) - (4)].id), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 20:
#line 1481 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 21:
#line 1485 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd), 0);
                    ;}
    break;

  case 22:
#line 1489 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_unless(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd), 0);
                    ;}
    break;

  case 23:
#line 1493 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_while(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd));
                    ;}
    break;

  case 24:
#line 1497 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_until(p, cond((yyvsp[(3) - (3)].nd)), (yyvsp[(1) - (3)].nd));
                    ;}
    break;

  case 25:
#line 1501 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_mod_rescue(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 26:
#line 1505 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "END not supported");
                      (yyval.nd) = new_postexe(p, (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 28:
#line 1511 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 29:
#line 1515 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), new_array(p, (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 30:
#line 1519 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 31:
#line 1523 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(1) - (3)].nd), new_array(p, (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 33:
#line 1530 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 34:
#line 1534 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 35:
#line 1538 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (6)].nd), intern("[]",2), (yyvsp[(3) - (6)].nd), '.'), (yyvsp[(5) - (6)].id), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 36:
#line 1542 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0, (yyvsp[(2) - (5)].num)), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 37:
#line 1546 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0, (yyvsp[(2) - (5)].num)), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 38:
#line 1550 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "constant re-assignment");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 39:
#line 1555 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0, tCOLON2), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 40:
#line 1559 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (3)].nd));
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 42:
#line 1567 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_mod_rescue(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 45:
#line 1576 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_and(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 46:
#line 1580 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_or(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 47:
#line 1584 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(3) - (3)].nd)), "!");
                    ;}
    break;

  case 48:
#line 1588 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(2) - (2)].nd)), "!");
                    ;}
    break;

  case 50:
#line 1595 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (!(yyvsp[(1) - (1)].nd)) (yyval.nd) = new_nil(p);
                      else {
                        (yyval.nd) = (yyvsp[(1) - (1)].nd);
                      }
                    ;}
    break;

  case 54:
#line 1609 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd), (yyvsp[(2) - (4)].num));
                    ;}
    break;

  case 55:
#line 1615 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_nest(p);
                    ;}
    break;

  case 56:
#line 1621 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_block(p, (yyvsp[(3) - (5)].nd), (yyvsp[(4) - (5)].nd));
                      local_unnest(p);
                    ;}
    break;

  case 57:
#line 1628 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 58:
#line 1632 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      args_with_block(p, (yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (3)].id), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 59:
#line 1637 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd), (yyvsp[(2) - (4)].num));
                    ;}
    break;

  case 60:
#line 1641 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      args_with_block(p, (yyvsp[(4) - (5)].nd), (yyvsp[(5) - (5)].nd));
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd), (yyvsp[(2) - (5)].num));
                   ;}
    break;

  case 61:
#line 1646 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd), tCOLON2);
                    ;}
    break;

  case 62:
#line 1650 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      args_with_block(p, (yyvsp[(4) - (5)].nd), (yyvsp[(5) - (5)].nd));
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd), tCOLON2);
                    ;}
    break;

  case 63:
#line 1655 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_super(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 64:
#line 1659 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_yield(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 65:
#line 1663 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_return(p, ret_args(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 66:
#line 1667 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_break(p, ret_args(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 67:
#line 1671 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_next(p, ret_args(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 68:
#line 1677 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 69:
#line 1681 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 71:
#line 1688 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 72:
#line 1694 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 73:
#line 1698 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1(push((yyvsp[(1) - (2)].nd),(yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 74:
#line 1702 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list2((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 75:
#line 1706 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 76:
#line 1710 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list2((yyvsp[(1) - (2)].nd), new_nil(p));
                    ;}
    break;

  case 77:
#line 1714 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (4)].nd), new_nil(p), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 78:
#line 1718 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list2(0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 79:
#line 1722 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3(0, (yyvsp[(2) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 80:
#line 1726 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list2(0, new_nil(p));
                    ;}
    break;

  case 81:
#line 1730 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3(0, new_nil(p), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 83:
#line 1737 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_masgn(p, (yyvsp[(2) - (3)].nd), NULL);
                    ;}
    break;

  case 84:
#line 1743 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 85:
#line 1747 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 86:
#line 1753 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 87:
#line 1757 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 88:
#line 1763 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      assignable(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 89:
#line 1767 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), intern("[]",2), (yyvsp[(3) - (4)].nd), '.');
                    ;}
    break;

  case 90:
#line 1771 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, (yyvsp[(2) - (3)].num));
                    ;}
    break;

  case 91:
#line 1775 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, tCOLON2);
                    ;}
    break;

  case 92:
#line 1779 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, (yyvsp[(2) - (3)].num));
                    ;}
    break;

  case 93:
#line 1783 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id));
                    ;}
    break;

  case 94:
#line 1789 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon3(p, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 95:
#line 1795 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (1)].nd));
                      (yyval.nd) = 0;
                    ;}
    break;

  case 96:
#line 1802 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      assignable(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 97:
#line 1806 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), intern("[]",2), (yyvsp[(3) - (4)].nd), '.');
                    ;}
    break;

  case 98:
#line 1810 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, (yyvsp[(2) - (3)].num));
                    ;}
    break;

  case 99:
#line 1814 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, tCOLON2);
                    ;}
    break;

  case 100:
#line 1818 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, (yyvsp[(2) - (3)].num));
                    ;}
    break;

  case 101:
#line 1822 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id));
                    ;}
    break;

  case 102:
#line 1828 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "dynamic constant assignment");
                      (yyval.nd) = new_colon3(p, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 103:
#line 1834 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (1)].nd));
                      (yyval.nd) = 0;
                    ;}
    break;

  case 104:
#line 1841 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "class/module name must be CONSTANT");
                    ;}
    break;

  case 106:
#line 1848 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons((node*)1, nsym((yyvsp[(2) - (2)].id)));
                    ;}
    break;

  case 107:
#line 1852 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons((node*)0, nsym((yyvsp[(1) - (1)].id)));
                    ;}
    break;

  case 108:
#line 1856 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(1) - (3)].nd));
                      (yyval.nd) = cons((yyvsp[(1) - (3)].nd), nsym((yyvsp[(3) - (3)].id)));
                    ;}
    break;

  case 112:
#line 1866 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_ENDFN;
                      (yyval.id) = (yyvsp[(1) - (1)].id);
                    ;}
    break;

  case 113:
#line 1871 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_ENDFN;
                      (yyval.id) = (yyvsp[(1) - (1)].id);
                    ;}
    break;

  case 116:
#line 1882 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_undef(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 117:
#line 1885 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {p->lstate = EXPR_FNAME;;}
    break;

  case 118:
#line 1886 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), nsym((yyvsp[(4) - (4)].id)));
                    ;}
    break;

  case 119:
#line 1891 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('|');   ;}
    break;

  case 120:
#line 1892 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('^');   ;}
    break;

  case 121:
#line 1893 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('&');   ;}
    break;

  case 122:
#line 1894 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("<=>",3); ;}
    break;

  case 123:
#line 1895 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("==",2);  ;}
    break;

  case 124:
#line 1896 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("===",3); ;}
    break;

  case 125:
#line 1897 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("=~",2);  ;}
    break;

  case 126:
#line 1898 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("!~",2);  ;}
    break;

  case 127:
#line 1899 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('>');   ;}
    break;

  case 128:
#line 1900 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern(">=",2);  ;}
    break;

  case 129:
#line 1901 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('<');   ;}
    break;

  case 130:
#line 1902 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("<=",2);  ;}
    break;

  case 131:
#line 1903 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("!=",2);  ;}
    break;

  case 132:
#line 1904 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("<<",2);  ;}
    break;

  case 133:
#line 1905 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern(">>",2);  ;}
    break;

  case 134:
#line 1906 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('+');   ;}
    break;

  case 135:
#line 1907 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('-');   ;}
    break;

  case 136:
#line 1908 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('*');   ;}
    break;

  case 137:
#line 1909 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('*');   ;}
    break;

  case 138:
#line 1910 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('/');   ;}
    break;

  case 139:
#line 1911 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('%');   ;}
    break;

  case 140:
#line 1912 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("**",2);  ;}
    break;

  case 141:
#line 1913 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("**",2);  ;}
    break;

  case 142:
#line 1914 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('!');   ;}
    break;

  case 143:
#line 1915 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('~');   ;}
    break;

  case 144:
#line 1916 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("+@",2);  ;}
    break;

  case 145:
#line 1917 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("-@",2);  ;}
    break;

  case 146:
#line 1918 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("[]",2);  ;}
    break;

  case 147:
#line 1919 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern("[]=",3); ;}
    break;

  case 148:
#line 1920 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    { (yyval.id) = intern_c('`');   ;}
    break;

  case 189:
#line 1938 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 190:
#line 1942 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, (yyvsp[(1) - (3)].nd), (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 191:
#line 1946 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (6)].nd), intern("[]",2), (yyvsp[(3) - (6)].nd), '.'), (yyvsp[(5) - (6)].id), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 192:
#line 1950 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0, (yyvsp[(2) - (5)].num)), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 193:
#line 1954 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0, (yyvsp[(2) - (5)].num)), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 194:
#line 1958 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_op_asgn(p, new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), 0, tCOLON2), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 195:
#line 1962 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "constant re-assignment");
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 196:
#line 1967 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "constant re-assignment");
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 197:
#line 1972 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      backref_error(p, (yyvsp[(1) - (3)].nd));
                      (yyval.nd) = new_begin(p, 0);
                    ;}
    break;

  case 198:
#line 1977 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_dot2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 199:
#line 1981 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_dot3(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 200:
#line 1985 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "+", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 201:
#line 1989 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "-", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 202:
#line 1993 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "*", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 203:
#line 1997 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "/", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 204:
#line 2001 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "%", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 205:
#line 2005 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "**", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 206:
#line 2009 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, call_bin_op(p, (yyvsp[(2) - (4)].nd), "**", (yyvsp[(4) - (4)].nd)), "-@");
                    ;}
    break;

  case 207:
#line 2013 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, call_bin_op(p, (yyvsp[(2) - (4)].nd), "**", (yyvsp[(4) - (4)].nd)), "-@");
                    ;}
    break;

  case 208:
#line 2017 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, (yyvsp[(2) - (2)].nd), "+@");
                    ;}
    break;

  case 209:
#line 2021 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, (yyvsp[(2) - (2)].nd), "-@");
                    ;}
    break;

  case 210:
#line 2025 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "|", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 211:
#line 2029 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "^", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 212:
#line 2033 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "&", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 213:
#line 2037 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<=>", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 214:
#line 2041 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), ">", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 215:
#line 2045 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), ">=", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 216:
#line 2049 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 217:
#line 2053 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<=", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 218:
#line 2057 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "==", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 219:
#line 2061 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "===", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 220:
#line 2065 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "!=", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 221:
#line 2069 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "=~", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 222:
#line 2073 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "!~", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 223:
#line 2077 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(2) - (2)].nd)), "!");
                    ;}
    break;

  case 224:
#line 2081 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(2) - (2)].nd)), "~");
                    ;}
    break;

  case 225:
#line 2085 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), "<<", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 226:
#line 2089 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_bin_op(p, (yyvsp[(1) - (3)].nd), ">>", (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 227:
#line 2093 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_and(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 228:
#line 2097 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_or(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 229:
#line 2101 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(1) - (6)].nd)), (yyvsp[(3) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 230:
#line 2105 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(1) - (6)].nd)), (yyvsp[(3) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 231:
#line 2109 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 233:
#line 2116 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 234:
#line 2121 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), new_kw_hash(p, (yyvsp[(3) - (4)].nd)));
                    ;}
    break;

  case 235:
#line 2125 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(new_kw_hash(p, (yyvsp[(1) - (2)].nd)), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 236:
#line 2132 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 237:
#line 2136 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(1) - (3)].nd));
                      void_expr_error(p, (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = new_mod_rescue(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 238:
#line 2144 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 243:
#line 2156 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (2)].nd),0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 244:
#line 2161 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(push((yyvsp[(1) - (4)].nd), new_kw_hash(p, (yyvsp[(3) - (4)].nd))), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (4)].nd));
                    ;}
    break;

  case 245:
#line 2166 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(list1(new_kw_hash(p, (yyvsp[(1) - (2)].nd))), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 246:
#line 2173 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(1) - (1)].nd));
                      (yyval.nd) = cons(list1((yyvsp[(1) - (1)].nd)), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 247:
#line 2179 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons((yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 248:
#line 2184 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(list1(new_kw_hash(p, (yyvsp[(1) - (2)].nd))), (yyvsp[(2) - (2)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (2)].nd));
                    ;}
    break;

  case 249:
#line 2189 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(push((yyvsp[(1) - (4)].nd), new_kw_hash(p, (yyvsp[(3) - (4)].nd))), (yyvsp[(4) - (4)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (4)].nd));
                    ;}
    break;

  case 250:
#line 2194 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(0, (yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 251:
#line 2200 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      CMDARG_PUSH(1);
                    ;}
    break;

  case 252:
#line 2205 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->cmdarg_stack = (yyvsp[(1) - (2)].stack);
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 253:
#line 2212 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_block_arg(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 254:
#line 2218 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 255:
#line 2222 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 258:
#line 2232 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(1) - (1)].nd));
                      (yyval.nd) = cons((yyvsp[(1) - (1)].nd), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 259:
#line 2238 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = cons(new_splat(p, (yyvsp[(2) - (2)].nd)), 0);
                      NODE_LINENO((yyval.nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 260:
#line 2244 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 261:
#line 2249 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(4) - (4)].nd));
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), new_splat(p, (yyvsp[(4) - (4)].nd)));
                    ;}
    break;

  case 262:
#line 2256 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 263:
#line 2261 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(4) - (4)].nd));
                      (yyval.nd) = push((yyvsp[(1) - (4)].nd), new_splat(p, (yyvsp[(4) - (4)].nd)));
                    ;}
    break;

  case 264:
#line 2266 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = list1(new_splat(p, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 272:
#line 2280 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (1)].id), 0);
                    ;}
    break;

  case 273:
#line 2284 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 274:
#line 2290 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->cmdarg_stack = (yyvsp[(2) - (4)].stack);
                      (yyval.nd) = (yyvsp[(3) - (4)].nd);
                    ;}
    break;

  case 275:
#line 2295 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 276:
#line 2299 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {p->lstate = EXPR_ENDARG;;}
    break;

  case 277:
#line 2300 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->cmdarg_stack = (yyvsp[(2) - (5)].stack);
                      (yyval.nd) = (yyvsp[(3) - (5)].nd);
                    ;}
    break;

  case 278:
#line 2304 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {p->lstate = EXPR_ENDARG;;}
    break;

  case 279:
#line 2305 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 280:
#line 2309 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 281:
#line 2313 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_colon2(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id));
                    ;}
    break;

  case 282:
#line 2317 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_colon3(p, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 283:
#line 2321 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_array(p, (yyvsp[(2) - (3)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 284:
#line 2326 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_hash(p, (yyvsp[(2) - (3)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(2) - (3)].nd));
                    ;}
    break;

  case 285:
#line 2331 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_return(p, 0);
                    ;}
    break;

  case 286:
#line 2335 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_yield(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 287:
#line 2339 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, cond((yyvsp[(3) - (4)].nd)), "!");
                    ;}
    break;

  case 288:
#line 2343 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = call_uni_op(p, new_nil(p), "!");
                    ;}
    break;

  case 289:
#line 2347 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (2)].id), cons(0, (yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 291:
#line 2352 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      call_with_block(p, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 292:
#line 2357 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_nest(p);
                      (yyval.num) = p->lpar_beg;
                      p->lpar_beg = ++p->paren_nest;
                    ;}
    break;

  case 293:
#line 2363 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 294:
#line 2368 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lpar_beg = (yyvsp[(2) - (5)].num);
                      (yyval.nd) = new_lambda(p, (yyvsp[(3) - (5)].nd), (yyvsp[(5) - (5)].nd));
                      local_unnest(p);
                      p->cmdarg_stack = (yyvsp[(4) - (5)].stack);
                      CMDARG_LEXPOP();
                    ;}
    break;

  case 295:
#line 2379 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(2) - (6)].nd)), (yyvsp[(4) - (6)].nd), (yyvsp[(5) - (6)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (6)].num));
                    ;}
    break;

  case 296:
#line 2387 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_unless(p, cond((yyvsp[(2) - (6)].nd)), (yyvsp[(4) - (6)].nd), (yyvsp[(5) - (6)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (6)].num));
                    ;}
    break;

  case 297:
#line 2391 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {COND_PUSH(1);;}
    break;

  case 298:
#line 2391 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {COND_POP();;}
    break;

  case 299:
#line 2394 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_while(p, cond((yyvsp[(3) - (7)].nd)), (yyvsp[(6) - (7)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (7)].num));
                    ;}
    break;

  case 300:
#line 2398 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {COND_PUSH(1);;}
    break;

  case 301:
#line 2398 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {COND_POP();;}
    break;

  case 302:
#line 2401 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_until(p, cond((yyvsp[(3) - (7)].nd)), (yyvsp[(6) - (7)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (7)].num));
                    ;}
    break;

  case 303:
#line 2408 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_case(p, (yyvsp[(2) - (5)].nd), (yyvsp[(4) - (5)].nd));
                    ;}
    break;

  case 304:
#line 2412 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_case(p, 0, (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 305:
#line 2416 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {COND_PUSH(1);;}
    break;

  case 306:
#line 2418 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {COND_POP();;}
    break;

  case 307:
#line 2421 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_for(p, (yyvsp[(2) - (9)].nd), (yyvsp[(5) - (9)].nd), (yyvsp[(8) - (9)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (9)].num));
                    ;}
    break;

  case 308:
#line 2427 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "class definition in method body");
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 309:
#line 2434 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_class(p, (yyvsp[(2) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (6)].num));
                      local_resume(p, (yyvsp[(4) - (6)].nd));
                    ;}
    break;

  case 310:
#line 2441 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.num) = p->in_def;
                      p->in_def = 0;
                    ;}
    break;

  case 311:
#line 2446 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(local_switch(p), nint(p->in_single));
                      p->in_single = 0;
                    ;}
    break;

  case 312:
#line 2452 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_sclass(p, (yyvsp[(3) - (8)].nd), (yyvsp[(7) - (8)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (8)].num));
                      local_resume(p, (yyvsp[(6) - (8)].nd)->car);
                      p->in_def = (yyvsp[(4) - (8)].num);
                      p->in_single = intn((yyvsp[(6) - (8)].nd)->cdr);
                    ;}
    break;

  case 313:
#line 2461 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if (p->in_def || p->in_single)
                        yyerror(p, "module definition in method body");
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 314:
#line 2468 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_module(p, (yyvsp[(2) - (5)].nd), (yyvsp[(4) - (5)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (5)].num));
                      local_resume(p, (yyvsp[(3) - (5)].nd));
                    ;}
    break;

  case 315:
#line 2474 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 316:
#line 2478 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->in_def++;
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 317:
#line 2485 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_def(p, (yyvsp[(2) - (7)].id), (yyvsp[(5) - (7)].nd), (yyvsp[(6) - (7)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (7)].num));
                      local_resume(p, (yyvsp[(4) - (7)].nd));
                      p->in_def--;
                      p->cmdarg_stack = (yyvsp[(3) - (7)].stack);
                    ;}
    break;

  case 318:
#line 2493 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_FNAME;
                      (yyval.stack) = p->cmdarg_stack;
                      p->cmdarg_stack = 0;
                    ;}
    break;

  case 319:
#line 2499 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->in_single++;
                      p->lstate = EXPR_ENDFN; /* force for args */
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 320:
#line 2507 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_sdef(p, (yyvsp[(2) - (9)].nd), (yyvsp[(5) - (9)].id), (yyvsp[(7) - (9)].nd), (yyvsp[(8) - (9)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(1) - (9)].num));
                      local_resume(p, (yyvsp[(6) - (9)].nd));
                      p->in_single--;
                      p->cmdarg_stack = (yyvsp[(4) - (9)].stack);
                    ;}
    break;

  case 321:
#line 2515 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_break(p, 0);
                    ;}
    break;

  case 322:
#line 2519 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_next(p, 0);
                    ;}
    break;

  case 323:
#line 2523 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_redo(p);
                    ;}
    break;

  case 324:
#line 2527 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_retry(p);
                    ;}
    break;

  case 325:
#line 2533 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                      if (!(yyval.nd)) (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 332:
#line 2552 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_if(p, cond((yyvsp[(2) - (5)].nd)), (yyvsp[(4) - (5)].nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 334:
#line 2559 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 335:
#line 2565 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1(list1((yyvsp[(1) - (1)].nd)));
                    ;}
    break;

  case 337:
#line 2572 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (1)].nd),0,0);
                    ;}
    break;

  case 338:
#line 2576 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (4)].nd), new_arg(p, (yyvsp[(4) - (4)].id)), 0);
                    ;}
    break;

  case 339:
#line 2580 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (6)].nd), new_arg(p, (yyvsp[(4) - (6)].id)), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 340:
#line 2584 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, 0);
                      (yyval.nd) = list3((yyvsp[(1) - (3)].nd), (node*)-1, 0);
                    ;}
    break;

  case 341:
#line 2589 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3((yyvsp[(1) - (5)].nd), (node*)-1, (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 342:
#line 2593 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3(0, new_arg(p, (yyvsp[(2) - (2)].id)), 0);
                    ;}
    break;

  case 343:
#line 2597 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3(0, new_arg(p, (yyvsp[(2) - (4)].id)), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 344:
#line 2601 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, 0);
                      (yyval.nd) = list3(0, (node*)-1, 0);
                    ;}
    break;

  case 345:
#line 2606 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, 0);
                    ;}
    break;

  case 346:
#line 2610 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list3(0, (node*)-1, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 347:
#line 2616 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 348:
#line 2620 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, (yyvsp[(1) - (2)].nd), 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 349:
#line 2624 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, 0, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 350:
#line 2628 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, 0, 0, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 351:
#line 2634 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 352:
#line 2638 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, 0, 0, 0);
                    ;}
    break;

  case 353:
#line 2644 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 354:
#line 2648 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (8)].nd), (yyvsp[(3) - (8)].nd), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].nd), (yyvsp[(8) - (8)].nd));
                    ;}
    break;

  case 355:
#line 2652 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd), 0, 0, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 356:
#line 2656 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), 0, (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 357:
#line 2660 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 358:
#line 2664 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (3)].nd), 0, 0, 0, (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 359:
#line 2668 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 360:
#line 2672 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (2)].nd), 0, 0, 0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 361:
#line 2676 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 362:
#line 2680 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 363:
#line 2684 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (2)].nd), 0, 0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 364:
#line 2688 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 365:
#line 2692 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 366:
#line 2696 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 367:
#line 2700 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, 0, 0, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 368:
#line 2706 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_blk(p, 0);
                      (yyval.nd) = 0;
                    ;}
    break;

  case 369:
#line 2711 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->cmd_start = TRUE;
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 370:
#line 2717 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {local_add_blk(p, 0);;}
    break;

  case 371:
#line 2718 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 372:
#line 2722 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_blk(p, 0);
                      (yyval.nd) = 0;
                    ;}
    break;

  case 373:
#line 2727 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (4)].nd);
                    ;}
    break;

  case 374:
#line 2734 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 375:
#line 2738 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 378:
#line 2748 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, (yyvsp[(1) - (1)].id));
                      new_bv(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 380:
#line 2756 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (4)].nd);
                    ;}
    break;

  case 381:
#line 2760 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                    ;}
    break;

  case 382:
#line 2766 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 383:
#line 2770 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                    ;}
    break;

  case 384:
#line 2776 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_nest(p);
                    ;}
    break;

  case 385:
#line 2782 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_block(p,(yyvsp[(3) - (5)].nd),(yyvsp[(4) - (5)].nd));
                      local_unnest(p);
                    ;}
    break;

  case 386:
#line 2789 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if ((yyvsp[(1) - (2)].nd)->car == (node*)NODE_YIELD) {
                        yyerror(p, "block given to yield");
                      }
                      else {
                        call_with_block(p, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                      }
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 387:
#line 2799 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd), (yyvsp[(2) - (4)].num));
                    ;}
    break;

  case 388:
#line 2803 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd), (yyvsp[(2) - (5)].num));
                      call_with_block(p, (yyval.nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 389:
#line 2808 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (5)].nd), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].nd), (yyvsp[(2) - (5)].num));
                      call_with_block(p, (yyval.nd), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 390:
#line 2815 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_fcall(p, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 391:
#line 2819 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd), (yyvsp[(2) - (4)].num));
                    ;}
    break;

  case 392:
#line 2823 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].nd), tCOLON2);
                    ;}
    break;

  case 393:
#line 2827 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].id), 0, tCOLON2);
                    ;}
    break;

  case 394:
#line 2831 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), intern("call",4), (yyvsp[(3) - (3)].nd), (yyvsp[(2) - (3)].num));
                    ;}
    break;

  case 395:
#line 2835 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (3)].nd), intern("call",4), (yyvsp[(3) - (3)].nd), tCOLON2);
                    ;}
    break;

  case 396:
#line 2839 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_super(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 397:
#line 2843 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_zsuper(p);
                    ;}
    break;

  case 398:
#line 2847 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_call(p, (yyvsp[(1) - (4)].nd), intern("[]",2), (yyvsp[(3) - (4)].nd), '.');
                    ;}
    break;

  case 399:
#line 2853 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_nest(p);
                      (yyval.num) = p->lineno;
                    ;}
    break;

  case 400:
#line 2859 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_block(p,(yyvsp[(3) - (5)].nd),(yyvsp[(4) - (5)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(2) - (5)].num));
                      local_unnest(p);
                    ;}
    break;

  case 401:
#line 2865 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_nest(p);
                      (yyval.num) = p->lineno;
                    ;}
    break;

  case 402:
#line 2871 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_block(p,(yyvsp[(3) - (5)].nd),(yyvsp[(4) - (5)].nd));
                      SET_LINENO((yyval.nd), (yyvsp[(2) - (5)].num));
                      local_unnest(p);
                    ;}
    break;

  case 403:
#line 2881 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons(cons((yyvsp[(2) - (5)].nd), (yyvsp[(4) - (5)].nd)), (yyvsp[(5) - (5)].nd));
                    ;}
    break;

  case 404:
#line 2887 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if ((yyvsp[(1) - (1)].nd)) {
                        (yyval.nd) = cons(cons(0, (yyvsp[(1) - (1)].nd)), 0);
                      }
                      else {
                        (yyval.nd) = 0;
                      }
                    ;}
    break;

  case 406:
#line 2901 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1(list3((yyvsp[(2) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].nd)));
                      if ((yyvsp[(6) - (6)].nd)) (yyval.nd) = append((yyval.nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 408:
#line 2909 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                        (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 411:
#line 2917 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 413:
#line 2924 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 420:
#line 2938 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = concat_string(p, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 423:
#line 2946 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 424:
#line 2950 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_dstr(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 426:
#line 2957 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = append((yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 427:
#line 2963 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 428:
#line 2967 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = p->lex_strterm;
                      p->lex_strterm = NULL;
                    ;}
    break;

  case 429:
#line 2973 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lex_strterm = (yyvsp[(2) - (4)].nd);
                      (yyval.nd) = list2((yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 430:
#line 2978 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1(new_literal_delim(p));
                    ;}
    break;

  case 431:
#line 2982 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1(new_literal_delim(p));
                    ;}
    break;

  case 432:
#line 2988 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                        (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 433:
#line 2992 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_dxstr(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 434:
#line 2998 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                        (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 435:
#line 3002 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_dregx(p, (yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 439:
#line 3015 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      parser_heredoc_info * inf = parsing_heredoc_inf(p);
                      inf->doc = push(inf->doc, new_str(p, "", 0));
                      heredoc_end(p);
                    ;}
    break;

  case 440:
#line 3021 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      heredoc_end(p);
                    ;}
    break;

  case 443:
#line 3031 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      parser_heredoc_info * inf = parsing_heredoc_inf(p);
                      inf->doc = push(inf->doc, (yyvsp[(1) - (1)].nd));
                      heredoc_treat_nextline(p);
                    ;}
    break;

  case 444:
#line 3037 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = p->lex_strterm;
                      p->lex_strterm = NULL;
                    ;}
    break;

  case 445:
#line 3043 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      parser_heredoc_info * inf = parsing_heredoc_inf(p);
                      p->lex_strterm = (yyvsp[(2) - (4)].nd);
                      inf->doc = push(push(inf->doc, (yyvsp[(1) - (4)].nd)), (yyvsp[(3) - (4)].nd));
                    ;}
    break;

  case 446:
#line 3051 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_words(p, list1((yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 447:
#line 3055 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_words(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 448:
#line 3062 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_ENDARG;
                      (yyval.nd) = new_sym(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 449:
#line 3067 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_ENDARG;
                      (yyval.nd) = new_dsym(p, new_dstr(p, push((yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd))));
                    ;}
    break;

  case 450:
#line 3074 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 455:
#line 3084 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = new_strsym(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 456:
#line 3088 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = new_strsym(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 457:
#line 3094 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_symbols(p, list1((yyvsp[(2) - (2)].nd)));
                    ;}
    break;

  case 458:
#line 3098 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_symbols(p, push((yyvsp[(2) - (3)].nd), (yyvsp[(3) - (3)].nd)));
                    ;}
    break;

  case 461:
#line 3106 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = negate_lit(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 462:
#line 3110 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = negate_lit(p, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 463:
#line 3116 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_lvar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 464:
#line 3120 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_ivar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 465:
#line 3124 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_gvar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 466:
#line 3128 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_cvar(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 467:
#line 3132 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_const(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 468:
#line 3138 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      assignable(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 469:
#line 3144 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = var_reference(p, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 470:
#line 3148 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 471:
#line 3152 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_self(p);
                    ;}
    break;

  case 472:
#line 3156 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_true(p);
                    ;}
    break;

  case 473:
#line 3160 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_false(p);
                    ;}
    break;

  case 474:
#line 3164 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      const char *fn = mrb_sym2name_len(p->mrb, p->filename_sym, NULL);
                      if (!fn) {
                        fn = "(null)";
                      }
                      (yyval.nd) = new_str(p, fn, strlen(fn));
                    ;}
    break;

  case 475:
#line 3172 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      char buf[16];

                      snprintf(buf, sizeof(buf), "%d", p->lineno);
                      (yyval.nd) = new_int(p, buf, 10);
                    ;}
    break;

  case 476:
#line 3179 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
#ifdef MRB_UTF8_STRING
                      const char *enc = "UTF-8";
#else
                      const char *enc = "ASCII-8BIT";
#endif
                      (yyval.nd) = new_str(p, enc, strlen(enc));
                    ;}
    break;

  case 479:
#line 3194 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;

  case 480:
#line 3198 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lstate = EXPR_BEG;
                      p->cmd_start = TRUE;
                    ;}
    break;

  case 481:
#line 3203 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(3) - (4)].nd);
                    ;}
    break;

  case 482:
#line 3214 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (3)].nd);
                      p->lstate = EXPR_BEG;
                      p->cmd_start = TRUE;
                    ;}
    break;

  case 483:
#line 3220 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 485:
#line 3229 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = new_kw_arg(p, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 486:
#line 3234 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_kw_arg(p, (yyvsp[(1) - (1)].id), 0);
                    ;}
    break;

  case 487:
#line 3240 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_kw_arg(p, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 488:
#line 3244 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_kw_arg(p, (yyvsp[(1) - (1)].id), 0);
                    ;}
    break;

  case 489:
#line 3250 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 490:
#line 3254 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 491:
#line 3260 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 492:
#line 3264 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 495:
#line 3274 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons((node*)NODE_KW_REST_ARGS, nsym((yyvsp[(2) - (2)].id)));
                    ;}
    break;

  case 496:
#line 3278 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = cons((node*)NODE_KW_REST_ARGS, 0);
                    ;}
    break;

  case 497:
#line 3284 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].id));
                    ;}
    break;

  case 498:
#line 3288 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, (yyvsp[(1) - (2)].nd), 0, (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 499:
#line 3292 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, 0, (yyvsp[(1) - (2)].nd), (yyvsp[(2) - (2)].id));
                    ;}
    break;

  case 500:
#line 3296 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, 0, 0, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 501:
#line 3302 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(2) - (2)].nd);
                    ;}
    break;

  case 502:
#line 3306 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args_tail(p, 0, 0, 0);
                    ;}
    break;

  case 503:
#line 3312 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 504:
#line 3316 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (8)].nd), (yyvsp[(3) - (8)].nd), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].nd), (yyvsp[(8) - (8)].nd));
                    ;}
    break;

  case 505:
#line 3320 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].nd), 0, 0, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 506:
#line 3324 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].nd), 0, (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 507:
#line 3328 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 508:
#line 3332 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (6)].nd), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 509:
#line 3336 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, (yyvsp[(1) - (2)].nd), 0, 0, 0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 510:
#line 3340 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 511:
#line 3344 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (6)].nd), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].nd), (yyvsp[(6) - (6)].nd));
                    ;}
    break;

  case 512:
#line 3348 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (2)].nd), 0, 0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 513:
#line 3352 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, (yyvsp[(1) - (4)].nd), 0, (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 514:
#line 3356 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 515:
#line 3360 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].nd), (yyvsp[(4) - (4)].nd));
                    ;}
    break;

  case 516:
#line 3364 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_args(p, 0, 0, 0, 0, (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 517:
#line 3368 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, mrb_intern_lit(p->mrb, "&"));
                      (yyval.nd) = new_args(p, 0, 0, 0, 0, 0);
                    ;}
    break;

  case 518:
#line 3375 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "formal argument cannot be a constant");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 519:
#line 3380 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "formal argument cannot be an instance variable");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 520:
#line 3385 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "formal argument cannot be a global variable");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 521:
#line 3390 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      yyerror(p, "formal argument cannot be a class variable");
                      (yyval.nd) = 0;
                    ;}
    break;

  case 522:
#line 3397 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = 0;
                    ;}
    break;

  case 523:
#line 3401 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, (yyvsp[(1) - (1)].id));
                      (yyval.id) = (yyvsp[(1) - (1)].id);
                    ;}
    break;

  case 524:
#line 3408 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_arg(p, (yyvsp[(1) - (1)].id));
                    ;}
    break;

  case 525:
#line 3412 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = local_switch(p);
                    ;}
    break;

  case 526:
#line 3416 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = new_masgn_param(p, (yyvsp[(3) - (4)].nd), p->locals->car);
                      local_resume(p, (yyvsp[(2) - (4)].nd));
                      local_add_f(p, 0);
                    ;}
    break;

  case 527:
#line 3424 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 528:
#line 3428 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 529:
#line 3434 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, (yyvsp[(1) - (2)].id));
                      (yyval.id) = (yyvsp[(1) - (2)].id);
                    ;}
    break;

  case 530:
#line 3441 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = cons(nsym((yyvsp[(1) - (2)].id)), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 531:
#line 3448 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = cons(nsym((yyvsp[(1) - (2)].id)), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 532:
#line 3455 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 533:
#line 3459 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 534:
#line 3465 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 535:
#line 3469 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 538:
#line 3479 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, (yyvsp[(2) - (2)].id));
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 539:
#line 3484 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      local_add_f(p, mrb_intern_lit(p->mrb, "*"));
                      (yyval.id) = -1;
                    ;}
    break;

  case 542:
#line 3495 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 543:
#line 3501 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = (yyvsp[(2) - (2)].id);
                    ;}
    break;

  case 544:
#line 3505 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.id) = 0;
                    ;}
    break;

  case 545:
#line 3511 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (1)].nd);
                      if (!(yyval.nd)) (yyval.nd) = new_nil(p);
                    ;}
    break;

  case 546:
#line 3515 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {p->lstate = EXPR_BEG;;}
    break;

  case 547:
#line 3516 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      if ((yyvsp[(3) - (4)].nd) == 0) {
                        yyerror(p, "can't define singleton method for ().");
                      }
                      else {
                        switch ((enum node_type)intn((yyvsp[(3) - (4)].nd)->car)) {
                        case NODE_STR:
                        case NODE_DSTR:
                        case NODE_XSTR:
                        case NODE_DXSTR:
                        case NODE_DREGX:
                        case NODE_MATCH:
                        case NODE_FLOAT:
                        case NODE_ARRAY:
                        case NODE_HEREDOC:
                          yyerror(p, "can't define singleton method for literals");
                        default:
                          break;
                        }
                      }
                      (yyval.nd) = (yyvsp[(3) - (4)].nd);
                    ;}
    break;

  case 549:
#line 3542 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = (yyvsp[(1) - (2)].nd);
                    ;}
    break;

  case 550:
#line 3548 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = list1((yyvsp[(1) - (1)].nd));
                      NODE_LINENO((yyval.nd), (yyvsp[(1) - (1)].nd));
                    ;}
    break;

  case 551:
#line 3553 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = push((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 552:
#line 3559 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(1) - (3)].nd));
                      void_expr_error(p, (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = cons((yyvsp[(1) - (3)].nd), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 553:
#line 3565 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(3) - (3)].nd));
                      (yyval.nd) = cons(new_sym(p, (yyvsp[(1) - (3)].id)), (yyvsp[(3) - (3)].nd));
                    ;}
    break;

  case 554:
#line 3570 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(3) - (3)].nd));
                      if ((yyvsp[(1) - (3)].nd)->car == (node*)NODE_DSTR) {
                        (yyval.nd) = cons(new_dsym(p, (yyvsp[(1) - (3)].nd)), (yyvsp[(3) - (3)].nd));
                      }
                      else {
                        (yyval.nd) = cons(new_sym(p, new_strsym(p, (yyvsp[(1) - (3)].nd))), (yyvsp[(3) - (3)].nd));
                      }
                    ;}
    break;

  case 555:
#line 3580 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      void_expr_error(p, (yyvsp[(2) - (2)].nd));
                      (yyval.nd) = cons(cons((node*)NODE_KW_REST_ARGS, 0), (yyvsp[(2) - (2)].nd));
                    ;}
    break;

  case 568:
#line 3607 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.num) = '.';
                    ;}
    break;

  case 569:
#line 3611 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.num) = 0;
                    ;}
    break;

  case 571:
#line 3618 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.num) = tCOLON2;
                    ;}
    break;

  case 581:
#line 3642 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {yyerrok;;}
    break;

  case 584:
#line 3648 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      p->lineno++;
                      p->column = 0;
                    ;}
    break;

  case 587:
#line 3659 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"
    {
                      (yyval.nd) = 0;
                    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9131 "/Users/yume/Desktop/MRuby2/mruby/build/host/mrbgems/mruby-compiler/core/y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (p, yymsg);
	  }
	else
	  {
	    yyerror (p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3663 "/Users/yume/Desktop/MRuby2/mruby/mrbgems/mruby-compiler/core/parse.y"

#define pylval  (*((YYSTYPE*)(p->ylval)))

static void
yyerror(parser_state *p, const char *s)
{
  char* c;
  size_t n;

  if (! p->capture_errors) {
#ifndef MRB_DISABLE_STDIO
    if (p->filename_sym) {
      const char *filename = mrb_sym2name_len(p->mrb, p->filename_sym, NULL);
      fprintf(stderr, "%s:%d:%d: %s\n", filename, p->lineno, p->column, s);
    }
    else {
      fprintf(stderr, "line %d:%d: %s\n", p->lineno, p->column, s);
    }
#endif
  }
  else if (p->nerr < sizeof(p->error_buffer) / sizeof(p->error_buffer[0])) {
    n = strlen(s);
    c = (char *)parser_palloc(p, n + 1);
    memcpy(c, s, n + 1);
    p->error_buffer[p->nerr].message = c;
    p->error_buffer[p->nerr].lineno = p->lineno;
    p->error_buffer[p->nerr].column = p->column;
  }
  p->nerr++;
}

static void
yyerror_i(parser_state *p, const char *fmt, int i)
{
  char buf[256];

  snprintf(buf, sizeof(buf), fmt, i);
  yyerror(p, buf);
}

static void
yywarn(parser_state *p, const char *s)
{
  char* c;
  size_t n;

  if (! p->capture_errors) {
#ifndef MRB_DISABLE_STDIO
    if (p->filename_sym) {
      const char *filename = mrb_sym2name_len(p->mrb, p->filename_sym, NULL);
      fprintf(stderr, "%s:%d:%d: warning: %s\n", filename, p->lineno, p->column, s);
    }
    else {
      fprintf(stderr, "line %d:%d: warning: %s\n", p->lineno, p->column, s);
    }
#endif
  }
  else if (p->nwarn < sizeof(p->warn_buffer) / sizeof(p->warn_buffer[0])) {
    n = strlen(s);
    c = (char *)parser_palloc(p, n + 1);
    memcpy(c, s, n + 1);
    p->warn_buffer[p->nwarn].message = c;
    p->warn_buffer[p->nwarn].lineno = p->lineno;
    p->warn_buffer[p->nwarn].column = p->column;
  }
  p->nwarn++;
}

static void
yywarning(parser_state *p, const char *s)
{
  yywarn(p, s);
}

static void
yywarning_s(parser_state *p, const char *fmt, const char *s)
{
  char buf[256];

  snprintf(buf, sizeof(buf), fmt, s);
  yywarning(p, buf);
}

static void
backref_error(parser_state *p, node *n)
{
  int c;

  c = intn(n->car);

  if (c == NODE_NTH_REF) {
    yyerror_i(p, "can't set variable $%" MRB_PRId, intn(n->cdr));
  }
  else if (c == NODE_BACK_REF) {
    yyerror_i(p, "can't set variable $%c", intn(n->cdr));
  }
  else {
    mrb_bug(p->mrb, "Internal error in backref_error() : n=>car == %S", mrb_fixnum_value(c));
  }
}

static void
void_expr_error(parser_state *p, node *n)
{
  int c;

  if (n == NULL) return;
  c = intn(n->car);
  switch (c) {
  case NODE_BREAK:
  case NODE_RETURN:
  case NODE_NEXT:
  case NODE_REDO:
  case NODE_RETRY:
    yyerror(p, "void value expression");
    break;
  case NODE_AND:
  case NODE_OR:
    if (n->cdr) {
      void_expr_error(p, n->cdr->car);
      void_expr_error(p, n->cdr->cdr);
    }
    break;
  case NODE_BEGIN:
    if (n->cdr) {
      while (n->cdr) {
        n = n->cdr;
      }
      void_expr_error(p, n->car);
    }
    break;
  default:
    break;
  }
}

static void pushback(parser_state *p, int c);
static mrb_bool peeks(parser_state *p, const char *s);
static mrb_bool skips(parser_state *p, const char *s);

static inline int
nextc(parser_state *p)
{
  int c;

  if (p->pb) {
    node *tmp;

    c = intn(p->pb->car);
    tmp = p->pb;
    p->pb = p->pb->cdr;
    cons_free(tmp);
  }
  else {
#ifndef MRB_DISABLE_STDIO
    if (p->f) {
      if (feof(p->f)) goto eof;
      c = fgetc(p->f);
      if (c == EOF) goto eof;
    }
    else
#endif
      if (!p->s || p->s >= p->send) {
        goto eof;
      }
      else {
        c = (unsigned char)*p->s++;
      }
  }
  if (c >= 0) {
    p->column++;
  }
  return c;

  eof:
  if (!p->cxt) return -1;
  else {
    if (p->cxt->partial_hook(p) < 0)
      return -1;                /* end of program(s) */
    return -2;                  /* end of a file in the program files */
  }
}

static void
pushback(parser_state *p, int c)
{
  if (c >= 0) {
    p->column--;
  }
  p->pb = cons(nint(c), p->pb);
}

static void
skip(parser_state *p, char term)
{
  int c;

  for (;;) {
    c = nextc(p);
    if (c < 0) break;
    if (c == term) break;
  }
}

static int
peekc_n(parser_state *p, int n)
{
  node *list = 0;
  int c0;

  do {
    c0 = nextc(p);
    if (c0 == -1) return c0;    /* do not skip partial EOF */
    if (c0 >= 0) --p->column;
    list = push(list, nint(c0));
  } while(n--);
  if (p->pb) {
    p->pb = append((node*)list, p->pb);
  }
  else {
    p->pb = list;
  }
  return c0;
}

static mrb_bool
peek_n(parser_state *p, int c, int n)
{
  return peekc_n(p, n) == c && c >= 0;
}
#define peek(p,c) peek_n((p), (c), 0)

static mrb_bool
peeks(parser_state *p, const char *s)
{
  size_t len = strlen(s);

#ifndef MRB_DISABLE_STDIO
  if (p->f) {
    int n = 0;
    while (*s) {
      if (!peek_n(p, *s++, n++)) return FALSE;
    }
    return TRUE;
  }
  else
#endif
    if (p->s && p->s + len <= p->send) {
      if (memcmp(p->s, s, len) == 0) return TRUE;
    }
  return FALSE;
}

static mrb_bool
skips(parser_state *p, const char *s)
{
  int c;

  for (;;) {
    /* skip until first char */
    for (;;) {
      c = nextc(p);
      if (c < 0) return FALSE;
      if (c == '\n') {
        p->lineno++;
        p->column = 0;
      }
      if (c == *s) break;
    }
    s++;
    if (peeks(p, s)) {
      size_t len = strlen(s);

      while (len--) {
        if (nextc(p) == '\n') {
          p->lineno++;
          p->column = 0;
        }
      }
      return TRUE;
    }
    else{
      s--;
    }
  }
  return FALSE;
}


static int
newtok(parser_state *p)
{
  if (p->tokbuf != p->buf) {
    mrb_free(p->mrb, p->tokbuf);
    p->tokbuf = p->buf;
    p->tsiz = MRB_PARSER_TOKBUF_SIZE;
  }
  p->tidx = 0;
  return p->column - 1;
}

static void
tokadd(parser_state *p, int32_t c)
{
  char utf8[4];
  int i, len;

  /* mrb_assert(-0x10FFFF <= c && c <= 0xFF); */
  if (c >= 0) {
    /* Single byte from source or non-Unicode escape */
    utf8[0] = (char)c;
    len = 1;
  }
  else {
    /* Unicode character */
    c = -c;
    if (c < 0x80) {
      utf8[0] = (char)c;
      len = 1;
    }
    else if (c < 0x800) {
      utf8[0] = (char)(0xC0 | (c >> 6));
      utf8[1] = (char)(0x80 | (c & 0x3F));
      len = 2;
    }
    else if (c < 0x10000) {
      utf8[0] = (char)(0xE0 |  (c >> 12)        );
      utf8[1] = (char)(0x80 | ((c >>  6) & 0x3F));
      utf8[2] = (char)(0x80 | ( c        & 0x3F));
      len = 3;
    }
    else {
      utf8[0] = (char)(0xF0 |  (c >> 18)        );
      utf8[1] = (char)(0x80 | ((c >> 12) & 0x3F));
      utf8[2] = (char)(0x80 | ((c >>  6) & 0x3F));
      utf8[3] = (char)(0x80 | ( c        & 0x3F));
      len = 4;
    }
  }
  if (p->tidx+len >= p->tsiz) {
    if (p->tsiz >= MRB_PARSER_TOKBUF_MAX) {
      p->tidx += len;
      return;
    }
    p->tsiz *= 2;
    if (p->tokbuf == p->buf) {
      p->tokbuf = (char*)mrb_malloc(p->mrb, p->tsiz);
      memcpy(p->tokbuf, p->buf, MRB_PARSER_TOKBUF_SIZE);
    }
    else {
      p->tokbuf = (char*)mrb_realloc(p->mrb, p->tokbuf, p->tsiz);
    }
  }
  for (i = 0; i < len; i++) {
    p->tokbuf[p->tidx++] = utf8[i];
  }
}

static int
toklast(parser_state *p)
{
  return p->tokbuf[p->tidx-1];
}

static void
tokfix(parser_state *p)
{
  if (p->tidx >= MRB_PARSER_TOKBUF_MAX) {
    p->tidx = MRB_PARSER_TOKBUF_MAX-1;
    yyerror(p, "string too long (truncated)");
  }
  p->tokbuf[p->tidx] = '\0';
}

static const char*
tok(parser_state *p)
{
  return p->tokbuf;
}

static int
toklen(parser_state *p)
{
  return p->tidx;
}

#define IS_ARG() (p->lstate == EXPR_ARG || p->lstate == EXPR_CMDARG)
#define IS_END() (p->lstate == EXPR_END || p->lstate == EXPR_ENDARG || p->lstate == EXPR_ENDFN)
#define IS_BEG() (p->lstate == EXPR_BEG || p->lstate == EXPR_MID || p->lstate == EXPR_VALUE || p->lstate == EXPR_CLASS)
#define IS_SPCARG(c) (IS_ARG() && space_seen && !ISSPACE(c))
#define IS_LABEL_POSSIBLE() ((p->lstate == EXPR_BEG && !cmd_state) || IS_ARG())
#define IS_LABEL_SUFFIX(n) (peek_n(p, ':',(n)) && !peek_n(p, ':', (n)+1))

static int32_t
scan_oct(const int *start, int len, int *retlen)
{
  const int *s = start;
  int32_t retval = 0;

  /* mrb_assert(len <= 3) */
  while (len-- && *s >= '0' && *s <= '7') {
    retval <<= 3;
    retval |= *s++ - '0';
  }
  *retlen = (int)(s - start);

  return retval;
}

static int32_t
scan_hex(parser_state *p, const int *start, int len, int *retlen)
{
  static const char hexdigit[] = "0123456789abcdef0123456789ABCDEF";
  const int *s = start;
  uint32_t retval = 0;
  char *tmp;

  /* mrb_assert(len <= 8) */
  while (len-- && *s && (tmp = (char*)strchr(hexdigit, *s))) {
    retval <<= 4;
    retval |= (tmp - hexdigit) & 15;
    s++;
  }
  *retlen = (int)(s - start);

  return (int32_t)retval;
}

static int32_t
read_escape_unicode(parser_state *p, int limit)
{
  int buf[9];
  int i;
  int32_t hex;

  /* Look for opening brace */
  i = 0;
  buf[0] = nextc(p);
  if (buf[0] < 0) {
  eof:
    yyerror(p, "invalid escape character syntax");
    return -1;
  }
  if (ISXDIGIT(buf[0])) {
    /* \uxxxx form */
    for (i=1; i<limit; i++) {
      buf[i] = nextc(p);
      if (buf[i] < 0) goto eof;
      if (!ISXDIGIT(buf[i])) {
        pushback(p, buf[i]);
        break;
      }
    }
  }
  else {
    pushback(p, buf[0]);
  }
  hex = scan_hex(p, buf, i, &i);
  if (i == 0 || hex > 0x10FFFF || (hex & 0xFFFFF800) == 0xD800) {
    yyerror(p, "invalid Unicode code point");
    return -1;
  }
  return hex;
}

/* Return negative to indicate Unicode code point */
static int32_t
read_escape(parser_state *p)
{
  int32_t c;

  switch (c = nextc(p)) {
  case '\\':/* Backslash */
    return c;

  case 'n':/* newline */
    return '\n';

  case 't':/* horizontal tab */
    return '\t';

  case 'r':/* carriage-return */
    return '\r';

  case 'f':/* form-feed */
    return '\f';

  case 'v':/* vertical tab */
    return '\13';

  case 'a':/* alarm(bell) */
    return '\007';

  case 'e':/* escape */
    return 033;

  case '0': case '1': case '2': case '3': /* octal constant */
  case '4': case '5': case '6': case '7':
  {
    int buf[3];
    int i;

    buf[0] = c;
    for (i=1; i<3; i++) {
      buf[i] = nextc(p);
      if (buf[i] < 0) goto eof;
      if (buf[i] < '0' || '7' < buf[i]) {
        pushback(p, buf[i]);
        break;
      }
    }
    c = scan_oct(buf, i, &i);
  }
  return c;

  case 'x':     /* hex constant */
  {
    int buf[2];
    int i;

    for (i=0; i<2; i++) {
      buf[i] = nextc(p);
      if (buf[i] < 0) goto eof;
      if (!ISXDIGIT(buf[i])) {
        pushback(p, buf[i]);
        break;
      }
    }
    if (i == 0) {
      yyerror(p, "invalid hex escape");
      return -1;
    }
    return scan_hex(p, buf, i, &i);
  }

  case 'u':     /* Unicode */
    if (peek(p, '{')) {
      /* \u{xxxxxxxx} form */
      nextc(p);
      c = read_escape_unicode(p, 8);
      if (c < 0) return 0;
      if (nextc(p) != '}') goto eof;
    }
    else {
      c = read_escape_unicode(p, 4);
      if (c < 0) return 0;
    }
  return -c;

  case 'b':/* backspace */
    return '\010';

  case 's':/* space */
    return ' ';

  case 'M':
    if ((c = nextc(p)) != '-') {
      yyerror(p, "Invalid escape character syntax");
      pushback(p, c);
      return '\0';
    }
    if ((c = nextc(p)) == '\\') {
      return read_escape(p) | 0x80;
    }
    else if (c < 0) goto eof;
    else {
      return ((c & 0xff) | 0x80);
    }

  case 'C':
    if ((c = nextc(p)) != '-') {
      yyerror(p, "Invalid escape character syntax");
      pushback(p, c);
      return '\0';
    }
  case 'c':
    if ((c = nextc(p))== '\\') {
      c = read_escape(p);
    }
    else if (c == '?')
      return 0177;
    else if (c < 0) goto eof;
    return c & 0x9f;

    eof:
  case -1:
  case -2:                      /* end of a file */
    yyerror(p, "Invalid escape character syntax");
    return '\0';

  default:
    return c;
  }
}

static int
parse_string(parser_state *p)
{
  int c;
  string_type type = (string_type)(intptr_t)p->lex_strterm->car;
  int nest_level = intn(p->lex_strterm->cdr->car);
  int beg = intn(p->lex_strterm->cdr->cdr->car);
  int end = intn(p->lex_strterm->cdr->cdr->cdr);
  parser_heredoc_info *hinf = (type & STR_FUNC_HEREDOC) ? parsing_heredoc_inf(p) : NULL;

  if (beg == 0) beg = -3;       /* should never happen */
  if (end == 0) end = -3;
  newtok(p);
  while ((c = nextc(p)) != end || nest_level != 0) {
    if (hinf && (c == '\n' || c < 0)) {
      mrb_bool line_head;
      tokadd(p, '\n');
      tokfix(p);
      p->lineno++;
      p->column = 0;
      line_head = hinf->line_head;
      hinf->line_head = TRUE;
      if (line_head) {
        /* check whether end of heredoc */
        const char *s = tok(p);
        int len = toklen(p);
        if (hinf->allow_indent) {
          while (ISSPACE(*s) && len > 0) {
            ++s;
            --len;
          }
        }
        if ((len-1 == hinf->term_len) && (strncmp(s, hinf->term, len-1) == 0)) {
          if (c < 0) {
            p->parsing_heredoc = NULL;
          }
          else {
            return tHEREDOC_END;
          }
        }
      }
      if (c < 0) {
        char buf[256];
        snprintf(buf, sizeof(buf), "can't find heredoc delimiter \"%s\" anywhere before EOF", hinf->term);
        yyerror(p, buf);
        return 0;
      }
      pylval.nd = new_str(p, tok(p), toklen(p));
      return tHD_STRING_MID;
    }
    if (c < 0) {
      yyerror(p, "unterminated string meets end of file");
      return 0;
    }
    else if (c == beg) {
      nest_level++;
      p->lex_strterm->cdr->car = nint(nest_level);
    }
    else if (c == end) {
      nest_level--;
      p->lex_strterm->cdr->car = nint(nest_level);
    }
    else if (c == '\\') {
      c = nextc(p);
      if (type & STR_FUNC_EXPAND) {
        if (c == end || c == beg) {
          tokadd(p, c);
        }
        else if (c == '\n') {
          p->lineno++;
          p->column = 0;
          if (type & STR_FUNC_ARRAY) {
            tokadd(p, '\n');
          }
        }
        else if (type & STR_FUNC_REGEXP) {
          tokadd(p, '\\');
          tokadd(p, c);
        }
        else if (c == 'u' && peek(p, '{')) {
          /* \u{xxxx xxxx xxxx} form */
          nextc(p);
          while (1) {
            do c = nextc(p); while (ISSPACE(c));
            if (c == '}') break;
            pushback(p, c);
            c = read_escape_unicode(p, 8);
            if (c < 0) break;
            tokadd(p, -c);
          }
          if (hinf)
            hinf->line_head = FALSE;
        }
        else {
          pushback(p, c);
          tokadd(p, read_escape(p));
          if (hinf)
            hinf->line_head = FALSE;
        }
      }
      else {
        if (c != beg && c != end) {
          if (c == '\n') {
            p->lineno++;
            p->column = 0;
          }
          if (!(c == '\\' || ((type & STR_FUNC_ARRAY) && ISSPACE(c)))) {
            tokadd(p, '\\');
          }
        }
        tokadd(p, c);
      }
      continue;
    }
    else if ((c == '#') && (type & STR_FUNC_EXPAND)) {
      c = nextc(p);
      if (c == '{') {
        tokfix(p);
        p->lstate = EXPR_BEG;
        p->cmd_start = TRUE;
        pylval.nd = new_str(p, tok(p), toklen(p));
        if (hinf) {
          hinf->line_head = FALSE;
          return tHD_STRING_PART;
        }
        return tSTRING_PART;
      }
      tokadd(p, '#');
      pushback(p, c);
      continue;
    }
    if ((type & STR_FUNC_ARRAY) && ISSPACE(c)) {
      if (toklen(p) == 0) {
        do {
          if (c == '\n') {
            p->lineno++;
            p->column = 0;
            heredoc_treat_nextline(p);
            if (p->parsing_heredoc != NULL) {
              return tHD_LITERAL_DELIM;
            }
          }
          c = nextc(p);
        } while (ISSPACE(c));
        pushback(p, c);
        return tLITERAL_DELIM;
      }
      else {
        pushback(p, c);
        tokfix(p);
        pylval.nd = new_str(p, tok(p), toklen(p));
        return tSTRING_MID;
      }
    }
    if (c == '\n') {
      p->lineno++;
      p->column = 0;
    }
    tokadd(p, c);
  }

  tokfix(p);
  p->lstate = EXPR_ENDARG;
  end_strterm(p);

  if (type & STR_FUNC_XQUOTE) {
    pylval.nd = new_xstr(p, tok(p), toklen(p));
    return tXSTRING;
  }

  if (type & STR_FUNC_REGEXP) {
    int f = 0;
    int re_opt;
    char *s = strndup(tok(p), toklen(p));
    char flags[3];
    char *flag = flags;
    char enc = '\0';
    char *encp;
    char *dup;

    newtok(p);
    while (re_opt = nextc(p), re_opt >= 0 && ISALPHA(re_opt)) {
      switch (re_opt) {
      case 'i': f |= 1; break;
      case 'x': f |= 2; break;
      case 'm': f |= 4; break;
      case 'u': f |= 16; break;
      case 'n': f |= 32; break;
      default: tokadd(p, re_opt); break;
      }
    }
    pushback(p, re_opt);
    if (toklen(p)) {
      char msg[128];
      tokfix(p);
      snprintf(msg, sizeof(msg), "unknown regexp option%s - %s",
          toklen(p) > 1 ? "s" : "", tok(p));
      yyerror(p, msg);
    }
    if (f != 0) {
      if (f & 1) *flag++ = 'i';
      if (f & 2) *flag++ = 'x';
      if (f & 4) *flag++ = 'm';
      if (f & 16) enc = 'u';
      if (f & 32) enc = 'n';
    }
    if (flag > flags) {
      dup = strndup(flags, (size_t)(flag - flags));
    }
    else {
      dup = NULL;
    }
    if (enc) {
      encp = strndup(&enc, 1);
    }
    else {
      encp = NULL;
    }
    pylval.nd = new_regx(p, s, dup, encp);

    return tREGEXP;
  }
  pylval.nd = new_str(p, tok(p), toklen(p));

  return tSTRING;
}


static int
heredoc_identifier(parser_state *p)
{
  int c;
  int type = str_heredoc;
  mrb_bool indent = FALSE;
  mrb_bool quote = FALSE;
  node *newnode;
  parser_heredoc_info *info;

  c = nextc(p);
  if (ISSPACE(c) || c == '=') {
    pushback(p, c);
    return 0;
  }
  if (c == '-') {
    indent = TRUE;
    c = nextc(p);
  }
  if (c == '\'' || c == '"') {
    int term = c;
    if (c == '\'')
      quote = TRUE;
    newtok(p);
    while ((c = nextc(p)) >= 0 && c != term) {
      if (c == '\n') {
        c = -1;
        break;
      }
      tokadd(p, c);
    }
    if (c < 0) {
      yyerror(p, "unterminated here document identifier");
      return 0;
    }
  }
  else {
    if (c < 0) {
      return 0;                 /* missing here document identifier */
    }
    if (! identchar(c)) {
      pushback(p, c);
      if (indent) pushback(p, '-');
      return 0;
    }
    newtok(p);
    do {
      tokadd(p, c);
    } while ((c = nextc(p)) >= 0 && identchar(c));
    pushback(p, c);
  }
  tokfix(p);
  newnode = new_heredoc(p);
  info = (parser_heredoc_info*)newnode->cdr;
  info->term = strndup(tok(p), toklen(p));
  info->term_len = toklen(p);
  if (! quote)
    type |= STR_FUNC_EXPAND;
  info->type = (string_type)type;
  info->allow_indent = indent;
  info->line_head = TRUE;
  info->doc = NULL;
  p->heredocs_from_nextline = push(p->heredocs_from_nextline, newnode);
  p->lstate = EXPR_END;

  pylval.nd = newnode;
  return tHEREDOC_BEG;
}

static int
arg_ambiguous(parser_state *p)
{
  yywarning(p, "ambiguous first argument; put parentheses or even spaces");
  return 1;
}

#include "lex.def"

static int
parser_yylex(parser_state *p)
{
  int32_t c;
  int space_seen = 0;
  int cmd_state;
  enum mrb_lex_state_enum last_state;
  int token_column;

  if (p->lex_strterm) {
    if (is_strterm_type(p, STR_FUNC_HEREDOC)) {
      if (p->parsing_heredoc != NULL)
        return parse_string(p);
    }
    else
      return parse_string(p);
  }
  cmd_state = p->cmd_start;
  p->cmd_start = FALSE;
  retry:
  last_state = p->lstate;
  switch (c = nextc(p)) {
  case '\004':  /* ^D */
  case '\032':  /* ^Z */
  case '\0':    /* NUL */
  case -1:      /* end of script. */
    if (p->heredocs_from_nextline)
      goto maybe_heredoc;
    return 0;

  /* white spaces */
  case ' ': case '\t': case '\f': case '\r':
  case '\13':   /* '\v' */
    space_seen = 1;
    goto retry;

  case '#':     /* it's a comment */
    skip(p, '\n');
    /* fall through */
  case -2:      /* end of a file */
  case '\n':
    maybe_heredoc:
    heredoc_treat_nextline(p);
  switch (p->lstate) {
  case EXPR_BEG:
  case EXPR_FNAME:
  case EXPR_DOT:
  case EXPR_CLASS:
  case EXPR_VALUE:
    p->lineno++;
    p->column = 0;
    if (p->parsing_heredoc != NULL) {
      if (p->lex_strterm) {
        return parse_string(p);
      }
    }
    goto retry;
  default:
    break;
  }
  if (p->parsing_heredoc != NULL) {
    return '\n';
  }
  while ((c = nextc(p))) {
    switch (c) {
    case ' ': case '\t': case '\f': case '\r':
    case '\13': /* '\v' */
      space_seen = 1;
      break;
    case '.':
      if ((c = nextc(p)) != '.') {
        pushback(p, c);
        pushback(p, '.');
        goto retry;
      }
    case -1:                  /* EOF */
    case -2:                  /* end of a file */
      goto normal_newline;
    default:
      pushback(p, c);
      goto normal_newline;
    }
  }
  normal_newline:
  p->cmd_start = TRUE;
  p->lstate = EXPR_BEG;
  return '\n';

  case '*':
    if ((c = nextc(p)) == '*') {
      if ((c = nextc(p)) == '=') {
        pylval.id = intern("**",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      if (IS_SPCARG(c)) {
        yywarning(p, "'**' interpreted as argument prefix");
        c = tDSTAR;
      }
      else if (IS_BEG()) {
        c = tDSTAR;
      }
      else {
        c = tPOW; /* "**", "argument prefix" */
      }
    }
    else {
      if (c == '=') {
        pylval.id = intern_c('*');
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      if (IS_SPCARG(c)) {
        yywarning(p, "'*' interpreted as argument prefix");
        c = tSTAR;
      }
      else if (IS_BEG()) {
        c = tSTAR;
      }
      else {
        c = '*';
      }
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return c;

  case '!':
    c = nextc(p);
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if (c == '@') {
        return '!';
      }
    }
    else {
      p->lstate = EXPR_BEG;
    }
    if (c == '=') {
      return tNEQ;
    }
    if (c == '~') {
      return tNMATCH;
    }
    pushback(p, c);
    return '!';

  case '=':
    if (p->column == 1) {
      static const char begin[] = "begin";
      static const char end[] = "\n=end";
      if (peeks(p, begin)) {
        c = peekc_n(p, sizeof(begin)-1);
        if (c < 0 || ISSPACE(c)) {
          do {
            if (!skips(p, end)) {
              yyerror(p, "embedded document meets end of file");
              return 0;
            }
            c = nextc(p);
          } while (!(c < 0 || ISSPACE(c)));
          if (c != '\n') skip(p, '\n');
          p->lineno++;
          p->column = 0;
          goto retry;
        }
      }
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    if ((c = nextc(p)) == '=') {
      if ((c = nextc(p)) == '=') {
        return tEQQ;
      }
      pushback(p, c);
      return tEQ;
    }
    if (c == '~') {
      return tMATCH;
    }
    else if (c == '>') {
      return tASSOC;
    }
    pushback(p, c);
    return '=';

  case '<':
    c = nextc(p);
    if (c == '<' &&
        p->lstate != EXPR_DOT &&
        p->lstate != EXPR_CLASS &&
        !IS_END() &&
        (!IS_ARG() || space_seen)) {
      int token = heredoc_identifier(p);
      if (token)
        return token;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
      if (p->lstate == EXPR_CLASS) {
        p->cmd_start = TRUE;
      }
    }
    if (c == '=') {
      if ((c = nextc(p)) == '>') {
        return tCMP;
      }
      pushback(p, c);
      return tLEQ;
    }
    if (c == '<') {
      if ((c = nextc(p)) == '=') {
        pylval.id = intern("<<",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tLSHFT;
    }
    pushback(p, c);
    return '<';

  case '>':
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    if ((c = nextc(p)) == '=') {
      return tGEQ;
    }
    if (c == '>') {
      if ((c = nextc(p)) == '=') {
        pylval.id = intern(">>",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tRSHFT;
    }
    pushback(p, c);
    return '>';

  case '"':
    p->lex_strterm = new_strterm(p, str_dquote, '"', 0);
    return tSTRING_BEG;

  case '\'':
    p->lex_strterm = new_strterm(p, str_squote, '\'', 0);
    return parse_string(p);

  case '`':
    if (p->lstate == EXPR_FNAME) {
      p->lstate = EXPR_ENDFN;
      return '`';
    }
    if (p->lstate == EXPR_DOT) {
      if (cmd_state)
        p->lstate = EXPR_CMDARG;
      else
        p->lstate = EXPR_ARG;
      return '`';
    }
    p->lex_strterm = new_strterm(p, str_xquote, '`', 0);
    return tXSTRING_BEG;

  case '?':
    if (IS_END()) {
      p->lstate = EXPR_VALUE;
      return '?';
    }
    c = nextc(p);
    if (c < 0) {
      yyerror(p, "incomplete character syntax");
      return 0;
    }
    if (ISSPACE(c)) {
      if (!IS_ARG()) {
        int c2;
        switch (c) {
        case ' ':
          c2 = 's';
          break;
        case '\n':
          c2 = 'n';
          break;
        case '\t':
          c2 = 't';
          break;
        case '\v':
          c2 = 'v';
          break;
        case '\r':
          c2 = 'r';
          break;
        case '\f':
          c2 = 'f';
          break;
        default:
          c2 = 0;
          break;
        }
        if (c2) {
          char buf[256];
          snprintf(buf, sizeof(buf), "invalid character syntax; use ?\\%c", c2);
          yyerror(p, buf);
        }
      }
      ternary:
      pushback(p, c);
      p->lstate = EXPR_VALUE;
      return '?';
    }
    newtok(p);
    /* need support UTF-8 if configured */
    if ((ISALNUM(c) || c == '_')) {
      int c2 = nextc(p);
      pushback(p, c2);
      if ((ISALNUM(c2) || c2 == '_')) {
        goto ternary;
      }
    }
    if (c == '\\') {
      c = read_escape(p);
      tokadd(p, c);
    }
    else {
      tokadd(p, c);
    }
    tokfix(p);
    pylval.nd = new_str(p, tok(p), toklen(p));
    p->lstate = EXPR_ENDARG;
    return tCHAR;

  case '&':
    if ((c = nextc(p)) == '&') {
      p->lstate = EXPR_BEG;
      if ((c = nextc(p)) == '=') {
        pylval.id = intern("&&",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tANDOP;
    }
    else if (c == '.') {
      p->lstate = EXPR_DOT;
      return tANDDOT;
    }
    else if (c == '=') {
      pylval.id = intern_c('&');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    pushback(p, c);
    if (IS_SPCARG(c)) {
      yywarning(p, "'&' interpreted as argument prefix");
      c = tAMPER;
    }
    else if (IS_BEG()) {
      c = tAMPER;
    }
    else {
      c = '&';
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return c;

  case '|':
    if ((c = nextc(p)) == '|') {
      p->lstate = EXPR_BEG;
      if ((c = nextc(p)) == '=') {
        pylval.id = intern("||",2);
        p->lstate = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(p, c);
      return tOROP;
    }
    if (c == '=') {
      pylval.id = intern_c('|');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    pushback(p, c);
    return '|';

  case '+':
    c = nextc(p);
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if (c == '@') {
        return tUPLUS;
      }
      pushback(p, c);
      return '+';
    }
    if (c == '=') {
      pylval.id = intern_c('+');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p))) {
      p->lstate = EXPR_BEG;
      pushback(p, c);
      if (c >= 0 && ISDIGIT(c)) {
        c = '+';
        goto start_num;
      }
      return tUPLUS;
    }
    p->lstate = EXPR_BEG;
    pushback(p, c);
    return '+';

  case '-':
    c = nextc(p);
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if (c == '@') {
        return tUMINUS;
      }
      pushback(p, c);
      return '-';
    }
    if (c == '=') {
      pylval.id = intern_c('-');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (c == '>') {
      p->lstate = EXPR_ENDFN;
      return tLAMBDA;
    }
    if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p))) {
      p->lstate = EXPR_BEG;
      pushback(p, c);
      if (c >= 0 && ISDIGIT(c)) {
        return tUMINUS_NUM;
      }
      return tUMINUS;
    }
    p->lstate = EXPR_BEG;
    pushback(p, c);
    return '-';

  case '.':
    p->lstate = EXPR_BEG;
    if ((c = nextc(p)) == '.') {
      if ((c = nextc(p)) == '.') {
        return tDOT3;
      }
      pushback(p, c);
      return tDOT2;
    }
    pushback(p, c);
    if (c >= 0 && ISDIGIT(c)) {
      yyerror(p, "no .<digit> floating literal anymore; put 0 before dot");
    }
    p->lstate = EXPR_DOT;
    return '.';

    start_num:
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
  {
    int is_float, seen_point, seen_e, nondigit;

    is_float = seen_point = seen_e = nondigit = 0;
    p->lstate = EXPR_ENDARG;
    newtok(p);
    if (c == '-' || c == '+') {
      tokadd(p, c);
      c = nextc(p);
    }
    if (c == '0') {
#define no_digits() do {yyerror(p,"numeric literal without digits"); return 0;} while (0)
      int start = toklen(p);
      c = nextc(p);
      if (c == 'x' || c == 'X') {
        /* hexadecimal */
        c = nextc(p);
        if (c >= 0 && ISXDIGIT(c)) {
          do {
            if (c == '_') {
              if (nondigit) break;
              nondigit = c;
              continue;
            }
            if (!ISXDIGIT(c)) break;
            nondigit = 0;
            tokadd(p, tolower(c));
          } while ((c = nextc(p)) >= 0);
        }
        pushback(p, c);
        tokfix(p);
        if (toklen(p) == start) {
          no_digits();
        }
        else if (nondigit) goto trailing_uc;
        pylval.nd = new_int(p, tok(p), 16);
        return tINTEGER;
      }
      if (c == 'b' || c == 'B') {
        /* binary */
        c = nextc(p);
        if (c == '0' || c == '1') {
          do {
            if (c == '_') {
              if (nondigit) break;
              nondigit = c;
              continue;
            }
            if (c != '0' && c != '1') break;
            nondigit = 0;
            tokadd(p, c);
          } while ((c = nextc(p)) >= 0);
        }
        pushback(p, c);
        tokfix(p);
        if (toklen(p) == start) {
          no_digits();
        }
        else if (nondigit) goto trailing_uc;
        pylval.nd = new_int(p, tok(p), 2);
        return tINTEGER;
      }
      if (c == 'd' || c == 'D') {
        /* decimal */
        c = nextc(p);
        if (c >= 0 && ISDIGIT(c)) {
          do {
            if (c == '_') {
              if (nondigit) break;
              nondigit = c;
              continue;
            }
            if (!ISDIGIT(c)) break;
            nondigit = 0;
            tokadd(p, c);
          } while ((c = nextc(p)) >= 0);
        }
        pushback(p, c);
        tokfix(p);
        if (toklen(p) == start) {
          no_digits();
        }
        else if (nondigit) goto trailing_uc;
        pylval.nd = new_int(p, tok(p), 10);
        return tINTEGER;
      }
      if (c == '_') {
        /* 0_0 */
        goto octal_number;
      }
      if (c == 'o' || c == 'O') {
        /* prefixed octal */
        c = nextc(p);
        if (c < 0 || c == '_' || !ISDIGIT(c)) {
          no_digits();
        }
      }
      if (c >= '0' && c <= '7') {
        /* octal */
        octal_number:
        do {
          if (c == '_') {
            if (nondigit) break;
            nondigit = c;
            continue;
          }
          if (c < '0' || c > '9') break;
          if (c > '7') goto invalid_octal;
          nondigit = 0;
          tokadd(p, c);
        } while ((c = nextc(p)) >= 0);

        if (toklen(p) > start) {
          pushback(p, c);
          tokfix(p);
          if (nondigit) goto trailing_uc;
          pylval.nd = new_int(p, tok(p), 8);
          return tINTEGER;
        }
        if (nondigit) {
          pushback(p, c);
          goto trailing_uc;
        }
      }
      if (c > '7' && c <= '9') {
        invalid_octal:
        yyerror(p, "Invalid octal digit");
      }
      else if (c == '.' || c == 'e' || c == 'E') {
        tokadd(p, '0');
      }
      else {
        pushback(p, c);
        pylval.nd = new_int(p, "0", 10);
        return tINTEGER;
      }
    }

    for (;;) {
      switch (c) {
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
        nondigit = 0;
        tokadd(p, c);
        break;

      case '.':
        if (nondigit) goto trailing_uc;
        if (seen_point || seen_e) {
          goto decode_num;
        }
        else {
          int c0 = nextc(p);
          if (c0 < 0 || !ISDIGIT(c0)) {
            pushback(p, c0);
            goto decode_num;
          }
          c = c0;
        }
        tokadd(p, '.');
        tokadd(p, c);
        is_float++;
        seen_point++;
        nondigit = 0;
        break;

      case 'e':
      case 'E':
        if (nondigit) {
          pushback(p, c);
          c = nondigit;
          goto decode_num;
        }
        if (seen_e) {
          goto decode_num;
        }
        tokadd(p, c);
        seen_e++;
        is_float++;
        nondigit = c;
        c = nextc(p);
        if (c != '-' && c != '+') continue;
        tokadd(p, c);
        nondigit = c;
        break;

      case '_':       /* '_' in number just ignored */
        if (nondigit) goto decode_num;
        nondigit = c;
        break;

      default:
        goto decode_num;
      }
      c = nextc(p);
    }

    decode_num:
    pushback(p, c);
    if (nondigit) {
      trailing_uc:
      yyerror_i(p, "trailing '%c' in number", nondigit);
    }
    tokfix(p);
    if (is_float) {
#ifdef MRB_WITHOUT_FLOAT
      yywarning(p, "floating point numbers are not supported");
      pylval.nd = new_int(p, "0", 10);
      return tINTEGER;
#else
      double d;
      char *endp;

      errno = 0;
      d = mrb_float_read(tok(p), &endp);
      if (d == 0 && endp == tok(p)) {
        yywarning_s(p, "corrupted float value %s", tok(p));
      }
      else if (errno == ERANGE) {
        yywarning_s(p, "float %s out of range", tok(p));
        errno = 0;
      }
      pylval.nd = new_float(p, tok(p));
      return tFLOAT;
#endif
    }
    pylval.nd = new_int(p, tok(p), 10);
    return tINTEGER;
  }

  case ')':
  case ']':
    p->paren_nest--;
    /* fall through */
  case '}':
    COND_LEXPOP();
    CMDARG_LEXPOP();
    if (c == ')')
      p->lstate = EXPR_ENDFN;
    else
      p->lstate = EXPR_END;
    return c;

  case ':':
    c = nextc(p);
    if (c == ':') {
      if (IS_BEG() || p->lstate == EXPR_CLASS || IS_SPCARG(-1)) {
        p->lstate = EXPR_BEG;
        return tCOLON3;
      }
      p->lstate = EXPR_DOT;
      return tCOLON2;
    }
    if (!space_seen && IS_END()) {
      pushback(p, c);
      p->lstate = EXPR_BEG;
      return tLABEL_TAG;
    }
    if (!ISSPACE(c) || IS_BEG()) {
      pushback(p, c);
      p->lstate = EXPR_FNAME;
      return tSYMBEG;
    }
    pushback(p, c);
    p->lstate = EXPR_BEG;
    return ':';

  case '/':
    if (IS_BEG()) {
      p->lex_strterm = new_strterm(p, str_regexp, '/', 0);
      return tREGEXP_BEG;
    }
    if ((c = nextc(p)) == '=') {
      pylval.id = intern_c('/');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    pushback(p, c);
    if (IS_SPCARG(c)) {
      p->lex_strterm = new_strterm(p, str_regexp, '/', 0);
      return tREGEXP_BEG;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return '/';

  case '^':
    if ((c = nextc(p)) == '=') {
      pylval.id = intern_c('^');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    pushback(p, c);
    return '^';

  case ';':
    p->lstate = EXPR_BEG;
    return ';';

  case ',':
    p->lstate = EXPR_BEG;
    return ',';

  case '~':
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      if ((c = nextc(p)) != '@') {
        pushback(p, c);
      }
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    return '~';

  case '(':
    if (IS_BEG()) {
      c = tLPAREN;
    }
    else if (IS_SPCARG(-1)) {
      c = tLPAREN_ARG;
    }
    else if (p->lstate == EXPR_END && space_seen) {
      c = tLPAREN_ARG;
    }
    p->paren_nest++;
    COND_PUSH(0);
    CMDARG_PUSH(0);
    p->lstate = EXPR_BEG;
    return c;

  case '[':
    p->paren_nest++;
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
      if ((c = nextc(p)) == ']') {
        if ((c = nextc(p)) == '=') {
          return tASET;
        }
        pushback(p, c);
        return tAREF;
      }
      pushback(p, c);
      return '[';
    }
    else if (IS_BEG()) {
      c = tLBRACK;
    }
    else if (IS_ARG() && space_seen) {
      c = tLBRACK;
    }
    p->lstate = EXPR_BEG;
    COND_PUSH(0);
    CMDARG_PUSH(0);
    return c;

  case '{':
    if (p->lpar_beg && p->lpar_beg == p->paren_nest) {
      p->lstate = EXPR_BEG;
      p->lpar_beg = 0;
      p->paren_nest--;
      COND_PUSH(0);
      CMDARG_PUSH(0);
      return tLAMBEG;
    }
    if (IS_ARG() || p->lstate == EXPR_END || p->lstate == EXPR_ENDFN)
      c = '{';          /* block (primary) */
    else if (p->lstate == EXPR_ENDARG)
      c = tLBRACE_ARG;  /* block (expr) */
    else
      c = tLBRACE;      /* hash */
    COND_PUSH(0);
    CMDARG_PUSH(0);
    p->lstate = EXPR_BEG;
    return c;

  case '\\':
    c = nextc(p);
    if (c == '\n') {
      p->lineno++;
      p->column = 0;
      space_seen = 1;
      goto retry; /* skip \\n */
    }
    pushback(p, c);
    return '\\';

  case '%':
    if (IS_BEG()) {
      int term;
      int paren;

      c = nextc(p);
      quotation:
      if (c < 0 || !ISALNUM(c)) {
        term = c;
        c = 'Q';
      }
      else {
        term = nextc(p);
        if (ISALNUM(term)) {
          yyerror(p, "unknown type of %string");
          return 0;
        }
      }
      if (c < 0 || term < 0) {
        yyerror(p, "unterminated quoted string meets end of file");
        return 0;
      }
      paren = term;
      if (term == '(') term = ')';
      else if (term == '[') term = ']';
      else if (term == '{') term = '}';
      else if (term == '<') term = '>';
      else paren = 0;

      switch (c) {
      case 'Q':
        p->lex_strterm = new_strterm(p, str_dquote, term, paren);
        return tSTRING_BEG;

      case 'q':
        p->lex_strterm = new_strterm(p, str_squote, term, paren);
        return parse_string(p);

      case 'W':
        p->lex_strterm = new_strterm(p, str_dword, term, paren);
        return tWORDS_BEG;

      case 'w':
        p->lex_strterm = new_strterm(p, str_sword, term, paren);
        return tWORDS_BEG;

      case 'x':
        p->lex_strterm = new_strterm(p, str_xquote, term, paren);
        return tXSTRING_BEG;

      case 'r':
        p->lex_strterm = new_strterm(p, str_regexp, term, paren);
        return tREGEXP_BEG;

      case 's':
        p->lex_strterm = new_strterm(p, str_ssym, term, paren);
        return tSYMBEG;

      case 'I':
        p->lex_strterm = new_strterm(p, str_dsymbols, term, paren);
        return tSYMBOLS_BEG;

      case 'i':
        p->lex_strterm = new_strterm(p, str_ssymbols, term, paren);
        return tSYMBOLS_BEG;

      default:
        yyerror(p, "unknown type of %string");
        return 0;
      }
    }
    if ((c = nextc(p)) == '=') {
      pylval.id = intern_c('%');
      p->lstate = EXPR_BEG;
      return tOP_ASGN;
    }
    if (IS_SPCARG(c)) {
      goto quotation;
    }
    if (p->lstate == EXPR_FNAME || p->lstate == EXPR_DOT) {
      p->lstate = EXPR_ARG;
    }
    else {
      p->lstate = EXPR_BEG;
    }
    pushback(p, c);
    return '%';

  case '$':
    p->lstate = EXPR_END;
    token_column = newtok(p);
    c = nextc(p);
    if (c < 0) {
      yyerror(p, "incomplete global variable syntax");
      return 0;
    }
    switch (c) {
    case '_':     /* $_: last read line string */
      c = nextc(p);
      if (c >= 0 && identchar(c)) { /* if there is more after _ it is a variable */
        tokadd(p, '$');
        tokadd(p, c);
        break;
      }
      pushback(p, c);
      c = '_';
      /* fall through */
    case '~':     /* $~: match-data */
    case '*':     /* $*: argv */
    case '$':     /* $$: pid */
    case '?':     /* $?: last status */
    case '!':     /* $!: error string */
    case '@':     /* $@: error position */
    case '/':     /* $/: input record separator */
    case '\\':    /* $\: output record separator */
    case ';':     /* $;: field separator */
    case ',':     /* $,: output field separator */
    case '.':     /* $.: last read line number */
    case '=':     /* $=: ignorecase */
    case ':':     /* $:: load path */
    case '<':     /* $<: reading filename */
    case '>':     /* $>: default output handle */
    case '\"':    /* $": already loaded files */
      tokadd(p, '$');
      tokadd(p, c);
      tokfix(p);
      pylval.id = intern_cstr(tok(p));
      return tGVAR;

    case '-':
      tokadd(p, '$');
      tokadd(p, c);
      c = nextc(p);
      pushback(p, c);
      gvar:
      tokfix(p);
      pylval.id = intern_cstr(tok(p));
      return tGVAR;

    case '&':     /* $&: last match */
    case '`':     /* $`: string before last match */
    case '\'':    /* $': string after last match */
    case '+':     /* $+: string matches last pattern */
      if (last_state == EXPR_FNAME) {
        tokadd(p, '$');
        tokadd(p, c);
        goto gvar;
      }
      pylval.nd = new_back_ref(p, c);
      return tBACK_REF;

    case '1': case '2': case '3':
    case '4': case '5': case '6':
    case '7': case '8': case '9':
      do {
        tokadd(p, c);
        c = nextc(p);
      } while (c >= 0 && ISDIGIT(c));
      pushback(p, c);
      if (last_state == EXPR_FNAME) goto gvar;
      tokfix(p);
      {
        unsigned long n = strtoul(tok(p), NULL, 10);
        if (n > INT_MAX) {
          yyerror_i(p, "capture group index must be <= %d", INT_MAX);
          return 0;
        }
        pylval.nd = new_nth_ref(p, (int)n);
      }
      return tNTH_REF;

    default:
      if (!identchar(c)) {
        pushback(p,  c);
        return '$';
      }
      /* fall through */
    case '0':
      tokadd(p, '$');
    }
    break;

    case '@':
      c = nextc(p);
      token_column = newtok(p);
      tokadd(p, '@');
      if (c == '@') {
        tokadd(p, '@');
        c = nextc(p);
      }
      if (c < 0) {
        if (p->tidx == 1) {
          yyerror(p, "incomplete instance variable syntax");
        }
        else {
          yyerror(p, "incomplete class variable syntax");
        }
        return 0;
      }
      else if (ISDIGIT(c)) {
        if (p->tidx == 1) {
          yyerror_i(p, "'@%c' is not allowed as an instance variable name", c);
        }
        else {
          yyerror_i(p, "'@@%c' is not allowed as a class variable name", c);
        }
        return 0;
      }
      if (!identchar(c)) {
        pushback(p, c);
        return '@';
      }
      break;

    case '_':
      token_column = newtok(p);
      break;

    default:
      if (!identchar(c)) {
        yyerror_i(p,  "Invalid char '\\x%02X' in expression", c);
        goto retry;
      }

      token_column = newtok(p);
      break;
  }

  do {
    tokadd(p, c);
    c = nextc(p);
    if (c < 0) break;
  } while (identchar(c));
  if (token_column == 0 && toklen(p) == 7 && (c < 0 || c == '\n') &&
      strncmp(tok(p), "__END__", toklen(p)) == 0)
    return -1;

  switch (tok(p)[0]) {
  case '@': case '$':
    pushback(p, c);
    break;
  default:
    if ((c == '!' || c == '?') && !peek(p, '=')) {
      tokadd(p, c);
    }
    else {
      pushback(p, c);
    }
  }
  tokfix(p);
  {
    int result = 0;

    switch (tok(p)[0]) {
    case '$':
      p->lstate = EXPR_END;
      result = tGVAR;
      break;
    case '@':
      p->lstate = EXPR_END;
      if (tok(p)[1] == '@')
        result = tCVAR;
      else
        result = tIVAR;
      break;

    default:
      if (toklast(p) == '!' || toklast(p) == '?') {
        result = tFID;
      }
      else {
        if (p->lstate == EXPR_FNAME) {
          if ((c = nextc(p)) == '=' && !peek(p, '~') && !peek(p, '>') &&
              (!peek(p, '=') || (peek_n(p, '>', 1)))) {
            result = tIDENTIFIER;
            tokadd(p, c);
            tokfix(p);
          }
          else {
            pushback(p, c);
          }
        }
        if (result == 0 && ISUPPER(tok(p)[0])) {
          result = tCONSTANT;
        }
        else {
          result = tIDENTIFIER;
        }
      }

      if (IS_LABEL_POSSIBLE()) {
        if (IS_LABEL_SUFFIX(0)) {
          p->lstate = EXPR_END;
          tokfix(p);
          pylval.id = intern_cstr(tok(p));
          return tIDENTIFIER;
        }
      }
      if (p->lstate != EXPR_DOT) {
        const struct kwtable *kw;

        /* See if it is a reserved word.  */
        kw = mrb_reserved_word(tok(p), toklen(p));
        if (kw) {
          enum mrb_lex_state_enum state = p->lstate;
          pylval.num = p->lineno;
          p->lstate = kw->state;
          if (state == EXPR_FNAME) {
            pylval.id = intern_cstr(kw->name);
            return kw->id[0];
          }
          if (p->lstate == EXPR_BEG) {
            p->cmd_start = TRUE;
          }
          if (kw->id[0] == keyword_do) {
            if (p->lpar_beg && p->lpar_beg == p->paren_nest) {
              p->lpar_beg = 0;
              p->paren_nest--;
              return keyword_do_LAMBDA;
            }
            if (COND_P()) return keyword_do_cond;
            if (CMDARG_P() && state != EXPR_CMDARG)
              return keyword_do_block;
            if (state == EXPR_ENDARG || state == EXPR_BEG)
              return keyword_do_block;
            return keyword_do;
          }
          if (state == EXPR_BEG || state == EXPR_VALUE)
            return kw->id[0];
          else {
            if (kw->id[0] != kw->id[1])
              p->lstate = EXPR_BEG;
            return kw->id[1];
          }
        }
      }

      if (IS_BEG() || p->lstate == EXPR_DOT || IS_ARG()) {
        if (cmd_state) {
          p->lstate = EXPR_CMDARG;
        }
        else {
          p->lstate = EXPR_ARG;
        }
      }
      else if (p->lstate == EXPR_FNAME) {
        p->lstate = EXPR_ENDFN;
      }
      else {
        p->lstate = EXPR_END;
      }
    }
    {
      mrb_sym ident = intern_cstr(tok(p));

      pylval.id = ident;
      if (last_state != EXPR_DOT && ISLOWER(tok(p)[0]) && local_var_p(p, ident)) {
        p->lstate = EXPR_END;
      }
    }
    return result;
  }
}

static int
yylex(void *lval, parser_state *p)
{
  p->ylval = lval;
  return parser_yylex(p);
}

static void
parser_init_cxt(parser_state *p, mrbc_context *cxt)
{
  if (!cxt) return;
  if (cxt->filename) mrb_parser_set_filename(p, cxt->filename);
  if (cxt->lineno) p->lineno = cxt->lineno;
  if (cxt->syms) {
    int i;

    p->locals = cons(0,0);
    for (i=0; i<cxt->slen; i++) {
      local_add_f(p, cxt->syms[i]);
    }
  }
  p->capture_errors = cxt->capture_errors;
  p->no_optimize = cxt->no_optimize;
  p->on_eval = cxt->on_eval;
  if (cxt->partial_hook) {
    p->cxt = cxt;
  }
}

static void
parser_update_cxt(parser_state *p, mrbc_context *cxt)
{
  node *n, *n0;
  int i = 0;

  if (!cxt) return;
  if (intn(p->tree->car) != NODE_SCOPE) return;
  n0 = n = p->tree->cdr->car;
  while (n) {
    i++;
    n = n->cdr;
  }
  cxt->syms = (mrb_sym *)mrb_realloc(p->mrb, cxt->syms, i*sizeof(mrb_sym));
  cxt->slen = i;
  for (i=0, n=n0; n; i++,n=n->cdr) {
    cxt->syms[i] = sym(n->car);
  }
}

void mrb_codedump_all(mrb_state*, struct RProc*);
void mrb_parser_dump(mrb_state *mrb, node *tree, int offset);

MRB_API void
mrb_parser_parse(parser_state *p, mrbc_context *c)
{
  struct mrb_jmpbuf buf1;
  p->jmp = &buf1;

  MRB_TRY(p->jmp) {
    int n = 1;

    p->cmd_start = TRUE;
    p->in_def = p->in_single = 0;
    p->nerr = p->nwarn = 0;
    p->lex_strterm = NULL;

    parser_init_cxt(p, c);

    if (p->mrb->jmp) {
      n = yyparse(p);
    }
    else {
      struct mrb_jmpbuf buf2;

      p->mrb->jmp = &buf2;
      MRB_TRY(p->mrb->jmp) {
        n = yyparse(p);
      }
      MRB_CATCH(p->mrb->jmp) {
        p->nerr++;
      }
      MRB_END_EXC(p->mrb->jmp);
      p->mrb->jmp = 0;
    }
    if (n != 0 || p->nerr > 0) {
      p->tree = 0;
      return;
    }
    if (!p->tree) {
      p->tree = new_nil(p);
    }
    parser_update_cxt(p, c);
    if (c && c->dump_result) {
      mrb_parser_dump(p->mrb, p->tree, 0);
    }
  }
  MRB_CATCH(p->jmp) {
    yyerror(p, "memory allocation error");
    p->nerr++;
    p->tree = 0;
    return;
  }
  MRB_END_EXC(p->jmp);
}

MRB_API parser_state*
mrb_parser_new(mrb_state *mrb)
{
  mrb_pool *pool;
  parser_state *p;
  static const parser_state parser_state_zero = { 0 };

  pool = mrb_pool_open(mrb);
  if (!pool) return NULL;
  p = (parser_state *)mrb_pool_alloc(pool, sizeof(parser_state));
  if (!p) return NULL;

  *p = parser_state_zero;
  p->mrb = mrb;
  p->pool = pool;

  p->s = p->send = NULL;
#ifndef MRB_DISABLE_STDIO
  p->f = NULL;
#endif

  p->cmd_start = TRUE;
  p->in_def = p->in_single = 0;

  p->capture_errors = FALSE;
  p->lineno = 1;
  p->column = 0;
#if defined(PARSER_TEST) || defined(PARSER_DEBUG)
  yydebug = 1;
#endif
  p->tsiz = MRB_PARSER_TOKBUF_SIZE;
  p->tokbuf = p->buf;

  p->lex_strterm = NULL;
  p->all_heredocs = p->parsing_heredoc = NULL;
  p->lex_strterm_before_heredoc = NULL;

  p->current_filename_index = -1;
  p->filename_table = NULL;
  p->filename_table_length = 0;

  return p;
}

MRB_API void
mrb_parser_free(parser_state *p) {
  if (p->tokbuf != p->buf) {
    mrb_free(p->mrb, p->tokbuf);
  }
  mrb_pool_close(p->pool);
}

MRB_API mrbc_context*
mrbc_context_new(mrb_state *mrb)
{
  return (mrbc_context *)mrb_calloc(mrb, 1, sizeof(mrbc_context));
}

MRB_API void
mrbc_context_free(mrb_state *mrb, mrbc_context *cxt)
{
  mrb_free(mrb, cxt->filename);
  mrb_free(mrb, cxt->syms);
  mrb_free(mrb, cxt);
}

MRB_API const char*
mrbc_filename(mrb_state *mrb, mrbc_context *c, const char *s)
{
  if (s) {
    size_t len = strlen(s);
    char *p = (char *)mrb_malloc(mrb, len + 1);

    memcpy(p, s, len + 1);
    if (c->filename) {
      mrb_free(mrb, c->filename);
    }
    c->filename = p;
  }
  return c->filename;
}

MRB_API void
mrbc_partial_hook(mrb_state *mrb, mrbc_context *c, int (*func)(struct mrb_parser_state*), void *data)
{
  c->partial_hook = func;
  c->partial_data = data;
}

MRB_API void
mrb_parser_set_filename(struct mrb_parser_state *p, const char *f)
{
  mrb_sym sym;
  size_t i;
  mrb_sym* new_table;

  sym = mrb_intern_cstr(p->mrb, f);
  p->filename_sym = sym;
  p->lineno = (p->filename_table_length > 0)? 0 : 1;

  for (i = 0; i < p->filename_table_length; ++i) {
    if (p->filename_table[i] == sym) {
      p->current_filename_index = (int)i;
      return;
    }
  }

  if (p->filename_table_length == UINT16_MAX) {
    yyerror(p, "too many files to compile");
    return;
  }
  p->current_filename_index = p->filename_table_length++;

  new_table = (mrb_sym*)parser_palloc(p, sizeof(mrb_sym) * p->filename_table_length);
  if (p->filename_table) {
    memmove(new_table, p->filename_table, sizeof(mrb_sym) * p->current_filename_index);
  }
  p->filename_table = new_table;
  p->filename_table[p->filename_table_length - 1] = sym;
}

MRB_API mrb_sym
mrb_parser_get_filename(struct mrb_parser_state* p, uint16_t idx) {
  if (idx >= p->filename_table_length) return 0;
  else {
    return p->filename_table[idx];
  }
}

#ifndef MRB_DISABLE_STDIO
MRB_API parser_state*
mrb_parse_file(mrb_state *mrb, FILE *f, mrbc_context *c)
{
  parser_state *p;

  p = mrb_parser_new(mrb);
  if (!p) return NULL;
  p->s = p->send = NULL;
  p->f = f;

  mrb_parser_parse(p, c);
  return p;
}
#endif

MRB_API parser_state*
mrb_parse_nstring(mrb_state *mrb, const char *s, size_t len, mrbc_context *c)
{
  parser_state *p;

  p = mrb_parser_new(mrb);
  if (!p) return NULL;
  p->s = s;
  p->send = s + len;

  mrb_parser_parse(p, c);
  return p;
}

MRB_API parser_state*
mrb_parse_string(mrb_state *mrb, const char *s, mrbc_context *c)
{
  return mrb_parse_nstring(mrb, s, strlen(s), c);
}

MRB_API mrb_value
mrb_load_exec(mrb_state *mrb, struct mrb_parser_state *p, mrbc_context *c)
{
  struct RClass *target = mrb->object_class;
  struct RProc *proc;
  mrb_value v;
  unsigned int keep = 0;

  if (!p) {
    return mrb_undef_value();
  }
  if (!p->tree || p->nerr) {
    if (c) c->parser_nerr = p->nerr;
    if (p->capture_errors) {
      char buf[256];
      int n;

      n = snprintf(buf, sizeof(buf), "line %d: %s\n",
          p->error_buffer[0].lineno, p->error_buffer[0].message);
      mrb->exc = mrb_obj_ptr(mrb_exc_new(mrb, E_SYNTAX_ERROR, buf, n));
      mrb_parser_free(p);
      return mrb_undef_value();
    }
    else {
      if (mrb->exc == NULL) {
        mrb->exc = mrb_obj_ptr(mrb_exc_new_str_lit(mrb, E_SYNTAX_ERROR, "syntax error"));
      }
      mrb_parser_free(p);
      return mrb_undef_value();
    }
  }
  proc = mrb_generate_code(mrb, p);
  mrb_parser_free(p);
  if (proc == NULL) {
    if (mrb->exc == NULL) {
      mrb->exc = mrb_obj_ptr(mrb_exc_new_str_lit(mrb, E_SCRIPT_ERROR, "codegen error"));
    }
    return mrb_undef_value();
  }
  if (c) {
    if (c->dump_result) mrb_codedump_all(mrb, proc);
    if (c->no_exec) return mrb_obj_value(proc);
    if (c->target_class) {
      target = c->target_class;
    }
    if (c->keep_lv) {
      keep = c->slen + 1;
    }
    else {
      c->keep_lv = TRUE;
    }
  }
  MRB_PROC_SET_TARGET_CLASS(proc, target);
  if (mrb->c->ci) {
    mrb->c->ci->target_class = target;
  }
  v = mrb_top_run(mrb, proc, mrb_top_self(mrb), keep);
  if (mrb->exc) return mrb_nil_value();
  return v;
}

#ifndef MRB_DISABLE_STDIO
MRB_API mrb_value
mrb_load_file_cxt(mrb_state *mrb, FILE *f, mrbc_context *c)
{
  return mrb_load_exec(mrb, mrb_parse_file(mrb, f, c), c);
}

MRB_API mrb_value
mrb_load_file(mrb_state *mrb, FILE *f)
{
  return mrb_load_file_cxt(mrb, f, NULL);
}
#endif

MRB_API mrb_value
mrb_load_nstring_cxt(mrb_state *mrb, const char *s, size_t len, mrbc_context *c)
{
  return mrb_load_exec(mrb, mrb_parse_nstring(mrb, s, len, c), c);
}

MRB_API mrb_value
mrb_load_nstring(mrb_state *mrb, const char *s, size_t len)
{
  return mrb_load_nstring_cxt(mrb, s, len, NULL);
}

MRB_API mrb_value
mrb_load_string_cxt(mrb_state *mrb, const char *s, mrbc_context *c)
{
  return mrb_load_nstring_cxt(mrb, s, strlen(s), c);
}

MRB_API mrb_value
mrb_load_string(mrb_state *mrb, const char *s)
{
  return mrb_load_string_cxt(mrb, s, NULL);
}

#ifndef MRB_DISABLE_STDIO

static void
dump_prefix(node *tree, int offset)
{
  printf("%05d ", tree->lineno);
  while (offset--) {
    putc(' ', stdout);
    putc(' ', stdout);
  }
}

static void
dump_recur(mrb_state *mrb, node *tree, int offset)
{
  while (tree) {
    mrb_parser_dump(mrb, tree->car, offset);
    tree = tree->cdr;
  }
}

static void
dump_args(mrb_state *mrb, node *n, int offset)
{
  if (n->car) {
    dump_prefix(n, offset+1);
    printf("mandatory args:\n");
    dump_recur(mrb, n->car, offset+2);
  }
  n = n->cdr;
  if (n->car) {
    dump_prefix(n, offset+1);
    printf("optional args:\n");
    {
      node *n2 = n->car;

      while (n2) {
        dump_prefix(n2, offset+2);
        printf("%s=\n", mrb_sym2name(mrb, sym(n2->car->car)));
        mrb_parser_dump(mrb, n2->car->cdr, offset+3);
        n2 = n2->cdr;
      }
    }
  }
  n = n->cdr;
  if (n->car) {
    dump_prefix(n, offset+1);
    printf("rest=*%s\n", mrb_sym2name(mrb, sym(n->car)));
  }
  n = n->cdr;
  if (n->car) {
    dump_prefix(n, offset+1);
    printf("post mandatory args:\n");
    dump_recur(mrb, n->car, offset+2);
  }

  n = n->cdr;
  if (n) {
    mrb_assert(intn(n->car) == NODE_ARGS_TAIL);
    mrb_parser_dump(mrb, n, offset);
  }
}

#endif

void
mrb_parser_dump(mrb_state *mrb, node *tree, int offset)
{
#ifndef MRB_DISABLE_STDIO
  int nodetype;

  if (!tree) return;
  again:
  dump_prefix(tree, offset);
  nodetype = intn(tree->car);
  tree = tree->cdr;
  switch (nodetype) {
  case NODE_BEGIN:
    printf("NODE_BEGIN:\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_RESCUE:
    printf("NODE_RESCUE:\n");
    if (tree->car) {
      dump_prefix(tree, offset+1);
      printf("body:\n");
      mrb_parser_dump(mrb, tree->car, offset+2);
    }
    tree = tree->cdr;
    if (tree->car) {
      node *n2 = tree->car;

      dump_prefix(n2, offset+1);
      printf("rescue:\n");
      while (n2) {
        node *n3 = n2->car;
        if (n3->car) {
          dump_prefix(n2, offset+2);
          printf("handle classes:\n");
          dump_recur(mrb, n3->car, offset+3);
        }
        if (n3->cdr->car) {
          dump_prefix(n3, offset+2);
          printf("exc_var:\n");
          mrb_parser_dump(mrb, n3->cdr->car, offset+3);
        }
        if (n3->cdr->cdr->car) {
          dump_prefix(n3, offset+2);
          printf("rescue body:\n");
          mrb_parser_dump(mrb, n3->cdr->cdr->car, offset+3);
        }
        n2 = n2->cdr;
      }
    }
    tree = tree->cdr;
    if (tree->car) {
      dump_prefix(tree, offset+1);
      printf("else:\n");
      mrb_parser_dump(mrb, tree->car, offset+2);
    }
    break;

  case NODE_ENSURE:
    printf("NODE_ENSURE:\n");
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("ensure:\n");
    mrb_parser_dump(mrb, tree->cdr->cdr, offset+2);
    break;

  case NODE_LAMBDA:
    printf("NODE_LAMBDA:\n");
    dump_prefix(tree, offset);
    goto block;

  case NODE_BLOCK:
    block:
    printf("NODE_BLOCK:\n");
    tree = tree->cdr;
    if (tree->car) {
      dump_args(mrb, tree->car, offset+1);
    }
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->car, offset+2);
    break;

  case NODE_IF:
    printf("NODE_IF:\n");
    dump_prefix(tree, offset+1);
    printf("cond:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("then:\n");
    mrb_parser_dump(mrb, tree->cdr->car, offset+2);
    if (tree->cdr->cdr->car) {
      dump_prefix(tree, offset+1);
      printf("else:\n");
      mrb_parser_dump(mrb, tree->cdr->cdr->car, offset+2);
    }
    break;

  case NODE_AND:
    printf("NODE_AND:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_OR:
    printf("NODE_OR:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_CASE:
    printf("NODE_CASE:\n");
    if (tree->car) {
      mrb_parser_dump(mrb, tree->car, offset+1);
    }
    tree = tree->cdr;
    while (tree) {
      dump_prefix(tree, offset+1);
      printf("case:\n");
      dump_recur(mrb, tree->car->car, offset+2);
      dump_prefix(tree, offset+1);
      printf("body:\n");
      mrb_parser_dump(mrb, tree->car->cdr, offset+2);
      tree = tree->cdr;
    }
    break;

  case NODE_WHILE:
    printf("NODE_WHILE:\n");
    dump_prefix(tree, offset+1);
    printf("cond:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_UNTIL:
    printf("NODE_UNTIL:\n");
    dump_prefix(tree, offset+1);
    printf("cond:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_FOR:
    printf("NODE_FOR:\n");
    dump_prefix(tree, offset+1);
    printf("var:\n");
    {
      node *n2 = tree->car;

      if (n2->car) {
        dump_prefix(n2, offset+2);
        printf("pre:\n");
        dump_recur(mrb, n2->car, offset+3);
      }
      n2 = n2->cdr;
      if (n2) {
        if (n2->car) {
          dump_prefix(n2, offset+2);
          printf("rest:\n");
          mrb_parser_dump(mrb, n2->car, offset+3);
        }
        n2 = n2->cdr;
        if (n2) {
          if (n2->car) {
            dump_prefix(n2, offset+2);
            printf("post:\n");
            dump_recur(mrb, n2->car, offset+3);
          }
        }
      }
    }
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf("in:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf("do:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    break;

  case NODE_SCOPE:
    printf("NODE_SCOPE:\n");
    {
      node *n2 = tree->car;
      mrb_bool first_lval = TRUE;

      if (n2 && (n2->car || n2->cdr)) {
        dump_prefix(n2, offset+1);
        printf("local variables:\n");
        dump_prefix(n2, offset+2);
        while (n2) {
          if (n2->car) {
            if (!first_lval) printf(", ");
            printf("%s", mrb_sym2name(mrb, sym(n2->car)));
            first_lval = FALSE;
          }
          n2 = n2->cdr;
        }
        printf("\n");
      }
    }
    tree = tree->cdr;
    offset++;
    goto again;

  case NODE_FCALL:
  case NODE_CALL:
  case NODE_SCALL:
    switch (nodetype) {
    case NODE_FCALL:
      printf("NODE_FCALL:\n"); break;
    case NODE_CALL:
      printf("NODE_CALL(.):\n"); break;
    case NODE_SCALL:
      printf("NODE_SCALL(&.):\n"); break;
    default:
      break;
    }
    mrb_parser_dump(mrb, tree->car, offset+1);
    dump_prefix(tree, offset+1);
    printf("method='%s' (%d)\n",
        mrb_sym2name(mrb, sym(tree->cdr->car)),
        intn(tree->cdr->car));
    tree = tree->cdr->cdr->car;
    if (tree) {
      dump_prefix(tree, offset+1);
      printf("args:\n");
      dump_recur(mrb, tree->car, offset+2);
      if (tree->cdr) {
        dump_prefix(tree, offset+1);
        printf("block:\n");
        mrb_parser_dump(mrb, tree->cdr, offset+2);
      }
    }
    break;

  case NODE_DOT2:
    printf("NODE_DOT2:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_DOT3:
    printf("NODE_DOT3:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    mrb_parser_dump(mrb, tree->cdr, offset+1);
    break;

  case NODE_COLON2:
    printf("NODE_COLON2:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    dump_prefix(tree, offset+1);
    printf("::%s\n", mrb_sym2name(mrb, sym(tree->cdr)));
    break;

  case NODE_COLON3:
    printf("NODE_COLON3: ::%s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_ARRAY:
    printf("NODE_ARRAY:\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_HASH:
    printf("NODE_HASH:\n");
    while (tree) {
      dump_prefix(tree, offset+1);
      printf("key:\n");
      mrb_parser_dump(mrb, tree->car->car, offset+2);
      dump_prefix(tree, offset+1);
      printf("value:\n");
      mrb_parser_dump(mrb, tree->car->cdr, offset+2);
      tree = tree->cdr;
    }
    break;

  case NODE_KW_HASH:
    printf("NODE_KW_HASH:\n");
    while (tree) {
      dump_prefix(tree, offset+1);
      printf("key:\n");
      mrb_parser_dump(mrb, tree->car->car, offset+2);
      dump_prefix(tree, offset+1);
      printf("value:\n");
      mrb_parser_dump(mrb, tree->car->cdr, offset+2);
      tree = tree->cdr;
    }
    break;

  case NODE_SPLAT:
    printf("NODE_SPLAT:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_ASGN:
    printf("NODE_ASGN:\n");
    dump_prefix(tree, offset+1);
    printf("lhs:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    dump_prefix(tree, offset+1);
    printf("rhs:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_MASGN:
    printf("NODE_MASGN:\n");
    dump_prefix(tree, offset+1);
    printf("mlhs:\n");
    {
      node *n2 = tree->car;

      if (n2->car) {
        dump_prefix(tree, offset+2);
        printf("pre:\n");
        dump_recur(mrb, n2->car, offset+3);
      }
      n2 = n2->cdr;
      if (n2) {
        if (n2->car) {
          dump_prefix(n2, offset+2);
          printf("rest:\n");
          if (n2->car == (node*)-1) {
            dump_prefix(n2, offset+2);
            printf("(empty)\n");
          }
          else {
            mrb_parser_dump(mrb, n2->car, offset+3);
          }
        }
        n2 = n2->cdr;
        if (n2) {
          if (n2->car) {
            dump_prefix(n2, offset+2);
            printf("post:\n");
            dump_recur(mrb, n2->car, offset+3);
          }
        }
      }
    }
    dump_prefix(tree, offset+1);
    printf("rhs:\n");
    mrb_parser_dump(mrb, tree->cdr, offset+2);
    break;

  case NODE_OP_ASGN:
    printf("NODE_OP_ASGN:\n");
    dump_prefix(tree, offset+1);
    printf("lhs:\n");
    mrb_parser_dump(mrb, tree->car, offset+2);
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf("op='%s' (%d)\n", mrb_sym2name(mrb, sym(tree->car)), intn(tree->car));
    tree = tree->cdr;
    mrb_parser_dump(mrb, tree->car, offset+1);
    break;

  case NODE_SUPER:
    printf("NODE_SUPER:\n");
    if (tree) {
      dump_prefix(tree, offset+1);
      printf("args:\n");
      dump_recur(mrb, tree->car, offset+2);
      if (tree->cdr) {
        dump_prefix(tree, offset+1);
        printf("block:\n");
        mrb_parser_dump(mrb, tree->cdr, offset+2);
      }
    }
    break;

  case NODE_ZSUPER:
    printf("NODE_ZSUPER\n");
    break;

  case NODE_RETURN:
    printf("NODE_RETURN:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_YIELD:
    printf("NODE_YIELD:\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_BREAK:
    printf("NODE_BREAK:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_NEXT:
    printf("NODE_NEXT:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_REDO:
    printf("NODE_REDO\n");
    break;

  case NODE_RETRY:
    printf("NODE_RETRY\n");
    break;

  case NODE_LVAR:
    printf("NODE_LVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_GVAR:
    printf("NODE_GVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_IVAR:
    printf("NODE_IVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_CVAR:
    printf("NODE_CVAR %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_CONST:
    printf("NODE_CONST %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_MATCH:
    printf("NODE_MATCH:\n");
    dump_prefix(tree, offset + 1);
    printf("lhs:\n");
    mrb_parser_dump(mrb, tree->car, offset + 2);
    dump_prefix(tree, offset + 1);
    printf("rhs:\n");
    mrb_parser_dump(mrb, tree->cdr, offset + 2);
    break;

  case NODE_BACK_REF:
    printf("NODE_BACK_REF: $%c\n", intn(tree));
    break;

  case NODE_NTH_REF:
    printf("NODE_NTH_REF: $%d\n", intn(tree));
    break;

  case NODE_ARG:
    printf("NODE_ARG %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  case NODE_BLOCK_ARG:
    printf("NODE_BLOCK_ARG:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_INT:
    printf("NODE_INT %s base %d\n", (char*)tree->car, intn(tree->cdr->car));
    break;

  case NODE_FLOAT:
    printf("NODE_FLOAT %s\n", (char*)tree);
    break;

  case NODE_NEGATE:
    printf("NODE_NEGATE\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_STR:
    printf("NODE_STR \"%s\" len %d\n", (char*)tree->car, intn(tree->cdr));
    break;

  case NODE_DSTR:
    printf("NODE_DSTR\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_XSTR:
    printf("NODE_XSTR \"%s\" len %d\n", (char*)tree->car, intn(tree->cdr));
    break;

  case NODE_DXSTR:
    printf("NODE_DXSTR\n");
    dump_recur(mrb, tree, offset+1);
    break;

  case NODE_REGX:
    printf("NODE_REGX /%s/%s\n", (char*)tree->car, (char*)tree->cdr);
    break;

  case NODE_DREGX:
    printf("NODE_DREGX\n");
    dump_recur(mrb, tree->car, offset+1);
    dump_prefix(tree, offset);
    printf("tail: %s\n", (char*)tree->cdr->cdr->car);
    if (tree->cdr->cdr->cdr->car) {
      dump_prefix(tree, offset);
      printf("opt: %s\n", (char*)tree->cdr->cdr->cdr->car);
    }
    if (tree->cdr->cdr->cdr->cdr) {
      dump_prefix(tree, offset);
      printf("enc: %s\n", (char*)tree->cdr->cdr->cdr->cdr);
    }
    break;

  case NODE_SYM:
    printf("NODE_SYM :%s (%d)\n", mrb_sym2name(mrb, sym(tree)),
           intn(tree));
    break;

  case NODE_SELF:
    printf("NODE_SELF\n");
    break;

  case NODE_NIL:
    printf("NODE_NIL\n");
    break;

  case NODE_TRUE:
    printf("NODE_TRUE\n");
    break;

  case NODE_FALSE:
    printf("NODE_FALSE\n");
    break;

  case NODE_ALIAS:
    printf("NODE_ALIAS %s %s:\n",
        mrb_sym2name(mrb, sym(tree->car)),
        mrb_sym2name(mrb, sym(tree->cdr)));
    break;

  case NODE_UNDEF:
    printf("NODE_UNDEF");
    {
      node *t = tree;
      while (t) {
        printf(" %s", mrb_sym2name(mrb, sym(t->car)));
        t = t->cdr;
      }
    }
    printf(":\n");
    break;

  case NODE_CLASS:
    printf("NODE_CLASS:\n");
    if (tree->car->car == (node*)0) {
      dump_prefix(tree, offset+1);
      printf(":%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else if (tree->car->car == (node*)1) {
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else {
      mrb_parser_dump(mrb, tree->car->car, offset+1);
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    if (tree->cdr->car) {
      dump_prefix(tree, offset+1);
      printf("super:\n");
      mrb_parser_dump(mrb, tree->cdr->car, offset+2);
    }
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->cdr->car->cdr, offset+2);
    break;

  case NODE_MODULE:
    printf("NODE_MODULE:\n");
    if (tree->car->car == (node*)0) {
      dump_prefix(tree, offset+1);
      printf(":%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else if (tree->car->car == (node*)1) {
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    else {
      mrb_parser_dump(mrb, tree->car->car, offset+1);
      dump_prefix(tree, offset+1);
      printf("::%s\n", mrb_sym2name(mrb, sym(tree->car->cdr)));
    }
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->car->cdr, offset+2);
    break;

  case NODE_SCLASS:
    printf("NODE_SCLASS:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    dump_prefix(tree, offset+1);
    printf("body:\n");
    mrb_parser_dump(mrb, tree->cdr->car->cdr, offset+2);
    break;

  case NODE_DEF:
    printf("NODE_DEF:\n");
    dump_prefix(tree, offset+1);
    printf("%s\n", mrb_sym2name(mrb, sym(tree->car)));
    tree = tree->cdr;
    {
      node *n2 = tree->car;
      mrb_bool first_lval = TRUE;

      if (n2 && (n2->car || n2->cdr)) {
        dump_prefix(n2, offset+1);
        printf("local variables:\n");
        dump_prefix(n2, offset+2);
        while (n2) {
          if (n2->car) {
            if (!first_lval) printf(", ");
            printf("%s", mrb_sym2name(mrb, sym(n2->car)));
            first_lval = FALSE;
          }
          n2 = n2->cdr;
        }
        printf("\n");
      }
    }
    tree = tree->cdr;
    if (tree->car) {
      dump_args(mrb, tree->car, offset);
    }
    mrb_parser_dump(mrb, tree->cdr->car, offset+1);
    break;

  case NODE_SDEF:
    printf("NODE_SDEF:\n");
    mrb_parser_dump(mrb, tree->car, offset+1);
    tree = tree->cdr;
    dump_prefix(tree, offset+1);
    printf(":%s\n", mrb_sym2name(mrb, sym(tree->car)));
    tree = tree->cdr->cdr;
    if (tree->car) {
      dump_args(mrb, tree->car, offset+1);
    }
    tree = tree->cdr;
    mrb_parser_dump(mrb, tree->car, offset+1);
    break;

  case NODE_POSTEXE:
    printf("NODE_POSTEXE:\n");
    mrb_parser_dump(mrb, tree, offset+1);
    break;

  case NODE_HEREDOC:
    printf("NODE_HEREDOC (<<%s):\n", ((parser_heredoc_info*)tree)->term);
    dump_recur(mrb, ((parser_heredoc_info*)tree)->doc, offset+1);
    break;

  case NODE_ARGS_TAIL:
    printf("NODE_ARGS_TAIL:\n");
    {
      node *kws = tree->car;

      while (kws) {
        mrb_parser_dump(mrb, kws->car, offset+1);
        kws = kws->cdr;
      }
    }
    tree = tree->cdr;
    if (tree->car) {
      mrb_assert(intn(tree->car->car) == NODE_KW_REST_ARGS);
      mrb_parser_dump(mrb, tree->car, offset+1);
    }
    tree = tree->cdr;
    if (tree->car) {
      dump_prefix(tree, offset+1);
      printf("block='%s'\n", mrb_sym2name(mrb, sym(tree->car)));
    }
    break;

  case NODE_KW_ARG:
    printf("NODE_KW_ARG %s\n", mrb_sym2name(mrb, sym(tree->car)));
    mrb_parser_dump(mrb, tree->cdr->car, offset + 1);
    break;

  case NODE_KW_REST_ARGS:
    printf("NODE_KW_REST_ARGS %s\n", mrb_sym2name(mrb, sym(tree)));
    break;

  default:
    printf("node type: %d (0x%x)\n", nodetype, (unsigned)nodetype);
    break;
  }
#endif
}

