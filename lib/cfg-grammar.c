/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         main_parse
#define yylex           main_lex
#define yyerror         main_error
#define yydebug         main_debug
#define yynerrs         main_nerrs


/* Copy the first part of user declarations.  */

#line 73 "lib/cfg-grammar.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_MAIN_LIB_CFG_GRAMMAR_H_INCLUDED
# define YY_MAIN_LIB_CFG_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int main_debug;
#endif
/* "%code requires" blocks.  */
#line 25 "lib/cfg-grammar.y" /* yacc.c:355  */


/* this block is inserted into cfg-grammar.h, so it is included
   practically all of the syslog-ng code. Please add headers here
   with care. If you need additional headers, please look for a
   massive list of includes further below. */

/* YYSTYPE and YYLTYPE is defined by the lexer */
#include "cfg-lexer.h"
#include "afinter.h"
#include "type-hinting.h"
#include "filter/filter-expr-parser.h"
#include "filter/filter-pipe.h"
#include "parser/parser-expr-parser.h"
#include "rewrite/rewrite-expr-parser.h"
#include "logmatcher.h"
#include "logthrdestdrv.h"

/* uses struct declarations instead of the typedefs to avoid having to
 * include logreader/logwriter/driver.h, which defines the typedefs.  This
 * is to avoid including unnecessary dependencies into grammars that are not
 * themselves reader/writer based */

extern struct _LogSourceOptions *last_source_options;
extern struct _LogReaderOptions *last_reader_options;
extern struct _LogProtoServerOptions *last_proto_server_options;
extern struct _LogWriterOptions *last_writer_options;
extern struct _FilePermOptions *last_file_perm_options;
extern struct _MsgFormatOptions *last_msg_format_options;
extern struct _LogDriver *last_driver;
extern struct _LogParser *last_parser;
extern struct _LogTemplateOptions *last_template_options;
extern struct _LogTemplate *last_template;
extern struct _ValuePairs *last_value_pairs;
extern struct _ValuePairsTransformSet *last_vp_transset;
extern struct _LogMatcherOptions *last_matcher_options;
extern struct _HostResolveOptions *last_host_resolve_options;
extern struct _StatsOptions *last_stats_options;


#line 144 "lib/cfg-grammar.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LL_CONTEXT_ROOT = 1,
    LL_CONTEXT_DESTINATION = 2,
    LL_CONTEXT_SOURCE = 3,
    LL_CONTEXT_PARSER = 4,
    LL_CONTEXT_REWRITE = 5,
    LL_CONTEXT_FILTER = 6,
    LL_CONTEXT_LOG = 7,
    LL_CONTEXT_BLOCK_DEF = 8,
    LL_CONTEXT_BLOCK_REF = 9,
    LL_CONTEXT_BLOCK_CONTENT = 10,
    LL_CONTEXT_BLOCK_ARG = 11,
    LL_CONTEXT_PRAGMA = 12,
    LL_CONTEXT_FORMAT = 13,
    LL_CONTEXT_TEMPLATE_FUNC = 14,
    LL_CONTEXT_INNER_DEST = 15,
    LL_CONTEXT_INNER_SRC = 16,
    LL_CONTEXT_CLIENT_PROTO = 17,
    LL_CONTEXT_SERVER_PROTO = 18,
    KW_SOURCE = 10000,
    KW_FILTER = 10001,
    KW_PARSER = 10002,
    KW_DESTINATION = 10003,
    KW_LOG = 10004,
    KW_OPTIONS = 10005,
    KW_INCLUDE = 10006,
    KW_BLOCK = 10007,
    KW_JUNCTION = 10008,
    KW_CHANNEL = 10009,
    KW_INTERNAL = 10010,
    KW_FILE = 10011,
    KW_SYSLOG = 10060,
    KW_MARK_FREQ = 10071,
    KW_STATS_FREQ = 10072,
    KW_STATS_LEVEL = 10073,
    KW_STATS_LIFETIME = 10074,
    KW_FLUSH_LINES = 10075,
    KW_SUPPRESS = 10076,
    KW_FLUSH_TIMEOUT = 10077,
    KW_LOG_MSG_SIZE = 10078,
    KW_FILE_TEMPLATE = 10079,
    KW_PROTO_TEMPLATE = 10080,
    KW_MARK_MODE = 10081,
    KW_ENCODING = 10082,
    KW_TYPE = 10083,
    KW_CHAIN_HOSTNAMES = 10090,
    KW_NORMALIZE_HOSTNAMES = 10091,
    KW_KEEP_HOSTNAME = 10092,
    KW_CHECK_HOSTNAME = 10093,
    KW_BAD_HOSTNAME = 10094,
    KW_KEEP_TIMESTAMP = 10100,
    KW_USE_DNS = 10110,
    KW_USE_FQDN = 10111,
    KW_CUSTOM_DOMAIN = 10112,
    KW_DNS_CACHE = 10120,
    KW_DNS_CACHE_SIZE = 10121,
    KW_DNS_CACHE_EXPIRE = 10130,
    KW_DNS_CACHE_EXPIRE_FAILED = 10131,
    KW_DNS_CACHE_HOSTS = 10132,
    KW_PERSIST_ONLY = 10140,
    KW_USE_RCPTID = 10141,
    KW_USE_UNIQID = 10142,
    KW_TZ_CONVERT = 10150,
    KW_TS_FORMAT = 10151,
    KW_FRAC_DIGITS = 10152,
    KW_LOG_FIFO_SIZE = 10160,
    KW_LOG_FETCH_LIMIT = 10162,
    KW_LOG_IW_SIZE = 10163,
    KW_LOG_PREFIX = 10164,
    KW_PROGRAM_OVERRIDE = 10165,
    KW_HOST_OVERRIDE = 10166,
    KW_THROTTLE = 10170,
    KW_THREADED = 10171,
    KW_PASS_UNIX_CREDENTIALS = 10231,
    KW_FLAGS = 10190,
    KW_PAD_SIZE = 10200,
    KW_TIME_ZONE = 10201,
    KW_RECV_TIME_ZONE = 10202,
    KW_SEND_TIME_ZONE = 10203,
    KW_LOCAL_TIME_ZONE = 10204,
    KW_FORMAT = 10205,
    KW_TIME_REOPEN = 10210,
    KW_TIME_REAP = 10211,
    KW_TIME_SLEEP = 10212,
    KW_TMPL_ESCAPE = 10220,
    KW_OPTIONAL = 10230,
    KW_CREATE_DIRS = 10240,
    KW_OWNER = 10250,
    KW_GROUP = 10251,
    KW_PERM = 10252,
    KW_DIR_OWNER = 10260,
    KW_DIR_GROUP = 10261,
    KW_DIR_PERM = 10262,
    KW_TEMPLATE = 10270,
    KW_TEMPLATE_ESCAPE = 10271,
    KW_TEMPLATE_FUNCTION = 10272,
    KW_DEFAULT_FACILITY = 10300,
    KW_DEFAULT_LEVEL = 10301,
    KW_PORT = 10323,
    KW_USE_TIME_RECVD = 10340,
    KW_FACILITY = 10350,
    KW_LEVEL = 10351,
    KW_HOST = 10352,
    KW_MATCH = 10353,
    KW_MESSAGE = 10354,
    KW_NETMASK = 10355,
    KW_TAGS = 10356,
    KW_NETMASK6 = 10357,
    KW_REWRITE = 10370,
    KW_YES = 10380,
    KW_NO = 10381,
    KW_IFDEF = 10410,
    KW_ENDIF = 10411,
    LL_DOTDOT = 10420,
    LL_IDENTIFIER = 10421,
    LL_NUMBER = 10422,
    LL_FLOAT = 10423,
    LL_STRING = 10424,
    LL_TOKEN = 10425,
    LL_BLOCK = 10426,
    LL_PRAGMA = 10427,
    LL_EOL = 10428,
    LL_ERROR = 10429,
    KW_VALUE_PAIRS = 10500,
    KW_SELECT = 10501,
    KW_EXCLUDE = 10502,
    KW_PAIR = 10503,
    KW_KEY = 10504,
    KW_SCOPE = 10505,
    KW_SHIFT = 10506,
    KW_REKEY = 10507,
    KW_ADD_PREFIX = 10508,
    KW_REPLACE_PREFIX = 10509,
    KW_ON_ERROR = 10510,
    KW_RETRIES = 10511
  };
