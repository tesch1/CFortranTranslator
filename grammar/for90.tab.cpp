/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "for90.y"

#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include "../tokenizer.h"
#include "../parser.h"
#include "../cgen.h"

// ǰ������, ��Ȼ���벻��
void yyerror(const char* s); 
extern int yylex();
extern void set_buff(const std::string & code);
extern void release_buff();
#define YYDEBUG 1
#define YYERROR_VERBOSE
char codegen_buf[65535];
using namespace std;
string tabber(string &);
ParseNode * flattern(ParseNode *); // eliminate right recursion

/* Line 371 of yacc.c  */
#line 90 "for90.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "for90.tab.h".  */
#ifndef YY_YY_FOR90_TAB_H_INCLUDED
# define YY_YY_FOR90_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     YY_REQ_MORE = 258,
     YY_CRLF = 259,
     YY_GT = 260,
     YY_GE = 261,
     YY_EQ = 262,
     YY_LE = 263,
     YY_LT = 264,
     YY_NEQ = 265,
     YY_NEQV = 266,
     YY_EQV = 267,
     YY_ANDAND = 268,
     YY_OROR = 269,
     YY_NOT = 270,
     YY_POWER = 271,
     YY_DOUBLECOLON = 272,
     YY_NEG = 273,
     YY_INTEGER = 274,
     YY_FLOAT = 275,
     YY_WORD = 276,
     YY_OPERATOR = 277,
     YY_STRING = 278,
     YY_ILLEGAL = 279,
     YY_COMPLEX = 280,
     YY_TRUE = 281,
     YY_FALSE = 282,
     YY_END = 283,
     YY_IF = 284,
     YY_THEN = 285,
     YY_ELSE = 286,
     YY_ELSEIF = 287,
     YY_ENDIF = 288,
     YY_DO = 289,
     YY_ENDDO = 290,
     YY_CONTINUE = 291,
     YY_BREAK = 292,
     YY_WHILE = 293,
     YY_ENDWHILE = 294,
     YY_WHERE = 295,
     YY_ENDWHERE = 296,
     YY_CASE = 297,
     YY_ENDCASE = 298,
     YY_PROGRAM = 299,
     YY_ENDPROGRAM = 300,
     YY_FUNCTION = 301,
     YY_ENDFUNCTION = 302,
     YY_RECURSIVE = 303,
     YY_RESULT = 304,
     YY_SUBROUTINE = 305,
     YY_ENDSUBROUTINE = 306,
     YY_MODULE = 307,
     YY_ENDMODULE = 308,
     YY_BLOCK = 309,
     YY_ENDBLOCK = 310,
     YY_IMPLICIT = 311,
     YY_NONE = 312,
     YY_USE = 313,
     YY_PARAMETER = 314,
     YY_FORMAT = 315,
     YY_ENTRY = 316,
     YY_DIMENSION = 317,
     YY_INTEGER_T = 318,
     YY_FLOAT_T = 319,
     YY_STRING_T = 320,
     YY_COMPLEX_T = 321,
     YY_BOOL_T = 322,
     YY_WRITE = 323,
     YY_READ = 324,
     YY_PRINT = 325,
     YY_OPEN = 326,
     YY_CLOSE = 327
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_FOR90_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 228 "for90.tab.cpp"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      78,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      79,    80,    76,    74,    81,    75,     2,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,     2,
       2,    73,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    12,    14,    16,
      18,    21,    23,    28,    33,    38,    43,    48,    53,    57,
      61,    64,    67,    69,    71,    73,    75,    77,    78,    80,
      81,    83,    91,    99,   101,   103,   105,   107,   109,   115,
     119,   126,   128,   132,   136,   142,   144,   148,   150,   152,
     161,   173,   183,   195,   201,   208,   215,   226,   239,   241,
     244,   251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     103,     0,    -1,     4,    -1,    -1,    20,    -1,    19,    -1,
      23,    -1,    26,    -1,    27,    -1,    25,    -1,     1,    78,
      -1,    21,    -1,    79,    87,    80,    84,    -1,    87,    74,
      87,    84,    -1,    87,    75,    87,    84,    -1,    87,    76,
      87,    84,    -1,    87,    77,    87,    84,    -1,    87,    16,
      87,    84,    -1,    75,    87,    84,    -1,    87,    73,    87,
      -1,    85,    84,    -1,    86,    84,    -1,    87,    -1,    95,
      -1,    98,    -1,    89,    -1,    92,    -1,    -1,    79,    -1,
      -1,    80,    -1,    68,    90,    19,    81,    23,    91,    97,
      -1,    68,    90,    76,    81,    23,    91,    97,    -1,    63,
      -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    79,
      87,    81,    87,    80,    -1,    93,    17,    96,    -1,    93,
      81,    62,    94,    17,    96,    -1,    86,    -1,    86,    73,
      87,    -1,    86,    81,    96,    -1,    86,    73,    87,    81,
      96,    -1,    87,    -1,    87,    81,    97,    -1,    99,    -1,
     101,    -1,    29,    87,    30,    84,   102,    28,    29,    84,
      -1,    29,    87,    30,    84,   102,    31,    84,   102,    28,
      29,    84,    -1,    29,    87,    30,    84,   102,   100,    28,
      29,    84,    -1,    29,    87,    30,    84,   102,   100,    31,
      84,   102,    28,    29,    -1,    32,    87,    30,    84,   102,
      -1,    32,    87,    30,    84,   102,   100,    -1,    34,    84,
     102,    28,    34,    84,    -1,    34,    86,    73,    87,    81,
      87,    84,   102,    28,    34,    -1,    34,    86,    73,    87,
      81,    87,    81,    87,    84,   102,    28,    34,    -1,    88,
      -1,    88,   102,    -1,    44,    21,   102,    28,    44,    21,
      -1,    44,   102,    28,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    53,    60,    66,    72,    78,    84,
      87,    89,    96,   104,   114,   124,   134,   144,   154,   163,
     173,   178,   184,   192,   200,   201,   203,   205,   206,   210,
     211,   213,   223,   239,   244,   249,   254,   259,   286,   297,
     307,   332,   348,   363,   379,   395,   399,   401,   401,   403,
     413,   425,   436,   448,   459,   470,   479,   491,   505,   506,
     513,   519
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "YY_REQ_MORE", "YY_CRLF", "YY_GT",
  "YY_GE", "YY_EQ", "YY_LE", "YY_LT", "YY_NEQ", "YY_NEQV", "YY_EQV",
  "YY_ANDAND", "YY_OROR", "YY_NOT", "YY_POWER", "YY_DOUBLECOLON", "YY_NEG",
  "YY_INTEGER", "YY_FLOAT", "YY_WORD", "YY_OPERATOR", "YY_STRING",
  "YY_ILLEGAL", "YY_COMPLEX", "YY_TRUE", "YY_FALSE", "YY_END", "YY_IF",
  "YY_THEN", "YY_ELSE", "YY_ELSEIF", "YY_ENDIF", "YY_DO", "YY_ENDDO",
  "YY_CONTINUE", "YY_BREAK", "YY_WHILE", "YY_ENDWHILE", "YY_WHERE",
  "YY_ENDWHERE", "YY_CASE", "YY_ENDCASE", "YY_PROGRAM", "YY_ENDPROGRAM",
  "YY_FUNCTION", "YY_ENDFUNCTION", "YY_RECURSIVE", "YY_RESULT",
  "YY_SUBROUTINE", "YY_ENDSUBROUTINE", "YY_MODULE", "YY_ENDMODULE",
  "YY_BLOCK", "YY_ENDBLOCK", "YY_IMPLICIT", "YY_NONE", "YY_USE",
  "YY_PARAMETER", "YY_FORMAT", "YY_ENTRY", "YY_DIMENSION", "YY_INTEGER_T",
  "YY_FLOAT_T", "YY_STRING_T", "YY_COMPLEX_T", "YY_BOOL_T", "YY_WRITE",
  "YY_READ", "YY_PRINT", "YY_OPEN", "YY_CLOSE", "'='", "'+'", "'-'", "'*'",
  "'/'", "'\\n'", "'('", "')'", "','", "':'", "$accept", "crlf", "literal",
  "variable", "exp", "stmt", "output_stmt", "_optional_lbrace",
  "_optional_rbrace", "write", "type_spec", "def_slice", "var_def",
  "paramtable", "argtable", "compound_stmt", "if_stmt", "elseif_stmt",
  "do_stmt", "suite", "program", YY_NULL
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
     325,   326,   327,    61,    43,    45,    42,    47,    10,    40,
      41,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    94,    95,
      95,    96,    96,    96,    96,    97,    97,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       2,     1,     4,     4,     4,     4,     4,     4,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     7,     7,     1,     1,     1,     1,     1,     5,     3,
       6,     1,     3,     3,     5,     1,     3,     1,     1,     8,
      11,     9,    11,     5,     6,     6,    10,    12,     1,     2,
       6,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     5,     4,     0,     6,     9,     7,
       8,     0,     3,    33,    34,    35,    36,    37,    27,     0,
       0,     3,     3,    22,     0,    25,    26,     0,    23,    24,
      47,    48,     0,     1,    10,    11,     0,     0,     2,     0,
       0,    28,     0,     3,     0,    20,    21,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     3,     0,
       0,     0,     0,    18,     3,     3,    19,     3,     3,     3,
       3,    41,    39,     0,    61,     0,     0,     0,     0,     0,
       0,    12,    17,    13,    14,    15,    16,     0,     0,     0,
       0,    60,     0,     3,     0,    29,    29,    42,    43,     0,
       0,     0,     3,     0,     0,    55,     3,    30,     0,     0,
       0,     0,    40,     3,     0,     0,     0,     3,     0,     0,
      45,    31,    32,    44,     0,    49,     0,     3,     3,     0,
       3,     0,     0,    38,     0,     0,    51,     0,     0,     0,
      46,     3,    53,     0,     0,    56,    50,    54,    52,     0,
      57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    39,    21,    22,    23,    24,    25,    42,   108,    26,
      27,    90,    28,    72,   121,    29,    30,   104,    31,    32,
       2
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     -28,   209,    19,   -55,  -104,  -104,   141,  -104,  -104,  -104,
    -104,     1,    11,  -104,  -104,  -104,  -104,  -104,   -49,     1,
       1,    27,    27,   271,   158,  -104,  -104,   -13,  -104,  -104,
    -104,  -104,     8,  -104,  -104,  -104,    20,   279,  -104,   226,
     -26,  -104,   -18,    45,   -11,  -104,  -104,     1,     1,     1,
       1,     1,     1,  -104,    30,    -9,    10,    12,    27,    29,
       1,   -22,     2,  -104,    27,    45,   182,    45,    45,    45,
      45,   -64,  -104,   -24,  -104,    39,   226,    43,   120,    62,
      64,  -104,  -104,  -104,  -104,  -104,  -104,     1,    30,     1,
      73,  -104,     6,    27,     1,    17,    17,   223,  -104,   247,
      30,    69,    27,     1,   -21,  -104,   238,  -104,     1,     1,
      30,     1,  -104,    27,   226,   286,    70,    27,     1,   226,
     262,  -104,  -104,  -104,    -2,  -104,    74,    27,    27,   226,
      45,    76,     1,  -104,    78,   226,  -104,    77,   226,    75,
    -104,    27,    79,    83,    86,  -104,  -104,  -104,  -104,    81,
    -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,    24,  -104,    -4,    -8,  -104,  -104,  -104,    31,  -104,
    -104,  -104,  -104,   -75,  -103,  -104,  -104,   -17,  -104,    -6,
    -104
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      36,    61,     3,    37,    54,    47,   122,   116,    40,    87,
     117,    43,    44,    98,    47,    38,     1,    88,    53,    33,
       4,     5,    35,    34,     7,   112,     8,     9,    10,   140,
      41,    38,    35,    59,   101,   123,    56,   102,   103,    65,
      66,    67,    68,    69,    70,    45,    46,    60,    57,    38,
      71,    35,    78,    73,    74,    89,    75,    77,    62,    79,
      91,    47,    48,    49,    50,    51,    52,    63,    55,    64,
      92,    48,    49,    50,    51,    52,    19,    93,   133,    97,
      20,    99,    76,    80,    71,    95,   106,    96,    81,    82,
     100,    83,    84,    85,    86,   115,    71,   107,   113,   128,
     120,   120,   134,   124,   139,   143,    71,   141,   126,   145,
     130,   103,   148,   131,   149,   150,     0,   105,    48,    49,
      50,    51,    52,   137,   120,   147,   114,   109,     0,   142,
     119,     0,   144,     0,     0,     0,    47,   125,     0,     0,
       0,   129,     3,     0,     0,   -11,     0,     0,     0,     0,
       0,   135,   136,     0,   138,     0,     0,   -11,     0,     3,
       4,     5,    35,     0,     7,   146,     8,     9,    10,   -11,
      11,     0,     0,     0,     0,    12,     0,     4,     5,    35,
       0,     7,     0,     8,     9,    10,   -58,    11,     0,   -58,
     -58,     0,    12,    48,    49,    50,    51,    52,    47,     0,
       0,    94,     0,     0,    13,    14,    15,    16,    17,    18,
       3,     0,     0,     0,   -11,   -11,    19,   -11,   -11,     0,
      20,    13,    14,    15,    16,    17,    18,     3,     4,     5,
       6,     0,     7,    19,     8,     9,    10,    20,    11,    47,
       0,     0,    38,    12,     0,     4,     5,    35,     0,     7,
       0,     8,     9,    10,    47,    11,    49,    50,    51,    52,
      12,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    14,    15,    16,    17,    18,    47,     0,
       0,     0,     0,     0,    19,     0,     0,    47,    20,    13,
      14,    15,    16,    17,    18,    47,    48,    49,    50,    51,
      52,    19,    47,     0,   110,    20,     0,     0,     0,    58,
       0,    48,    49,    50,    51,    52,   127,     0,     0,   118,
      48,    49,    50,    51,    52,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,    48,    49,    50,    51,    52,
       0,     0,     0,   132,    48,    49,    50,    51,    52,     0,
       0,     0,    48,    49,    50,    51,    52,     0,     0,    48,
      49,    50,    51,    52
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-104)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    19,     1,    11,    17,    16,   109,    28,    12,    73,
      31,    19,    20,    88,    16,     4,    44,    81,    24,     0,
      19,    20,    21,    78,    23,   100,    25,    26,    27,   132,
      79,     4,    21,    39,    28,   110,    28,    31,    32,    47,
      48,    49,    50,    51,    52,    21,    22,    73,    28,     4,
      54,    21,    60,    62,    44,    79,    44,    28,    76,    81,
      21,    16,    73,    74,    75,    76,    77,    43,    81,    80,
      76,    73,    74,    75,    76,    77,    75,    34,    80,    87,
      79,    89,    58,    81,    88,    23,    94,    23,    64,    65,
      17,    67,    68,    69,    70,   103,   100,    80,    29,    29,
     108,   109,    28,   111,    28,    28,   110,    29,   114,    34,
     118,    32,    29,   119,    28,    34,    -1,    93,    73,    74,
      75,    76,    77,   129,   132,   142,   102,    96,    -1,   135,
     106,    -1,   138,    -1,    -1,    -1,    16,   113,    -1,    -1,
      -1,   117,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,    -1,    -1,    16,    -1,     1,
      19,    20,    21,    -1,    23,   141,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    19,    20,    21,
      -1,    23,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    73,    74,    75,    76,    77,    16,    -1,
      -1,    81,    -1,    -1,    63,    64,    65,    66,    67,    68,
       1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,
      79,    63,    64,    65,    66,    67,    68,     1,    19,    20,
      21,    -1,    23,    75,    25,    26,    27,    79,    29,    16,
      -1,    -1,     4,    34,    -1,    19,    20,    21,    -1,    23,
      -1,    25,    26,    27,    16,    29,    74,    75,    76,    77,
      34,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    16,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    16,    79,    63,
      64,    65,    66,    67,    68,    16,    73,    74,    75,    76,
      77,    75,    16,    -1,    81,    79,    -1,    -1,    -1,    30,
      -1,    73,    74,    75,    76,    77,    30,    -1,    -1,    81,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,    73,
      74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,   103,     1,    19,    20,    21,    23,    25,    26,
      27,    29,    34,    63,    64,    65,    66,    67,    68,    75,
      79,    85,    86,    87,    88,    89,    92,    93,    95,    98,
      99,   101,   102,     0,    78,    21,   102,    87,     4,    84,
      86,    79,    90,    87,    87,    84,    84,    16,    73,    74,
      75,    76,    77,   102,    17,    81,    28,    28,    30,   102,
      73,    19,    76,    84,    80,    87,    87,    87,    87,    87,
      87,    86,    96,    62,    44,    44,    84,    28,    87,    81,
      81,    84,    84,    84,    84,    84,    84,    73,    81,    79,
      94,    21,   102,    34,    81,    23,    23,    87,    96,    87,
      17,    28,    31,    32,   100,    84,    87,    80,    91,    91,
      81,    81,    96,    29,    84,    87,    28,    31,    81,    84,
      87,    97,    97,    96,    87,    84,   102,    30,    29,    84,
      87,   102,    81,    80,    28,    84,    84,   102,    84,    28,
      97,    29,   102,    28,   102,    34,    84,   100,    29,    28,
      34
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 4:
/* Line 1792 of yacc.c  */
#line 54 "for90.y"
    {
				/* ����Ŀ�µ��Ҳ�ȫ��Ϊ�����ս����(�﷨����Ҷ�ӽڵ�), ���$1ȫ������lex���� */
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Float, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // float number
				(yyval) = *newnode;
			}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 61 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Int, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // int number
				(yyval) = *newnode;
			}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 67 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::String, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // string
				(yyval) = *newnode;
			}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 73 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Bool, "true" }; // bool true
				(yyval) = *newnode;
			}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 79 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Bool, "false" }; // bool false
				(yyval) = *newnode;
			}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 85 "for90.y"
    {printf("complex " );}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 90 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::UnknownVariant, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // variant
				(yyval) = *newnode;
			}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 97 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "( %s )", (yyvsp[(2) - (4)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)]))); 
				(yyval) = *newnode;
			}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 105 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s + %s", (yyvsp[(1) - (4)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (4)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (4)]))); // left operand exp
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)]))); // +
				newnode->addchild(new ParseNode((yyvsp[(3) - (4)]))); // tight operand exp
				(yyval) = *newnode;
			}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 115 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s - %s", (yyvsp[(1) - (4)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (4)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (4)]))); // left operand exp
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)]))); // -
				newnode->addchild(new ParseNode((yyvsp[(3) - (4)]))); // right operand exp
				(yyval) = *newnode;
			}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 125 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s * %s", (yyvsp[(1) - (4)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (4)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (4)]))); // left operand exp
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)]))); // *
				newnode->addchild(new ParseNode((yyvsp[(3) - (4)]))); // right operand exp
				(yyval) = *newnode;
			}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 135 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s / %s", (yyvsp[(1) - (4)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (4)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (4)]))); // left operand exp
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)]))); // /
				newnode->addchild(new ParseNode((yyvsp[(3) - (4)]))); // right operand exp
				(yyval) = *newnode;
			}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 145 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s ** %s", (yyvsp[(1) - (4)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (4)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (4)]))); // left operand exp
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)]))); // **
				newnode->addchild(new ParseNode((yyvsp[(3) - (4)]))); // right operand exp
				(yyval) = *newnode;
			}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 155 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "(-%s)", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (3)]))); // (-)
				newnode->addchild(new ParseNode((yyvsp[(2) - (3)]))); // only right operand exp
				(yyval) = *newnode;
			}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 164 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s = %s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (3)]))); // left operand exp
				newnode->addchild(new ParseNode((yyvsp[(2) - (3)]))); // =
				newnode->addchild(new ParseNode((yyvsp[(3) - (3)]))); // right operand exp
				(yyval) = *newnode;
			}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 174 "for90.y"
    { 
				// 
				(yyval) = (yyvsp[(1) - (2)]);
			}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 179 "for90.y"
    {
				// 
				(yyval) = (yyvsp[(1) - (2)]);
			}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 185 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s ;\n", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (1)]))); // exp
				(yyval) = *newnode;
			}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 193 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s ;\n", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (1)]))); // var_def
				(yyval) = *newnode;
			}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 207 "for90.y"
    {
				printf("abc\n");
			}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 214 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "printf(\"%s\", %s) ;\n", (yyvsp[(4) - (7)]).fs.CurrentTerm.what.c_str(), (yyvsp[(6) - (7)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(3) - (7)]))); // device id
				newnode->addchild(new ParseNode((yyvsp[(5) - (7)]))); // formatter
				newnode->addchild(new ParseNode((yyvsp[(7) - (7)]))); // paramtable
				(yyval) = *newnode;
			}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 224 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "printf(\"%%g\", %s) ;\n", (yyvsp[(3) - (7)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				ParseNode * deviceidnode = new ParseNode();
				deviceidnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				newnode->addchild(deviceidnode); // device id
				ParseNode * formatternode = new ParseNode();
				formatternode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "%g" };
				newnode->addchild(formatternode); // formatter

				newnode->addchild(new ParseNode((yyvsp[(7) - (7)]))); // paramtable
				(yyval) = *newnode;
			}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 240 "for90.y"
    {
				(yyvsp[(1) - (1)]).fs.CurrentTerm.what = typename_map.at((yyvsp[(1) - (1)]).fs.CurrentTerm.what);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 245 "for90.y"
    {
				(yyvsp[(1) - (1)]).fs.CurrentTerm.what = typename_map.at((yyvsp[(1) - (1)]).fs.CurrentTerm.what);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 250 "for90.y"
    {
				(yyvsp[(1) - (1)]).fs.CurrentTerm.what = typename_map.at((yyvsp[(1) - (1)]).fs.CurrentTerm.what);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 255 "for90.y"
    {
				(yyvsp[(1) - (1)]).fs.CurrentTerm.what = typename_map.at((yyvsp[(1) - (1)]).fs.CurrentTerm.what);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 260 "for90.y"
    {
				(yyvsp[(1) - (1)]).fs.CurrentTerm.what = typename_map.at((yyvsp[(1) - (1)]).fs.CurrentTerm.what);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 287 "for90.y"
    {
				/* arr[from : to] */
				ParseNode * newnode = new ParseNode();
				/* target code of slice depend on context */
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				newnode->addchild(new ParseNode((yyvsp[(2) - (5)]))); // lower bound
				newnode->addchild(new ParseNode((yyvsp[(4) - (5)]))); // upper bound
				(yyval) = *newnode;
			}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 298 "for90.y"
    {
				/*  */
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s %s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (3)]))); // type
				newnode->addchild(new ParseNode((yyvsp[(3) - (3)]))); // paramtable
				(yyval) = *newnode;
			}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 308 "for90.y"
    {
				/* array decl */
				ParseNode * newnode = new ParseNode();
				string arr_decl = "";
				newnode->addchild(new ParseNode((yyvsp[(1) - (6)]))); // type
				newnode->addchild(new ParseNode((yyvsp[(4) - (6)]))); // slice
				ParseNode * pn = new ParseNode((yyvsp[(6) - (6)])); //paramtable
				newnode->addchild(pn); // paramtable

				while (pn->child.size() == 2 && pn->child[1]->fs.CurrentTerm.token == TokenMeta::NT_PARAMTABLE) {
					// for all non-flatterned paramtable
					for (int i = 0; i < pn->child.size(); i++)
					{
						// for each variable in flatterned paramtable
						sprintf(codegen_buf, "forarr<%s> %s(%s, %s);", (yyvsp[(1) - (6)]).fs.CurrentTerm.what.c_str(), pn->child[i]->child[0]->fs.CurrentTerm.what.c_str(), (yyvsp[(4) - (6)]).child[0]->fs.CurrentTerm.what.c_str(), (yyvsp[(4) - (6)]).child[1]->fs.CurrentTerm.what.c_str());
						arr_decl += codegen_buf;
						arr_decl += '\n';
					}
					pn = pn->child[1];
				}
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, arr_decl };
				(yyval) = *newnode;
			}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 333 "for90.y"
    {
				/* paramtable is used in function decl */
				/* this paramtable has only one value */
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, string(codegen_buf) };
					ParseNode * variablenode = new ParseNode();
					sprintf(codegen_buf, "%s", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
					variablenode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
					variablenode->addchild( new ParseNode((yyvsp[(1) - (1)])) ); // type
					FlexState fs; fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string("void") };
					variablenode->addchild( new ParseNode(fs, newnode) ); // dummy initial
					newnode->addchild(variablenode);
				(yyval) = *newnode;
			}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 349 "for90.y"
    {
				/* initial value is required in parse tree because it can be an non-terminal `exp` */
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s = %s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, string(codegen_buf) };
					ParseNode * variablenode = new ParseNode();
					sprintf(codegen_buf, "%s = %s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
					variablenode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
					variablenode->addchild(new ParseNode((yyvsp[(1) - (3)]))); // type
					variablenode->addchild(new ParseNode((yyvsp[(3) - (3)]))); // initial
					newnode->addchild(variablenode);
				newnode = flattern(newnode);
				(yyval) = *newnode;
			}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 364 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s, %s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, string(codegen_buf) };
					ParseNode * variablenode = new ParseNode();
					sprintf(codegen_buf, "%s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str());
					variablenode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
					variablenode->addchild(new ParseNode((yyvsp[(1) - (3)]))); // type
					FlexState fs; fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string("void") };
					variablenode->addchild(new ParseNode(fs, newnode)); // dummy initial
					newnode->addchild(variablenode);
				newnode->addchild(new ParseNode((yyvsp[(3) - (3)]))); // paramtable
				newnode = flattern(newnode);
				(yyval) = *newnode;
			}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 380 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "%s = %s, %s", (yyvsp[(1) - (5)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (5)]).fs.CurrentTerm.what.c_str(), (yyvsp[(5) - (5)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, string(codegen_buf) };
					ParseNode * variablenode = new ParseNode();
					sprintf(codegen_buf, "%s", (yyvsp[(1) - (5)]).fs.CurrentTerm.what.c_str());
					variablenode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
					variablenode->addchild(new ParseNode((yyvsp[(1) - (5)]))); // type
					variablenode->addchild(new ParseNode((yyvsp[(3) - (5)]))); // initial
					newnode->addchild(variablenode);
				newnode->addchild(new ParseNode((yyvsp[(5) - (5)]))); // paramtable
				newnode = flattern(newnode);
				(yyval) = *newnode;
			}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 396 "for90.y"
    {
				/* argtable is used in function call */
			}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 404 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "if (%s) {\n%s}", (yyvsp[(2) - (8)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(5) - (8)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (8)]))); // if
				newnode->addchild(new ParseNode((yyvsp[(2) - (8)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(5) - (8)]))); // suite
				(yyval) = *newnode;
			}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 414 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "if (%s) {\n%s}\nelse {\n %s}", (yyvsp[(2) - (11)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(5) - (11)]).fs.CurrentTerm.what).c_str(), tabber((yyvsp[(8) - (11)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (11)]))); // if
				newnode->addchild(new ParseNode((yyvsp[(2) - (11)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(5) - (11)]))); // suite
				newnode->addchild(new ParseNode((yyvsp[(6) - (11)]))); // else
				newnode->addchild(new ParseNode((yyvsp[(8) - (11)]))); // else-stmt
				(yyval) = *newnode;
			}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 426 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "if (%s) {\n%s}\n%s", (yyvsp[(2) - (9)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(5) - (9)]).fs.CurrentTerm.what).c_str(), (yyvsp[(6) - (9)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (9)]))); // if
				newnode->addchild(new ParseNode((yyvsp[(2) - (9)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(5) - (9)]))); // suite
				newnode->addchild(new ParseNode((yyvsp[(6) - (9)]))); // recursive elseif-stmt
				(yyval) = *newnode;
			}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 437 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "if (%s) {\n%s}\nelse {\n%s}%s", (yyvsp[(1) - (11)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(3) - (11)]).fs.CurrentTerm.what).c_str(), tabber((yyvsp[(6) - (11)]).fs.CurrentTerm.what).c_str(), (yyvsp[(9) - (11)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (11)]))); // if
				newnode->addchild(new ParseNode((yyvsp[(2) - (11)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(5) - (11)]))); // suite
				newnode->addchild(new ParseNode((yyvsp[(6) - (11)]))); // recursive elseif-stmt
				newnode->addchild(new ParseNode((yyvsp[(9) - (11)]))); // else-stmt
				(yyval) = *newnode;
			}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 449 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "else if(%s) {\n%s}", (yyvsp[(2) - (5)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(5) - (5)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (5)]))); // elseif
				newnode->addchild(new ParseNode((yyvsp[(2) - (5)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(5) - (5)]))); // suite
				(yyval) = *newnode;
			}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 460 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "else if{\n%s}\n%s", (yyvsp[(2) - (6)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(5) - (6)]).fs.CurrentTerm.what).c_str(), (yyvsp[(6) - (6)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (6)]))); // elseif
				newnode->addchild(new ParseNode((yyvsp[(2) - (6)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(5) - (6)]))); // suite
				newnode->addchild(new ParseNode((yyvsp[(6) - (6)]))); // another elseif-stmt
				(yyval) = *newnode;
			}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 471 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "do{\n%s}", tabber((yyvsp[(3) - (6)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (6)]))); // do
				newnode->addchild(new ParseNode((yyvsp[(3) - (6)]))); // suite
				(yyval) = *newnode;
			}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 480 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "for(%s = %s; %s < %s; %s++){\n%s}", (yyvsp[(2) - (10)]).fs.CurrentTerm.what.c_str(), (yyvsp[(4) - (10)]).fs.CurrentTerm.what.c_str(), (yyvsp[(2) - (10)]).fs.CurrentTerm.what.c_str(), (yyvsp[(6) - (10)]).fs.CurrentTerm.what.c_str(), (yyvsp[(2) - (10)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(8) - (10)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (10)]))); // do
				newnode->addchild(new ParseNode((yyvsp[(2) - (10)]))); // varname
				newnode->addchild(new ParseNode((yyvsp[(4) - (10)]))); // begin
				newnode->addchild(new ParseNode((yyvsp[(6) - (10)]))); // end
				newnode->addchild(new ParseNode((yyvsp[(8) - (10)]))); // suite
				(yyval) = *newnode;
			}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 492 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				sprintf(codegen_buf, "for(%s = %s; %s < %s; %s+=%s){\n%s}", (yyvsp[(2) - (12)]).fs.CurrentTerm.what.c_str(), (yyvsp[(4) - (12)]).fs.CurrentTerm.what.c_str(), (yyvsp[(2) - (12)]).fs.CurrentTerm.what.c_str(), (yyvsp[(6) - (12)]).fs.CurrentTerm.what.c_str(), (yyvsp[(2) - (12)]).fs.CurrentTerm.what.c_str(), (yyvsp[(8) - (12)]).fs.CurrentTerm.what.c_str(), tabber((yyvsp[(9) - (12)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				newnode->addchild(new ParseNode((yyvsp[(1) - (12)]))); // do
				newnode->addchild(new ParseNode((yyvsp[(2) - (12)]))); // varname
				newnode->addchild(new ParseNode((yyvsp[(4) - (12)]))); // begin
				newnode->addchild(new ParseNode((yyvsp[(6) - (12)]))); // end
				newnode->addchild(new ParseNode((yyvsp[(8) - (12)]))); // step
				newnode->addchild(new ParseNode((yyvsp[(9) - (12)]))); // suite
				(yyval) = *newnode;
			}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 514 "for90.y"
    { 
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(3) - (6)])));
				program_tree = *newnode;
			}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 520 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(2) - (4)])));
				program_tree = *newnode;
			}
    break;


/* Line 1792 of yacc.c  */
#line 2207 "for90.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


/* Line 2055 of yacc.c  */
#line 526 "for90.y"

//extern "C" int yylex();

void yyerror(const char* s)
{
	fprintf(stderr, "%s\n", s);
}
string tabber(string & src) {
	string newline;
	string ans = "";
	std::istringstream f(src);
	while (getline(f, newline) ) {
		ans += '\t';
		ans += newline;
		ans += '\n';
	}
	return ans;
}
ParseNode * flattern(ParseNode * pn) {
	/* it cant work well because it create a whole noew tree copy too much */
	if (pn->child.size() == 2) {
		ParseNode * newp = new ParseNode();
		newp->addchild(new ParseNode(*pn->child[0]));
		for (int i = 0; i < pn->child[1]->child.size(); i++)
		{
			newp->addchild(new ParseNode(*pn->child[1]->child[i]));
		}
		newp->fs = pn->fs;
		newp->father = pn->father;
		delete pn;
		return newp;
	}
	else {
		return pn;
	}
}
int parse(std::string code) {
#ifdef USE_YACC
	set_buff(code);
	yyparse();
	release_buff();
#endif
	return 0;
}