#endif
/* Tokens.  */
#define LL_CONTEXT_ROOT 1
#define LL_CONTEXT_DESTINATION 2
#define LL_CONTEXT_SOURCE 3
#define LL_CONTEXT_PARSER 4
#define LL_CONTEXT_REWRITE 5
#define LL_CONTEXT_FILTER 6
#define LL_CONTEXT_LOG 7
#define LL_CONTEXT_BLOCK_DEF 8
#define LL_CONTEXT_BLOCK_REF 9
#define LL_CONTEXT_BLOCK_CONTENT 10
#define LL_CONTEXT_BLOCK_ARG 11
#define LL_CONTEXT_PRAGMA 12
#define LL_CONTEXT_FORMAT 13
#define LL_CONTEXT_TEMPLATE_FUNC 14
#define LL_CONTEXT_INNER_DEST 15
#define LL_CONTEXT_INNER_SRC 16
#define LL_CONTEXT_CLIENT_PROTO 17
#define LL_CONTEXT_SERVER_PROTO 18
#define KW_SOURCE 10000
#define KW_FILTER 10001
#define KW_PARSER 10002
#define KW_DESTINATION 10003
#define KW_LOG 10004
#define KW_OPTIONS 10005
#define KW_INCLUDE 10006
#define KW_BLOCK 10007
#define KW_JUNCTION 10008
#define KW_CHANNEL 10009
#define KW_INTERNAL 10010
#define KW_FILE 10011
#define KW_SYSLOG 10060
#define KW_MARK_FREQ 10071
#define KW_STATS_FREQ 10072
#define KW_STATS_LEVEL 10073
#define KW_STATS_LIFETIME 10074
#define KW_FLUSH_LINES 10075
#define KW_SUPPRESS 10076
#define KW_FLUSH_TIMEOUT 10077
#define KW_LOG_MSG_SIZE 10078
#define KW_FILE_TEMPLATE 10079
#define KW_PROTO_TEMPLATE 10080
#define KW_MARK_MODE 10081
#define KW_ENCODING 10082
#define KW_TYPE 10083
#define KW_CHAIN_HOSTNAMES 10090
#define KW_NORMALIZE_HOSTNAMES 10091
#define KW_KEEP_HOSTNAME 10092
#define KW_CHECK_HOSTNAME 10093
#define KW_BAD_HOSTNAME 10094
#define KW_KEEP_TIMESTAMP 10100
#define KW_USE_DNS 10110
#define KW_USE_FQDN 10111
#define KW_CUSTOM_DOMAIN 10112
#define KW_DNS_CACHE 10120
#define KW_DNS_CACHE_SIZE 10121
#define KW_DNS_CACHE_EXPIRE 10130
#define KW_DNS_CACHE_EXPIRE_FAILED 10131
#define KW_DNS_CACHE_HOSTS 10132
#define KW_PERSIST_ONLY 10140
#define KW_USE_RCPTID 10141
#define KW_USE_UNIQID 10142
#define KW_TZ_CONVERT 10150
#define KW_TS_FORMAT 10151
#define KW_FRAC_DIGITS 10152
#define KW_LOG_FIFO_SIZE 10160
#define KW_LOG_FETCH_LIMIT 10162
#define KW_LOG_IW_SIZE 10163
#define KW_LOG_PREFIX 10164
#define KW_PROGRAM_OVERRIDE 10165
#define KW_HOST_OVERRIDE 10166
#define KW_THROTTLE 10170
#define KW_THREADED 10171
#define KW_PASS_UNIX_CREDENTIALS 10231
#define KW_FLAGS 10190
#define KW_PAD_SIZE 10200
#define KW_TIME_ZONE 10201
#define KW_RECV_TIME_ZONE 10202
#define KW_SEND_TIME_ZONE 10203
#define KW_LOCAL_TIME_ZONE 10204
#define KW_FORMAT 10205
#define KW_TIME_REOPEN 10210
#define KW_TIME_REAP 10211
#define KW_TIME_SLEEP 10212
#define KW_TMPL_ESCAPE 10220
#define KW_OPTIONAL 10230
#define KW_CREATE_DIRS 10240
#define KW_OWNER 10250
#define KW_GROUP 10251
#define KW_PERM 10252
#define KW_DIR_OWNER 10260
#define KW_DIR_GROUP 10261
#define KW_DIR_PERM 10262
#define KW_TEMPLATE 10270
#define KW_TEMPLATE_ESCAPE 10271
#define KW_TEMPLATE_FUNCTION 10272
#define KW_DEFAULT_FACILITY 10300
#define KW_DEFAULT_LEVEL 10301
#define KW_PORT 10323
#define KW_USE_TIME_RECVD 10340
#define KW_FACILITY 10350
#define KW_LEVEL 10351
#define KW_HOST 10352
#define KW_MATCH 10353
#define KW_MESSAGE 10354
#define KW_NETMASK 10355
#define KW_TAGS 10356
#define KW_NETMASK6 10357
#define KW_REWRITE 10370
#define KW_YES 10380
#define KW_NO 10381
#define KW_IFDEF 10410
#define KW_ENDIF 10411
#define LL_DOTDOT 10420
#define LL_IDENTIFIER 10421
#define LL_NUMBER 10422
#define LL_FLOAT 10423
#define LL_STRING 10424
#define LL_TOKEN 10425
#define LL_BLOCK 10426
#define LL_PRAGMA 10427
#define LL_EOL 10428
#define LL_ERROR 10429
#define KW_VALUE_PAIRS 10500
#define KW_SELECT 10501
#define KW_EXCLUDE 10502
#define KW_PAIR 10503
#define KW_KEY 10504
#define KW_SCOPE 10505
#define KW_SHIFT 10506
#define KW_REKEY 10507
#define KW_ADD_PREFIX 10508
#define KW_REPLACE_PREFIX 10509
#define KW_ON_ERROR 10510
#define KW_RETRIES 10511

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int main_parse (CfgLexer *lexer, gpointer *dummy, gpointer arg);

#endif /* !YY_MAIN_LIB_CFG_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 447 "lib/cfg-grammar.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 80 "lib/cfg-grammar.y" /* yacc.c:359  */


# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
  do {                                                                  \
    if (N)                                                              \
      {                                                                 \
        (Current).level = YYRHSLOC(Rhs, 1).level;                       \
        (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;          \
        (Current).first_column = YYRHSLOC (Rhs, 1).first_column;        \
        (Current).last_line    = YYRHSLOC (Rhs, N).last_line;           \
        (Current).last_column  = YYRHSLOC (Rhs, N).last_column;         \
      }                                                                 \
    else                                                                \
      {                                                                 \
        (Current).level = YYRHSLOC(Rhs, 0).level;                       \
        (Current).first_line   = (Current).last_line   =                \
          YYRHSLOC (Rhs, 0).last_line;                                  \
        (Current).first_column = (Current).last_column =                \
          YYRHSLOC (Rhs, 0).last_column;                                \
      }                                                                 \
  } while (0)

#define CHECK_ERROR_WITHOUT_MESSAGE(val, token) do {                    \
    if (!(val))                                                         \
      {                                                                 \
        YYERROR;                                                        \
      }                                                                 \
  } while (0)

#define CHECK_ERROR(val, token, errorfmt, ...) do {                     \
    if (!(val))                                                         \
      {                                                                 \
        if (errorfmt)                                                   \
          {                                                             \
            gchar __buf[256];                                           \
            g_snprintf(__buf, sizeof(__buf), errorfmt, ## __VA_ARGS__); \
            yyerror(& (token), lexer, NULL, NULL, __buf);               \
          }                                                             \
        YYERROR;                                                        \
      }                                                                 \
  } while (0)

#define CHECK_ERROR_GERROR(val, token, error, errorfmt, ...) do {       \
    if (!(val))                                                         \
      {                                                                 \
        if (errorfmt)                                                   \
          {                                                             \
            gchar __buf[256];                                           \
            g_snprintf(__buf, sizeof(__buf), errorfmt ", error=%s", ## __VA_ARGS__, error->message); \
            yyerror(& (token), lexer, NULL, NULL, __buf);               \
          }                                                             \
        g_clear_error(&error);						\
        YYERROR;                                                        \
      }                                                                 \
  } while (0)

#define YYMAXDEPTH 20000


#line 331 "lib/cfg-grammar.y" /* yacc.c:359  */


#include "cfg-parser.h"
#include "cfg.h"
#include "cfg-tree.h"
#include "template/templates.h"
#include "template/user-function.h"
#include "logreader.h"
#include "parser/parser-expr.h"
#include "rewrite/rewrite-expr.h"
#include "rewrite/rewrite-expr-parser.h"
#include "filter/filter-expr-parser.h"
#include "value-pairs/value-pairs.h"
#include "file-perms.h"
#include "block-ref-parser.h"
#include "plugin.h"
#include "logwriter.h"
#include "messages.h"

#include "syslog-names.h"

#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cfg-grammar.h"

LogDriver *last_driver;
LogParser *last_parser;
LogSourceOptions *last_source_options;
LogProtoServerOptions *last_proto_server_options;
LogReaderOptions *last_reader_options;
LogWriterOptions *last_writer_options;
MsgFormatOptions *last_msg_format_options;
FilePermOptions *last_file_perm_options;
LogTemplateOptions *last_template_options;
LogTemplate *last_template;
CfgArgs *last_block_args;
ValuePairs *last_value_pairs;
ValuePairsTransformSet *last_vp_transset;
LogMatcherOptions *last_matcher_options;
HostResolveOptions *last_host_resolve_options;
StatsOptions *last_stats_options;


#line 556 "lib/cfg-grammar.c" /* yacc.c:359  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   10512

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     140,   141,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   142,   137,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,     2,   139,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     2,     2,     2,     2,     2,     2,
      47,    48,    49,    50,    51,     2,     2,     2,     2,     2,
      52,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    55,     2,     2,     2,     2,     2,     2,     2,
      56,    57,     2,     2,     2,     2,     2,     2,     2,     2,
      58,    59,    60,     2,     2,     2,     2,     2,     2,     2,
      61,    62,    63,     2,     2,     2,     2,     2,     2,     2,
      64,    65,    66,     2,     2,     2,     2,     2,     2,     2,
      67,     2,    68,    69,    70,    71,    72,     2,     2,     2,
      73,    74,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      76,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      77,    78,    79,    80,    81,    82,     2,     2,     2,     2,
      83,    84,    85,     2,     2,     2,     2,     2,     2,     2,
      86,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      87,    75,     2,     2,     2,     2,     2,     2,     2,     2,
      88,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      89,    90,    91,     2,     2,     2,     2,     2,     2,     2,
      92,    93,    94,     2,     2,     2,     2,     2,     2,     2,
      95,    96,    97,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      98,    99,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     101,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     102,   103,   104,   105,   106,   107,   108,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     110,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     111,   112,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     113,   114,     2,     2,     2,     2,     2,     2,     2,     2,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   448,   448,   452,   453,   457,   461,   462,   463,   464,
     468,   469,   470,   471,   472,   473,   484,   491,   500,   517,
     525,   533,   535,   532,   544,   573,   575,   573,   582,   583,
     584,   588,   589,   593,   612,   616,   616,   624,   625,   629,
     634,   645,   655,   664,   666,   664,   682,   683,   684,   688,
     692,   711,   712,   716,   717,   718,   719,   720,   721,   722,
     723,   724,   725,   726,   730,   741,   746,   747,   751,   752,
     756,   760,   761,   765,   766,   772,   776,   780,   789,   790,
     795,   794,   803,   802,   811,   810,   818,   819,   825,   832,
     851,   852,   858,   860,   861,   857,   881,   882,   887,   886,
     898,   899,   903,   904,   905,   906,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,   948,   949,   950,   951,   952,   952,   953,   953,   954,
     954,   958,   959,   960,   967,   968,   972,   973,   974,   978,
     979,   983,   984,   985,   989,   993,   994,   998,   999,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1048,  1067,
    1068,  1069,  1070,  1197,  1198,  1198,  1199,  1200,  1201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LL_CONTEXT_ROOT",
  "LL_CONTEXT_DESTINATION", "LL_CONTEXT_SOURCE", "LL_CONTEXT_PARSER",
  "LL_CONTEXT_REWRITE", "LL_CONTEXT_FILTER", "LL_CONTEXT_LOG",
  "LL_CONTEXT_BLOCK_DEF", "LL_CONTEXT_BLOCK_REF",
  "LL_CONTEXT_BLOCK_CONTENT", "LL_CONTEXT_BLOCK_ARG", "LL_CONTEXT_PRAGMA",
  "LL_CONTEXT_FORMAT", "LL_CONTEXT_TEMPLATE_FUNC", "LL_CONTEXT_INNER_DEST",
  "LL_CONTEXT_INNER_SRC", "LL_CONTEXT_CLIENT_PROTO",
  "LL_CONTEXT_SERVER_PROTO", "KW_SOURCE", "KW_FILTER", "KW_PARSER",
  "KW_DESTINATION", "KW_LOG", "KW_OPTIONS", "KW_INCLUDE", "KW_BLOCK",
  "KW_JUNCTION", "KW_CHANNEL", "KW_INTERNAL", "KW_FILE", "KW_SYSLOG",
  "KW_MARK_FREQ", "KW_STATS_FREQ", "KW_STATS_LEVEL", "KW_STATS_LIFETIME",
  "KW_FLUSH_LINES", "KW_SUPPRESS", "KW_FLUSH_TIMEOUT", "KW_LOG_MSG_SIZE",
  "KW_FILE_TEMPLATE", "KW_PROTO_TEMPLATE", "KW_MARK_MODE", "KW_ENCODING",
  "KW_TYPE", "KW_CHAIN_HOSTNAMES", "KW_NORMALIZE_HOSTNAMES",
  "KW_KEEP_HOSTNAME", "KW_CHECK_HOSTNAME", "KW_BAD_HOSTNAME",
  "KW_KEEP_TIMESTAMP", "KW_USE_DNS", "KW_USE_FQDN", "KW_CUSTOM_DOMAIN",
  "KW_DNS_CACHE", "KW_DNS_CACHE_SIZE", "KW_DNS_CACHE_EXPIRE",
  "KW_DNS_CACHE_EXPIRE_FAILED", "KW_DNS_CACHE_HOSTS", "KW_PERSIST_ONLY",
  "KW_USE_RCPTID", "KW_USE_UNIQID", "KW_TZ_CONVERT", "KW_TS_FORMAT",
  "KW_FRAC_DIGITS", "KW_LOG_FIFO_SIZE", "KW_LOG_FETCH_LIMIT",
  "KW_LOG_IW_SIZE", "KW_LOG_PREFIX", "KW_PROGRAM_OVERRIDE",
  "KW_HOST_OVERRIDE", "KW_THROTTLE", "KW_THREADED",
  "KW_PASS_UNIX_CREDENTIALS", "KW_FLAGS", "KW_PAD_SIZE", "KW_TIME_ZONE",
  "KW_RECV_TIME_ZONE", "KW_SEND_TIME_ZONE", "KW_LOCAL_TIME_ZONE",
  "KW_FORMAT", "KW_TIME_REOPEN", "KW_TIME_REAP", "KW_TIME_SLEEP",
  "KW_TMPL_ESCAPE", "KW_OPTIONAL", "KW_CREATE_DIRS", "KW_OWNER",
  "KW_GROUP", "KW_PERM", "KW_DIR_OWNER", "KW_DIR_GROUP", "KW_DIR_PERM",
  "KW_TEMPLATE", "KW_TEMPLATE_ESCAPE", "KW_TEMPLATE_FUNCTION",
  "KW_DEFAULT_FACILITY", "KW_DEFAULT_LEVEL", "KW_PORT",
  "KW_USE_TIME_RECVD", "KW_FACILITY", "KW_LEVEL", "KW_HOST", "KW_MATCH",
  "KW_MESSAGE", "KW_NETMASK", "KW_TAGS", "KW_NETMASK6", "KW_REWRITE",
  "KW_YES", "KW_NO", "KW_IFDEF", "KW_ENDIF", "LL_DOTDOT", "LL_IDENTIFIER",
  "LL_NUMBER", "LL_FLOAT", "LL_STRING", "LL_TOKEN", "LL_BLOCK",
  "LL_PRAGMA", "LL_EOL", "LL_ERROR", "KW_VALUE_PAIRS", "KW_SELECT",
  "KW_EXCLUDE", "KW_PAIR", "KW_KEY", "KW_SCOPE", "KW_SHIFT", "KW_REKEY",
  "KW_ADD_PREFIX", "KW_REPLACE_PREFIX", "KW_ON_ERROR", "KW_RETRIES", "';'",
  "'{'", "'}'", "'('", "')'", "':'", "$accept", "start", "stmts", "stmt",
  "expr_stmt", "source_stmt", "dest_stmt", "filter_stmt", "parser_stmt",
  "rewrite_stmt", "log_stmt", "$@1", "$@2", "plugin_stmt",
  "source_content", "$@5", "$@6", "source_items", "source_item",
  "source_plugin", "source_afinter", "source_afinter_params", "$@7",
  "source_afinter_options", "source_afinter_option", "filter_content",
  "parser_content", "rewrite_content", "dest_content", "$@8", "$@9",
  "dest_items", "dest_item", "dest_plugin", "log_items", "log_item",
  "log_junction", "log_last_junction", "log_forks", "log_fork",
  "log_content", "log_flags", "log_flags_items", "options_stmt",
  "template_stmt", "template_def", "template_block", "$@12",
  "template_simple", "$@13", "template_fn", "$@14", "template_items",
  "template_content_inner", "template_item", "block_stmt", "$@16", "$@17",
  "$@18", "block_args", "block_arg", "$@19", "options_items",
  "options_item", "$@20", "$@21", "$@22", "stat_option", "string", "yesno",
  "dnsmode", "string_or_number", "string_list", "string_list_build",
  "semicolons", "source_option", "$@23", "host_resolve_option",
  "template_option", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256, 10512,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18, 10000, 10001, 10002, 10003, 10004, 10005, 10006, 10007, 10008,
   10009, 10010, 10011, 10060, 10071, 10072, 10073, 10074, 10075, 10076,
   10077, 10078, 10079, 10080, 10081, 10082, 10083, 10090, 10091, 10092,
   10093, 10094, 10100, 10110, 10111, 10112, 10120, 10121, 10130, 10131,
   10132, 10140, 10141, 10142, 10150, 10151, 10152, 10160, 10162, 10163,
   10164, 10165, 10166, 10170, 10171, 10231, 10190, 10200, 10201, 10202,
   10203, 10204, 10205, 10210, 10211, 10212, 10220, 10230, 10240, 10250,
   10251, 10252, 10260, 10261, 10262, 10270, 10271, 10272, 10300, 10301,
   10323, 10340, 10350, 10351, 10352, 10353, 10354, 10355, 10356, 10357,
   10370, 10380, 10381, 10410, 10411, 10420, 10421, 10422, 10423, 10424,
   10425, 10426, 10427, 10428, 10429, 10500, 10501, 10502, 10503, 10504,
   10505, 10506, 10507, 10508, 10509, 10510, 10511,    59,   123,   125,
      40,    41,    58
};
# endif

#define YYPACT_NINF -217

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-217)))

#define YYTABLE_NINF -150

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,   -81,   -81,   -81,   -81,  -217,   -41,  -217,   -81,   -81,
     -81,  -217,    98,  -217,   -36,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,   -18,    -9,     0,     3,     4,    21,    23,    14,
    -217,    36,  -217,    24,  -217,  -217,  -217,  -217,   122,    19,
      35,    44,    48,    59,    61,    73,    74,    75,    76,    77,
      80,    81,    82,    83,    84,    85,    86,    88,    91,    95,
      96,    97,    99,   100,   101,   102,   103,   104,   105,   106,
     108,   109,   110,   111,   112,    22,   116,    92,   -20,   131,
     113,    64,   -34,   -34,  -217,  -217,    79,    -8,    94,   115,
     117,     7,    -5,    31,    45,    54,   120,    58,     1,   118,
    -217,   124,   121,   147,   148,   149,   150,   -81,   -81,   -17,
      20,    20,    20,   -81,    20,   -81,   152,   153,   154,   -81,
      20,    20,   155,   156,   159,    20,    20,   -81,   160,   161,
     162,    20,    46,    62,  -102,    89,    93,  -101,  -217,    21,
     140,   141,   142,   143,   144,   145,  -217,   146,   151,   157,
     158,  -217,   163,   164,   165,  -217,   166,   -54,   167,  -217,
    -217,  -217,   169,  -217,   171,   172,   173,  -217,  -217,   118,
    -217,  -217,   118,  -217,  -217,  -217,  -217,  -217,   118,  -217,
     118,  -217,   -81,  -217,   -81,  -217,   -81,  -217,   -81,     1,
    -217,   -81,   211,  -217,   118,   118,   122,  -217,   170,   176,
     177,   178,   179,   180,   181,   182,   183,  -217,  -217,  -217,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,  -217,  -217,  -217,  -217,   206,  -217,   207,   208,
    -217,  -217,   209,  -217,   210,   212,  -217,  -217,   -81,   175,
     -81,   -81,   -81,   -81,    20,    65,    20,    20,   235,   237,
     238,  -217,   217,   218,   220,   223,   -81,  -217,   122,   122,
    -217,  -217,    -8,    -8,  -217,     7,     7,   222,   221,   224,
     225,   226,   227,   228,   229,   230,   232,   231,   233,  -217,
       1,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,   234,   236,   240,   241,   242,   243,   244,  -217,  -217,
     245,   246,   247,   248,   249,   250,   174,   -34,    20,  -217,
     -54,   251,   239,   254,   253,    78,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,   -81,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,   255,   174,   256,
     257,  -217,  -217,  -217,  -217,  -217,   259,   260,   261,   262,
     263,   264,   265,   266,  -217,    78,  -217,   -20,   267,   -81,
     168,  -217,  -217,  -217,  -217,    20,    20,    20,   278,   -81,
     -81,   -81,   -81,  -217,  -217,   118,  -217,  -217,   258,   268,
     269,   270,   271,   272,   273,   274,   -81,   275,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,    21,     0,    92,     0,     0,
       0,    24,     0,     2,     0,     5,    10,    11,    12,    13,
      14,    15,     9,     7,     6,    76,    78,    79,    77,     8,
     154,   155,     0,     0,     0,     0,     0,   145,     0,    82,
      84,     0,     1,     4,    25,    40,    41,    43,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     3,     0,    30,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,    67,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,   145,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,   148,     0,     0,     0,   150,     0,    87,   154,    83,
      88,    85,     0,    16,     0,     0,     0,    33,    26,     0,
      32,    31,     0,    18,    19,    17,    50,    44,     0,    49,
       0,    25,     0,    40,     0,    41,     0,    43,     0,    67,
      42,     0,    72,    65,     0,   167,    52,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   157,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   162,   163,   126,   161,     0,   128,     0,     0,
     130,   132,     0,   134,     0,     0,   136,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,    20,    52,    52,
      35,    27,    30,    30,    45,    48,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      67,   168,    51,    23,   102,   103,   114,   106,   122,   142,
     143,   104,   105,   107,   108,   109,   110,   123,   137,   138,
     139,   140,   141,   117,   118,   119,   121,   120,   115,   116,
     144,   111,   112,   113,   124,   125,   127,   129,   131,   133,
     135,     0,     0,     0,     0,     0,     0,     0,   160,   159,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    81,
      87,     0,     0,     0,     0,   177,    28,    29,    46,    47,
      54,    53,    56,    55,    58,    57,    62,    61,    64,    60,
      59,    74,    66,   183,   184,   185,   186,   187,   188,   182,
     180,   179,   181,   151,   152,   153,    98,     0,    97,     0,
       0,    86,    89,    68,    69,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    36,   177,    39,     0,     0,    74,
       0,    94,    96,    90,    91,     0,     0,     0,     0,     0,
       0,     0,   166,    37,   178,     0,    73,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   166,     0,   164,    71,
      95,   170,   171,   175,   169,   174,   172,   173,   165,   176
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,   252,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,   216,  -217,  -217,  -216,  -217,  -217,
    -217,  -217,  -217,  -127,  -217,   107,   276,   219,   277,  -217,
    -217,  -199,  -217,  -217,    87,  -217,  -217,  -217,  -193,   -96,
    -185,  -217,  -125,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,   -64,   -89,  -217,  -217,  -217,  -217,  -217,   -99,
    -217,  -217,   215,  -217,  -217,  -217,  -217,  -217,    -1,  -111,
    -217,   -92,  -217,  -145,  -161,  -217,  -217,  -115,  -217
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    36,   303,    22,    96,    97,   281,   178,   179,   180,
     181,   364,   365,   414,   415,    98,    99,   172,   100,   101,
     284,   187,   188,   189,   108,   109,   110,   202,   203,   182,
     111,   299,   418,    23,    24,    25,    26,    91,    27,    92,
      28,    93,   274,   169,   275,    29,    38,   356,   438,   397,
     398,   420,    85,    86,    87,    88,    89,   165,   245,   220,
     350,   246,   447,   448,   206,   416,   417,   161,   156
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    33,    34,    35,   171,   190,   295,    39,    40,    41,
     221,   222,   204,   224,   215,   249,   255,   174,   282,   230,
     231,   283,   175,   176,   235,   236,   174,   285,   157,   286,
     241,   175,   174,   158,   159,    30,   160,   175,    31,   250,
     256,   272,   273,   300,   301,     1,     2,     3,     4,     5,
       6,   248,     7,   252,   254,    49,  -149,  -149,  -149,    50,
      51,    52,    53,    54,    55,    56,   366,   367,    57,  -147,
      58,    59,    60,    61,  -147,  -147,    62,  -147,    63,    64,
      65,    66,   168,    67,    68,    31,   368,   369,    69,    70,
      71,   170,   170,   362,   363,    72,    73,    37,    42,    30,
      74,    43,    31,   204,    75,    76,    77,   382,   177,    78,
      79,    80,    81,    82,    83,    84,   213,   214,   216,     8,
      44,     9,   223,   186,   225,   406,   348,   407,   229,    45,
     408,   217,   218,   191,    10,   192,   237,   219,    46,    90,
      11,    47,    48,   102,   103,   104,   105,   409,   410,   411,
     412,   106,   -80,   347,   349,   351,   352,   150,   151,   112,
    -101,   148,    30,   242,   243,    31,   162,   163,   164,   193,
     152,   194,   153,   154,    94,   113,   217,   218,    30,   242,
     243,    31,   219,   195,   114,   196,   413,   244,   115,   190,
     190,   288,   197,   290,   198,   292,   200,   294,   201,   116,
     297,   117,   167,   247,   204,    30,   242,   243,    31,    30,
     242,   243,    31,   118,   119,   120,   121,   122,   173,   -38,
     123,   124,   125,   126,   127,   128,   129,   155,   130,   166,
     251,   131,   107,   183,   253,   132,   133,   134,   208,   135,
     136,   137,   138,   139,   140,   141,   142,   400,   143,   144,
     145,   146,   147,   149,   184,   205,   185,   341,   199,   343,
     344,   345,   346,   207,   209,   210,   211,   212,   399,   226,
     227,   228,   232,   233,   449,   361,   234,   238,   239,   240,
     258,   259,   260,   261,   262,   263,   264,   298,   433,   437,
     396,   265,   342,   302,   436,    95,   401,   266,   267,   422,
     289,   458,   434,   268,   269,   270,   271,   276,   277,   278,
     279,   304,     0,   280,   439,   440,   441,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   353,   340,   354,   355,   170,   357,   358,   359,
     360,   370,   371,   372,   257,   374,   373,   376,   375,   378,
     377,   379,   380,   381,     0,   383,     0,   384,   403,   450,
     419,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   402,   404,   405,   442,   421,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   287,   435,   451,
     452,   453,   454,   455,   456,   457,   459,     0,   419,   296,
       0,     0,     0,     0,     0,     0,     0,     0,   443,   444,
     445,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,     0,     0,   293
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     4,    93,   101,   199,     8,     9,    10,
     121,   122,   108,   124,    31,   117,   117,    25,   179,   130,
     131,   182,    30,    31,   135,   136,    25,   188,    48,   190,
     141,    30,    25,    53,    54,   116,    56,    30,   119,   141,
     141,    95,    96,   204,   205,    21,    22,    23,    24,    25,
      26,   143,    28,   145,   146,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   282,   283,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   116,    62,    63,   119,   285,   286,    67,    68,
      69,    92,    93,   278,   279,    74,    75,   138,     0,   116,
      79,   137,   119,   199,    83,    84,    85,   300,   116,    88,
      89,    90,    91,    92,    93,    94,   117,   118,   119,    95,
     138,    97,   123,   116,   125,    47,    61,    49,   129,   138,
      52,   111,   112,   138,   110,   140,   137,   117,   138,   116,
     116,   138,   138,    21,    22,    23,    24,    69,    70,    71,
      72,    29,   138,   264,   265,   266,   267,    65,    66,   140,
     139,   139,   116,   117,   118,   119,    35,    36,    37,   138,
      78,   140,    80,    81,   138,   140,   111,   112,   116,   117,
     118,   119,   117,   138,   140,   140,   108,   141,   140,   285,
     286,   192,   138,   194,   140,   196,   138,   198,   140,   140,
     201,   140,   138,   141,   300,   116,   117,   118,   119,   116,
     117,   118,   119,   140,   140,   140,   140,   140,   139,   141,
     140,   140,   140,   140,   140,   140,   140,   135,   140,   116,
     141,   140,   110,   139,   141,   140,   140,   140,   117,   140,
     140,   140,   140,   140,   140,   140,   140,   358,   140,   140,
     140,   140,   140,   137,   139,   137,   139,   258,   138,   260,
     261,   262,   263,   139,   117,   117,   117,   117,   357,   117,
     117,   117,   117,   117,   435,   276,   117,   117,   117,   117,
     140,   140,   140,   140,   140,   140,   140,    76,   415,   121,
     116,   140,   117,   206,   419,    43,   360,   140,   140,   398,
     193,   446,   417,   140,   140,   140,   140,   140,   139,   138,
     138,   141,    -1,   140,   425,   426,   427,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   117,   141,   117,   117,   357,   140,   140,   139,
     137,   139,   141,   139,   149,   139,   141,   139,   141,   139,
     141,   139,   141,   140,    -1,   141,    -1,   141,   139,   121,
     381,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   139,   141,   117,   141,   141,   141,   140,
     140,   140,   140,   140,   140,   140,   140,   191,   141,   141,
     141,   141,   141,   141,   141,   141,   141,    -1,   419,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,   197
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    26,    28,    95,    97,
     110,   116,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   156,   186,   187,   188,   189,   191,   193,   198,
     116,   119,   211,   211,   211,   211,   154,   138,   199,   211,
     211,   211,     0,   137,   138,   138,   138,   138,   138,    34,
      38,    39,    40,    41,    42,    43,    44,    47,    49,    50,
      51,    52,    55,    57,    58,    59,    60,    62,    63,    67,
      68,    69,    74,    75,    79,    83,    84,    85,    88,    89,
      90,    91,    92,    93,    94,   205,   206,   207,   208,   209,
     116,   190,   192,   194,   138,   145,   157,   158,   168,   169,
     171,   172,    21,    22,    23,    24,    29,   110,   177,   178,
     179,   183,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   139,   137,
      65,    66,    78,    80,    81,   135,   221,    48,    53,    54,
      56,   220,    35,    36,    37,   210,   116,   138,   116,   196,
     211,   196,   170,   139,    25,    30,    31,   116,   160,   161,
     162,   163,   182,   139,   139,   139,   116,   174,   175,   176,
     182,   138,   140,   138,   140,   138,   140,   138,   140,   138,
     138,   140,   180,   181,   182,   137,   217,   139,   117,   117,
     117,   117,   117,   211,   211,    31,   211,   111,   112,   117,
     212,   212,   212,   211,   212,   211,   117,   117,   117,   211,
     212,   212,   117,   117,   117,   212,   212,   211,   117,   117,
     117,   212,   117,   118,   141,   211,   214,   141,   214,   117,
     141,   141,   214,   141,   214,   117,   141,   205,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,    95,    96,   195,   197,   140,   139,   138,   138,
     140,   159,   217,   217,   173,   217,   217,   157,   211,   168,
     211,   169,   211,   171,   211,   181,   170,   211,    76,   184,
     217,   217,   177,   155,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   211,   117,   211,   211,   211,   211,   212,    61,   212,
     213,   212,   212,   117,   117,   117,   200,   140,   140,   139,
     137,   211,   183,   183,   164,   165,   160,   160,   174,   174,
     139,   141,   139,   141,   139,   141,   139,   141,   139,   139,
     141,   140,   181,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   116,   202,   203,   196,
     212,   195,   141,   139,   139,   141,    47,    49,    52,    69,
      70,    71,    72,   108,   166,   167,   218,   219,   185,   211,
     204,   141,   202,   141,   141,   140,   140,   140,   140,   140,
     140,   140,   140,   166,   220,   141,   185,   121,   201,   212,
     212,   212,   117,   211,   211,   211,   211,   215,   216,   217,
     121,   141,   141,   141,   141,   141,   141,   141,   216,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   143,   144,   145,   145,   146,   146,   146,   146,   146,
     147,   147,   147,   147,   147,   147,   148,   149,   150,   151,
     152,   154,   155,   153,   156,   158,   159,   157,   160,   160,
     160,   161,   161,   162,   163,   165,   164,   166,   166,   167,
     168,   169,   170,   172,   173,   171,   174,   174,   174,   175,
     176,   177,   177,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   179,   180,   181,   181,   182,   182,
     183,   184,   184,   185,   185,   186,   187,   187,   188,   188,
     190,   189,   192,   191,   194,   193,   195,   195,   196,   196,
     197,   197,   199,   200,   201,   198,   202,   202,   204,   203,
     205,   205,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   207,   206,   208,   206,   209,
     206,   210,   210,   210,   211,   211,   212,   212,   212,   213,
     213,   214,   214,   214,   215,   216,   216,   217,   217,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   218,   220,
     220,   220,   220,   221,   221,   221,   221,   221,   221
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     0,     0,     6,     1,     0,     0,     3,     3,     3,
       0,     1,     1,     1,     4,     0,     2,     2,     0,     1,
       0,     0,     0,     0,     0,     3,     3,     3,     0,     1,
       1,     3,     0,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     1,     4,     1,     3,     0,     4,     4,
       3,     5,     0,     2,     0,     4,     1,     1,     1,     1,
       0,     6,     0,     4,     0,     4,     3,     0,     1,     4,
       4,     4,     0,     0,     0,    10,     2,     0,     0,     3,
       3,     0,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     4,     3,     4,
       3,     4,     3,     4,     3,     4,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     2,     0,     2,     0,
       2,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      yyerror (&yylloc, lexer, dummy, arg, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, lexer, dummy, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (dummy);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, lexer, dummy, arg);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , lexer, dummy, arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, lexer, dummy, arg); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (dummy);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 116: /* LL_IDENTIFIER  */
#line 312 "lib/cfg-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 2834 "lib/cfg-grammar.c" /* yacc.c:1257  */
        break;

    case 119: /* LL_STRING  */
#line 312 "lib/cfg-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 2840 "lib/cfg-grammar.c" /* yacc.c:1257  */
        break;

    case 121: /* LL_BLOCK  */
#line 312 "lib/cfg-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 2846 "lib/cfg-grammar.c" /* yacc.c:1257  */
        break;

    case 211: /* string  */
#line 312 "lib/cfg-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 2852 "lib/cfg-grammar.c" /* yacc.c:1257  */
        break;

    case 214: /* string_or_number  */
#line 312 "lib/cfg-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 2858 "lib/cfg-grammar.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, lexer);
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
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 458 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(cfg_tree_add_object(&configuration->tree, (yyvsp[0].ptr)) || cfg_allow_config_dups(configuration), (yylsp[0]), "duplicate %s definition", log_expr_node_get_content_name(((LogExprNode *) (yyvsp[0].ptr))->content));
          }
#line 3154 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 485 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_source((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3163 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 492 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_destination((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3172 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 501 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            /* NOTE: the filter() subexpression (e.g. the one that invokes
             * one filter expression from another) depends on the layout
             * parsed into the cfg-tree when looking up the referenced
             * filter expression.  So when changing how a filter statement
             * is transformed into the cfg-tree, make sure you check
             * filter-call.c, especially filter_call_init() function as
             * well.
             */

            (yyval.ptr) = log_expr_node_new_filter((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3190 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 518 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_parser((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3199 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 526 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_rewrite((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3208 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 533 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_LOG, NULL, "log"); }
#line 3214 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 535 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_pop_context(lexer); }
#line 3220 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 536 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = (yyvsp[-2].ptr);
          }
#line 3228 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 545 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_ROOT;
            gpointer result;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            result = plugin_parse_config(p, configuration, &(yylsp[0]), NULL);
            free((yyvsp[0].cptr));
            if (!result)
              YYERROR;
            (yyval.ptr) = NULL;
          }
#line 3247 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 573 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_SOURCE, NULL, "source"); }
#line 3253 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 575 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_pop_context(lexer); }
#line 3259 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 576 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_junction((yyvsp[-1].ptr), &(yyloc));
          }
#line 3267 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 582 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail(log_expr_node_new_pipe((yyvsp[-2].ptr), &(yylsp[-2])), (yyvsp[0].ptr)); }
#line 3273 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 583 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail((yyvsp[-2].ptr),  (yyvsp[0].ptr)); }
#line 3279 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 584 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3285 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 588 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3291 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 589 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3297 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 594 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_SOURCE;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            last_driver = (LogDriver *) plugin_parse_config(p, configuration, &(yylsp[0]), NULL);
            free((yyvsp[0].cptr));
            if (!last_driver)
              {
                YYERROR;
              }
            (yyval.ptr) = last_driver;
          }
#line 3317 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 612 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 3323 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 616 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            last_driver = afinter_sd_new(configuration);
            last_source_options = &((AFInterSourceDriver *) last_driver)->source_options;
          }
#line 3332 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 620 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 3338 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 634 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            FilterExprNode *last_filter_expr = NULL;

	    CHECK_ERROR_WITHOUT_MESSAGE(cfg_parser_parse(&filter_expr_parser, lexer, (gpointer *) &last_filter_expr, NULL), (yyloc));

            (yyval.ptr) = log_expr_node_new_pipe(log_filter_pipe_new(last_filter_expr, configuration), &(yyloc));
	  }
#line 3350 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 645 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            LogExprNode *last_parser_expr = NULL;

            CHECK_ERROR_WITHOUT_MESSAGE(cfg_parser_parse(&parser_expr_parser, lexer, (gpointer *) &last_parser_expr, NULL), (yyloc));
            (yyval.ptr) = last_parser_expr;
          }
#line 3361 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 655 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            LogExprNode *last_rewrite_expr = NULL;

            CHECK_ERROR_WITHOUT_MESSAGE(cfg_parser_parse(&rewrite_expr_parser, lexer, (gpointer *) &last_rewrite_expr, NULL), (yyloc));
            (yyval.ptr) = last_rewrite_expr;
          }
#line 3372 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 664 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_DESTINATION, NULL, "destination"); }
#line 3378 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 666 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_pop_context(lexer); }
#line 3384 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 667 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
             (yyval.ptr) = log_expr_node_new_junction((yyvsp[-1].ptr), &(yyloc));
           }
#line 3392 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 682 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail(log_expr_node_new_pipe((yyvsp[-2].ptr), &(yylsp[-2])), (yyvsp[0].ptr)); }
#line 3398 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 683 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail((yyvsp[-2].ptr),  (yyvsp[0].ptr)); }
#line 3404 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 684 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3410 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 688 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3416 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 693 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_DESTINATION;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            last_driver = (LogDriver *) plugin_parse_config(p, configuration, &(yylsp[0]), NULL);
            free((yyvsp[0].cptr));
            if (!last_driver)
              {
                YYERROR;
              }
            (yyval.ptr) = last_driver;
          }
#line 3436 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 711 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { log_expr_node_append_tail((yyvsp[-2].ptr), (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr); }
#line 3442 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 712 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3448 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 716 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_source_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3454 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 717 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_source(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3460 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 718 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_filter_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3466 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 719 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_filter(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3472 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 720 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_parser_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3478 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 721 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_parser(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3484 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 722 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_rewrite_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3490 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 723 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_rewrite(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3496 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 724 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_destination_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3502 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 725 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_destination(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3508 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 726 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3514 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 730 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_junction((yyvsp[-1].ptr), &(yyloc)); }
#line 3520 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 65:
#line 741 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr) ? log_expr_node_new_junction((yyvsp[0].ptr), &(yylsp[0])) :  NULL; }
#line 3526 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 746 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { log_expr_node_append_tail((yyvsp[-2].ptr), (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr); }
#line 3532 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 747 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3538 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 751 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 3544 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 752 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 3550 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 70:
#line 756 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_log(log_expr_node_append_tail((yyvsp[-2].ptr), (yyvsp[-1].ptr)), (yyvsp[0].num), &(yyloc)); }
#line 3556 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 760 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num); }
#line 3562 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 72:
#line 761 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 3568 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 765 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = log_expr_node_lookup_flag((yyvsp[-1].cptr)) | (yyvsp[0].num); free((yyvsp[-1].cptr)); }
#line 3574 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 766 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 3580 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 777 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(cfg_tree_add_template(&configuration->tree, (yyvsp[0].ptr)) || cfg_allow_config_dups(configuration), (yylsp[0]), "duplicate template");
          }
#line 3588 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 781 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            user_template_function_register(configuration, last_template->name, last_template);
            log_template_unref(last_template);
            last_template = NULL;
          }
#line 3598 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 795 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
	    last_template = log_template_new(configuration, (yyvsp[0].cptr));
	  }
#line 3606 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 798 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_template; free((yyvsp[-4].cptr)); }
#line 3612 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 803 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
	    last_template = log_template_new(configuration, (yyvsp[0].cptr));
          }
#line 3620 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 806 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_template; free((yyvsp[-2].cptr)); }
#line 3626 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 811 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
	    last_template = log_template_new(configuration, (yyvsp[0].cptr));
          }
#line 3634 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 814 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_template; free((yyvsp[-2].cptr)); }
#line 3640 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 826 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
          GError *error = NULL;

          CHECK_ERROR(log_template_compile(last_template, (yyvsp[0].cptr), &error), (yylsp[0]), "Error compiling template (%s)", error->message);
          free((yyvsp[0].cptr));
        }
#line 3651 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 833 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
          GError *error = NULL;

          CHECK_ERROR(log_template_compile(last_template, (yyvsp[-1].cptr), &error), (yylsp[-1]), "Error compiling template (%s)", error->message);
          free((yyvsp[-1].cptr));

          CHECK_ERROR(log_template_set_type_hint(last_template, (yyvsp[-3].cptr), &error), (yylsp[-3]), "Error setting the template type-hint (%s)", error->message);
          free((yyvsp[-3].cptr));
        }
#line 3665 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 852 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { log_template_set_escape(last_template, (yyvsp[-1].num)); }
#line 3671 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 858 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_BLOCK_DEF, block_def_keywords, "block definition"); }
#line 3677 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 860 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_block_args = cfg_args_new(); }
#line 3683 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 861 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_BLOCK_CONTENT, NULL, "block content"); }
#line 3689 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 863 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            CfgBlock *block;

            /* block content */
            cfg_lexer_pop_context(lexer);
            /* block definition */
            cfg_lexer_pop_context(lexer);

            block = cfg_block_new((yyvsp[0].cptr), last_block_args);
            CHECK_ERROR(cfg_lexer_register_block_generator(lexer, cfg_lexer_lookup_context_type_by_name((yyvsp[-7].cptr)), (yyvsp[-6].cptr), cfg_block_generate, block, (GDestroyNotify) cfg_block_free) || cfg_allow_config_dups(configuration), (yylsp[-6]), "duplicate block definition");
            free((yyvsp[-7].cptr));
            free((yyvsp[-6].cptr));
            free((yyvsp[0].cptr));
            last_block_args = NULL;
          }
#line 3709 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 98:
#line 887 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            cfg_lexer_push_context(lexer, LL_CONTEXT_BLOCK_ARG, NULL, "block argument");
          }
#line 3717 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 891 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            cfg_lexer_pop_context(lexer);
            cfg_args_set(last_block_args, (yyvsp[-2].cptr), (yyvsp[0].cptr)); free((yyvsp[-2].cptr)); free((yyvsp[0].cptr));
          }
#line 3726 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 903 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->mark_freq = (yyvsp[-1].num); }
#line 3732 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 904 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->flush_lines = (yyvsp[-1].num); }
#line 3738 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 905 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_set_mark_mode(configuration, "internal"); }
#line 3744 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 907 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(cfg_lookup_mark_mode((yyvsp[-1].cptr)) > 0 && cfg_lookup_mark_mode((yyvsp[-1].cptr)) != MM_GLOBAL, (yylsp[-1]), "illegal global mark-mode");
            cfg_set_mark_mode(configuration, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 3754 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 912 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->flush_timeout = (yyvsp[-1].num); }
#line 3760 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 913 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->chain_hostnames = (yyvsp[-1].num); }
#line 3766 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 914 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->keep_hostname = (yyvsp[-1].num); }
#line 3772 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 915 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->check_hostname = (yyvsp[-1].num); }
#line 3778 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 916 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_bad_hostname_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3784 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 917 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->time_reopen = (yyvsp[-1].num); }
#line 3790 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 918 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->time_reap = (yyvsp[-1].num); }
#line 3796 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 919 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {}
#line 3802 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 920 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->suppress = (yyvsp[-1].num); }
#line 3808 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 921 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->threaded = (yyvsp[-1].num); }
#line 3814 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 922 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->pass_unix_credentials = (yyvsp[-1].num); }
#line 3820 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 923 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_set_use_uniqid((yyvsp[-1].num)); }
#line 3826 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 924 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_set_use_uniqid((yyvsp[-1].num)); }
#line 3832 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 925 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->log_fifo_size = (yyvsp[-1].num); }
#line 3838 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 120:
#line 926 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { msg_error("Using a global log-iw-size() option was removed, please use a per-source log-iw-size()", NULL); }
#line 3844 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 927 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { msg_error("Using a global log-fetch-limit() option was removed, please use a per-source log-fetch-limit()", NULL); }
#line 3850 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 928 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->log_msg_size = (yyvsp[-1].num); }
#line 3856 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 929 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->keep_timestamp = (yyvsp[-1].num); }
#line 3862 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 930 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->create_dirs = (yyvsp[-1].num); }
#line 3868 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 125:
#line 931 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_owner_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3874 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 126:
#line 932 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_owner_set(configuration, "-2"); }
#line 3880 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 127:
#line 933 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_group_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3886 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 128:
#line 934 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_group_set(configuration, "-2"); }
#line 3892 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 129:
#line 935 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_perm_set(configuration, (yyvsp[-1].num)); }
#line 3898 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 130:
#line 936 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_perm_set(configuration, -2); }
#line 3904 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 131:
#line 937 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_owner_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3910 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 132:
#line 938 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_owner_set(configuration, "-2"); }
#line 3916 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 133:
#line 939 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_group_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3922 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 134:
#line 940 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_group_set(configuration, "-2"); }
#line 3928 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 135:
#line 941 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_perm_set(configuration, (yyvsp[-1].num)); }
#line 3934 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 136:
#line 942 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_perm_set(configuration, -2); }
#line 3940 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 137:
#line 943 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->custom_domain = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3946 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 138:
#line 944 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_size = (yyvsp[-1].num); }
#line 3952 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 139:
#line 945 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_expire = (yyvsp[-1].num); }
#line 3958 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 140:
#line 947 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_expire_failed = (yyvsp[-1].num); }
#line 3964 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 141:
#line 948 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_hosts = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3970 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 142:
#line 949 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->file_template_name = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3976 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 143:
#line 950 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->proto_template_name = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3982 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 144:
#line 951 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { configuration->recv_time_zone = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3988 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 952 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options = &configuration->template_options; }
#line 3994 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 147:
#line 953 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options = &configuration->host_resolve_options; }
#line 4000 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 149:
#line 954 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options = &configuration->stats_options; }
#line 4006 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 958 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options->log_freq = (yyvsp[-1].num); }
#line 4012 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 152:
#line 959 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options->level = (yyvsp[-1].num); }
#line 4018 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 153:
#line 960 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options->lifetime = (yyvsp[-1].num); }
#line 4024 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 156:
#line 972 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 1; }
#line 4030 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 157:
#line 973 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 4036 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 158:
#line 974 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 4042 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 978 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 4048 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 160:
#line 979 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 2; }
#line 4054 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 983 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 4060 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 162:
#line 984 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 4066 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 985 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 4072 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 164:
#line 989 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_reverse((yyvsp[0].ptr)); }
#line 4078 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 993 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_append((yyvsp[0].ptr), g_strdup((yyvsp[-1].cptr))); free((yyvsp[-1].cptr)); }
#line 4084 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 166:
#line 994 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 4090 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1040 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->init_window_size = (yyvsp[-1].num); }
#line 4096 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1041 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->chain_hostnames = (yyvsp[-1].num); }
#line 4102 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1042 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_hostname = (yyvsp[-1].num); }
#line 4108 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1043 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4114 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1044 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->host_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4120 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1045 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { gchar *p = strrchr((yyvsp[-1].cptr), ':'); if (p) *p = 0; last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4126 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1046 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_timestamp = (yyvsp[-1].num); }
#line 4132 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1047 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { log_source_options_set_tags(last_source_options, (yyvsp[-1].ptr)); }
#line 4138 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1048 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options = &last_source_options->host_resolve_options; }
#line 4144 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1067 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_fqdn = (yyvsp[-1].num); }
#line 4150 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1068 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns = (yyvsp[-1].num); }
#line 4156 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1069 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns_cache = (yyvsp[-1].num); }
#line 4162 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1070 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->normalize_hostnames = (yyvsp[-1].num); }
#line 4168 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1197 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->ts_format = cfg_ts_format_value((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4174 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1198 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->frac_digits = (yyvsp[-1].num); }
#line 4180 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1198 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4186 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1199 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4192 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1200 "lib/cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_LOCAL] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4198 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1202 "lib/cfg-grammar.y" /* yacc.c:1646  */
    {
          gint on_error;

          CHECK_ERROR(log_template_on_error_parse((yyvsp[-1].cptr), &on_error), (yylsp[-1]), "Invalid on-error() setting");
          free((yyvsp[-1].cptr));

          log_template_options_set_on_error(last_template_options, on_error);
        }
#line 4211 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;


#line 4215 "lib/cfg-grammar.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, lexer, dummy, arg, YY_("syntax error"));
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
        yyerror (&yylloc, lexer, dummy, arg, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, lexer, dummy, arg);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, lexer, dummy, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, lexer, dummy, arg, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, lexer, dummy, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, lexer, dummy, arg);
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
  return yyresult;
}
#line 1285 "lib/cfg-grammar.y" /* yacc.c:1906  */


