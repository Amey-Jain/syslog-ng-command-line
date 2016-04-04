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

/* "%code top" blocks.  */
#line 24 "modules/afsocket/afsocket-grammar.y" /* yacc.c:316  */

#include "afsocket-parser.h"


#line 68 "modules/afsocket/afsocket-grammar.c" /* yacc.c:316  */

/* Substitute the variable and function names.  */
#define yyparse         afsocket_parse
#define yylex           afsocket_lex
#define yyerror         afsocket_error
#define yydebug         afsocket_debug
#define yynerrs         afsocket_nerrs


/* Copy the first part of user declarations.  */

#line 80 "modules/afsocket/afsocket-grammar.c" /* yacc.c:339  */

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
#ifndef YY_AFSOCKET_MODULES_AFSOCKET_AFSOCKET_GRAMMAR_H_INCLUDED
# define YY_AFSOCKET_MODULES_AFSOCKET_AFSOCKET_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int afsocket_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_UNIX_STREAM = 20000,
    KW_UNIX_DGRAM = 20002,
    KW_TCP = 20003,
    KW_UDP = 20004,
    KW_TCP6 = 20005,
    KW_UDP6 = 20006,
    KW_NETWORK = 20007,
    KW_TRANSPORT = 20008,
    KW_IP_PROTOCOL = 20009,
    KW_SYSTEMD_SYSLOG = 20010,
    KW_IP_TTL = 20011,
    KW_SO_BROADCAST = 20012,
    KW_IP_TOS = 20013,
    KW_SO_SNDBUF = 20014,
    KW_SO_RCVBUF = 20015,
    KW_SO_KEEPALIVE = 20016,
    KW_TCP_KEEPALIVE_TIME = 20017,
    KW_TCP_KEEPALIVE_PROBES = 20018,
    KW_TCP_KEEPALIVE_INTVL = 20019,
    KW_SPOOF_SOURCE = 20020,
    KW_KEEP_ALIVE = 20021,
    KW_MAX_CONNECTIONS = 20022,
    KW_LOCALIP = 20023,
    KW_IP = 20024,
    KW_LOCALPORT = 20025,
    KW_DESTPORT = 20026,
    KW_TLS = 20027,
    KW_PEER_VERIFY = 20028,
    KW_KEY_FILE = 20029,
    KW_CERT_FILE = 20030,
    KW_CA_DIR = 20031,
    KW_CRL_DIR = 20032,
    KW_TRUSTED_KEYS = 20033,
    KW_TRUSTED_DN = 20034,
    KW_CIPHER_SUITE = 20035,
    KW_SSL_OPTIONS = 20036,
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
#define KW_UNIX_STREAM 20000
#define KW_UNIX_DGRAM 20002
#define KW_TCP 20003
#define KW_UDP 20004
#define KW_TCP6 20005
#define KW_UDP6 20006
#define KW_NETWORK 20007
#define KW_TRANSPORT 20008
#define KW_IP_PROTOCOL 20009
#define KW_SYSTEMD_SYSLOG 20010
#define KW_IP_TTL 20011
#define KW_SO_BROADCAST 20012
#define KW_IP_TOS 20013
#define KW_SO_SNDBUF 20014
#define KW_SO_RCVBUF 20015
#define KW_SO_KEEPALIVE 20016
#define KW_TCP_KEEPALIVE_TIME 20017
#define KW_TCP_KEEPALIVE_PROBES 20018
#define KW_TCP_KEEPALIVE_INTVL 20019
#define KW_SPOOF_SOURCE 20020
#define KW_KEEP_ALIVE 20021
#define KW_MAX_CONNECTIONS 20022
#define KW_LOCALIP 20023
#define KW_IP 20024
#define KW_LOCALPORT 20025
#define KW_DESTPORT 20026
#define KW_TLS 20027
#define KW_PEER_VERIFY 20028
#define KW_KEY_FILE 20029
#define KW_CERT_FILE 20030
#define KW_CA_DIR 20031
#define KW_CRL_DIR 20032
#define KW_TRUSTED_KEYS 20033
#define KW_TRUSTED_DN 20034
#define KW_CIPHER_SUITE 20035
#define KW_SSL_OPTIONS 20036
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



int afsocket_parse (CfgLexer *lexer, LogDriver **instance, gpointer arg);

#endif /* !YY_AFSOCKET_MODULES_AFSOCKET_AFSOCKET_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 483 "modules/afsocket/afsocket-grammar.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 30 "modules/afsocket/afsocket-grammar.y" /* yacc.c:359  */


#include "afsocket.h"
#include "cfg-parser.h"
#include "afsocket-grammar.h"
#include "afunix-source.h"
#include "afunix-dest.h"
#include "afinet-source.h"
#include "afinet-dest.h"
#include "messages.h"
#include "syslog-names.h"
#include "plugin.h"
#include "cfg-grammar.h"
#include "socket-options-inet.h"
#include "transport-mapper-inet.h"
#include "service-management.h"

#include "systemd-syslog-source.h"
#include "afsocket-systemd-override.h"

#include "tlscontext.h"


static SocketOptions *last_sock_options;
static TransportMapper *last_transport_mapper;

TLSContext *last_tls_context;


#if ! SYSLOG_NG_ENABLE_IPV6
#undef AF_INET6
#define AF_INET6 0; g_assert_not_reached()

#endif

static void
afsocket_grammar_set_source_driver(AFSocketSourceDriver *sd)
{
  last_driver = &sd->super.super;

  last_reader_options = &((AFSocketSourceDriver *) last_driver)->reader_options;
  last_sock_options = ((AFSocketSourceDriver *) last_driver)->socket_options;
  last_transport_mapper = ((AFSocketSourceDriver *) last_driver)->transport_mapper;
}

static void
afsocket_grammar_set_dest_driver(AFSocketDestDriver *dd)
{
  last_driver = &dd->super.super;

  last_writer_options = &((AFSocketDestDriver *) last_driver)->writer_options;
  last_sock_options = ((AFSocketDestDriver *) last_driver)->socket_options;
  last_transport_mapper = ((AFSocketDestDriver *) last_driver)->transport_mapper;
}

void
afunix_grammar_set_source_driver(AFUnixSourceDriver *sd)
{
  afsocket_grammar_set_source_driver(&sd->super);
  last_file_perm_options = &sd->file_perm_options;
}

static void
afinet_grammar_set_source_driver(AFInetSourceDriver *sd)
{
  afsocket_grammar_set_source_driver(&sd->super);
}

static void
afunix_grammar_set_dest_driver(AFUnixDestDriver *dd)
{
  afsocket_grammar_set_dest_driver(&dd->super);
}

static void
afinet_grammar_set_dest_driver(AFInetDestDriver *dd)
{
  afsocket_grammar_set_dest_driver(&dd->super);
}

void
systemd_syslog_grammar_set_source_driver(SystemDSyslogSourceDriver *sd)
{
  afsocket_grammar_set_source_driver(&sd->super);
}

#line 178 "modules/afsocket/afsocket-grammar.y" /* yacc.c:359  */


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



#line 633 "modules/afsocket/afsocket-grammar.c" /* yacc.c:359  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1055

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  179
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  571

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   20036

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     173,   174,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   178,   177,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   175,     2,   176,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      69,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     2,     2,     2,     2,     2,     2,
      83,    84,    85,    86,    87,     2,     2,     2,     2,     2,
      88,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      89,    90,    91,     2,     2,     2,     2,     2,     2,     2,
      92,    93,     2,     2,     2,     2,     2,     2,     2,     2,
      94,    95,    96,     2,     2,     2,     2,     2,     2,     2,
      97,    98,    99,     2,     2,     2,     2,     2,     2,     2,
     100,   101,   102,     2,     2,     2,     2,     2,     2,     2,
     103,     2,   104,   105,   106,   107,   108,     2,     2,     2,
     109,   110,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     112,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     113,   114,   115,   116,   117,   118,     2,     2,     2,     2,
     119,   120,   121,     2,     2,     2,     2,     2,     2,     2,
     122,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     123,   111,     2,     2,     2,     2,     2,     2,     2,     2,
     124,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     125,   126,   127,     2,     2,     2,     2,     2,     2,     2,
     128,   129,   130,     2,     2,     2,     2,     2,     2,     2,
     131,   132,   133,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     134,   135,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   136,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     137,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     138,   139,   140,   141,   142,   143,   144,   145,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     146,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     147,   148,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     149,   150,     2,     2,     2,     2,     2,     2,     2,     2,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   510,   510,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   533,   534,   539,   538,   547,   546,   555,   556,
     560,   561,   562,   563,   564,   565,   570,   578,   579,   580,
     581,   586,   586,   596,   596,   605,   606,   610,   614,   615,
     616,   617,   618,   619,   624,   624,   634,   634,   643,   644,
     648,   650,   649,   657,   661,   662,   666,   671,   671,   681,
     682,   686,   687,   688,   692,   697,   697,   707,   708,   712,
     713,   714,   718,   720,   719,   730,   734,   734,   750,   751,
     755,   756,   760,   761,   766,   765,   776,   775,   785,   786,
     790,   791,   792,   793,   797,   798,   799,   800,   805,   804,
     815,   814,   825,   826,   831,   832,   833,   834,   835,   836,
     837,   838,   843,   844,   849,   848,   859,   858,   868,   869,
     873,   875,   874,   885,   890,   894,   893,   904,   905,   909,
     910,   914,   919,   918,   928,   929,   933,   934,   938,   939,
     941,   940,   951,   952,   953,   954,   955,   960,   961,   965,
     968,   973,   978,   983,   988,   993,   997,  1001,  1006,  1010,
    1016,  1017,  1018,  1019,  1023,  1024,  1025,  1026,  1027,  1028,
    1032,  1283,  1284,  1288,  1289,  1290,  1294,  1295,  1299,  1300,
    1301,  1305,  1309,  1310,  1319,  1330,  1338,  1356,  1357,  1358,
    1359,  1360,  1361,  1362,  1363,  1364,  1364,  1368,  1375,  1383,
    1384,  1385,  1386,  1390,  1391,  1397,  1410,  1411,  1412,  1413,
    1414,  1414,  1415,  1415,  1416,  1416,  1420,  1421,  1422,  1434,
    1435,  1436,  1464,  1465,  1466,  1467,  1468,  1475,  1476,  1477,
    1478,  1479,  1485,  1485,  1489,  1490,  1494,  1495,  1496,  1497,
    1498,  1499,  1503,  1504,  1505,  1506,  1507,  1508,  1509,  1513,
    1514,  1514,  1515,  1516,  1517
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_UNIX_STREAM", "KW_UNIX_DGRAM",
  "KW_TCP", "KW_UDP", "KW_TCP6", "KW_UDP6", "KW_NETWORK", "KW_TRANSPORT",
  "KW_IP_PROTOCOL", "KW_SYSTEMD_SYSLOG", "KW_IP_TTL", "KW_SO_BROADCAST",
  "KW_IP_TOS", "KW_SO_SNDBUF", "KW_SO_RCVBUF", "KW_SO_KEEPALIVE",
  "KW_TCP_KEEPALIVE_TIME", "KW_TCP_KEEPALIVE_PROBES",
  "KW_TCP_KEEPALIVE_INTVL", "KW_SPOOF_SOURCE", "KW_KEEP_ALIVE",
  "KW_MAX_CONNECTIONS", "KW_LOCALIP", "KW_IP", "KW_LOCALPORT",
  "KW_DESTPORT", "KW_TLS", "KW_PEER_VERIFY", "KW_KEY_FILE", "KW_CERT_FILE",
  "KW_CA_DIR", "KW_CRL_DIR", "KW_TRUSTED_KEYS", "KW_TRUSTED_DN",
  "KW_CIPHER_SUITE", "KW_SSL_OPTIONS", "LL_CONTEXT_ROOT",
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
  "KW_ADD_PREFIX", "KW_REPLACE_PREFIX", "KW_ON_ERROR", "KW_RETRIES", "'('",
  "')'", "'{'", "'}'", "';'", "':'", "$accept", "start", "driver",
  "source_afunix", "source_afunix_dgram_params", "$@1",
  "source_afunix_stream_params", "$@2", "source_afunix_options",
  "source_afunix_option", "source_afinet", "source_afinet_udp_params",
  "$@3", "source_afinet_udp6_params", "$@4", "source_afinet_udp_options",
  "source_afinet_udp_option", "source_afinet_option",
  "source_afinet_tcp_params", "$@5", "source_afinet_tcp6_params", "$@6",
  "source_afinet_tcp_options", "source_afinet_tcp_option", "$@7",
  "source_afsocket_stream_params", "source_afsyslog",
  "source_afsyslog_params", "$@8", "source_afsyslog_options",
  "source_afsyslog_option", "source_afnetwork", "source_afnetwork_params",
  "$@9", "source_afnetwork_options", "source_afnetwork_option",
  "source_afsocket_transport", "$@10", "source_systemd_syslog",
  "source_systemd_syslog_params", "$@11", "source_systemd_syslog_options",
  "source_systemd_syslog_option", "dest_afunix",
  "dest_afunix_dgram_params", "$@12", "dest_afunix_stream_params", "$@13",
  "dest_afunix_options", "dest_afunix_option", "dest_afinet",
  "dest_afinet_udp_params", "$@14", "dest_afinet_udp6_params", "$@15",
  "dest_afinet_udp_options", "dest_afinet_option",
  "dest_afinet_udp_option", "dest_afinet_tcp_params", "$@16",
  "dest_afinet_tcp6_params", "$@17", "dest_afinet_tcp_options",
  "dest_afinet_tcp_option", "$@18", "dest_afsocket_option",
  "dest_afsyslog", "dest_afsyslog_params", "$@19", "dest_afsyslog_options",
  "dest_afsyslog_option", "dest_afnetwork", "dest_afnetwork_params",
  "$@20", "dest_afnetwork_options", "dest_afnetwork_option",
  "dest_afsocket_transport", "$@21", "afsocket_transport", "tls_options",
  "tls_option", "socket_option", "inet_socket_option",
  "inet_ip_protocol_option", "string", "yesno", "dnsmode",
  "string_or_number", "string_list", "string_list_build", "level_string",
  "facility_string", "source_option", "$@32", "source_proto_option",
  "host_resolve_option", "msg_format_option", "source_reader_option",
  "$@33", "$@34", "$@35", "source_reader_option_flags",
  "dest_driver_option", "dest_writer_option", "$@36",
  "dest_writer_options_flags", "file_perm_option", "file_dir_perm_option",
  "template_option", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256, 20001, 20000, 20002, 20003, 20004, 20005, 20006, 20007,
   20008, 20009, 20010, 20011, 20012, 20013, 20014, 20015, 20016, 20017,
   20018, 20019, 20020, 20021, 20022, 20023, 20024, 20025, 20026, 20027,
   20028, 20029, 20030, 20031, 20032, 20033, 20034, 20035, 20036,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18, 10000, 10001, 10002,
   10003, 10004, 10005, 10006, 10007, 10008, 10009, 10010, 10011, 10060,
   10071, 10072, 10073, 10074, 10075, 10076, 10077, 10078, 10079, 10080,
   10081, 10082, 10083, 10090, 10091, 10092, 10093, 10094, 10100, 10110,
   10111, 10112, 10120, 10121, 10130, 10131, 10132, 10140, 10141, 10142,
   10150, 10151, 10152, 10160, 10162, 10163, 10164, 10165, 10166, 10170,
   10171, 10231, 10190, 10200, 10201, 10202, 10203, 10204, 10205, 10210,
   10211, 10212, 10220, 10230, 10240, 10250, 10251, 10252, 10260, 10261,
   10262, 10270, 10271, 10272, 10300, 10301, 10323, 10340, 10350, 10351,
   10352, 10353, 10354, 10355, 10356, 10357, 10370, 10380, 10381, 10410,
   10411, 10420, 10421, 10422, 10423, 10424, 10425, 10426, 10427, 10428,
   10429, 10500, 10501, 10502, 10503, 10504, 10505, 10506, 10507, 10508,
   10509, 10510, 10511,    40,    41,   123,   125,    59,    58
};
# endif

#define YYPACT_NINF -296

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-296)))

#define YYTABLE_NINF -215

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     101,   389,   226,    48,  -296,  -112,  -103,   -97,   -92,   -88,
     -86,   -82,   -36,  -296,  -296,  -296,  -296,   -30,    -5,    14,
      25,    28,    44,    49,    51,    54,  -296,  -296,  -296,  -296,
    -296,  -296,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   -27,  -296,   -20,  -296,   -18,  -296,    21,  -296,    38,
    -296,    66,  -296,    72,  -296,    73,  -296,    74,  -296,    83,
    -296,    84,   775,    85,   189,    93,   775,    95,   189,    97,
     328,    99,   881,   100,   357,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   739,  -296,   739,  -296,   103,   104,   112,   113,
     118,   121,   123,   131,   132,   133,   135,   137,   138,   139,
    -296,   141,   142,   144,   146,   147,  -296,  -296,   775,  -296,
    -296,  -296,  -296,   393,   -64,    39,  -296,  -296,   189,  -296,
    -296,  -296,  -296,  -296,  -296,   148,   153,  -296,  -296,  -296,
    -296,   328,  -296,  -296,  -296,  -296,   881,  -296,  -296,  -296,
    -296,  -296,  -296,   357,  -296,   466,   816,   490,   507,   633,
     674,     8,    87,   159,   160,   162,   163,   164,   167,   183,
     185,   186,  -296,   739,  -296,  -296,  -296,  -296,  -296,  -296,
     115,   -25,   207,   208,   209,   -25,   211,   212,   213,   -25,
     216,   -28,   -28,  -109,   206,   -25,   232,   -17,   -28,  -109,
    -296,   214,   215,   217,   231,   233,   234,   235,   237,  -296,
      94,   238,   239,  -296,   240,   242,   243,  -296,  -296,    33,
     236,   244,  -296,  -296,  -296,   245,   246,   247,   250,   251,
     252,   254,   260,   262,   263,   264,   266,  -296,  -296,  -296,
    -296,  -296,  -296,   -37,   268,   271,   272,  -296,   274,  -296,
    -296,  -296,  -296,  -296,  -296,   275,  -296,  -296,   286,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   -25,   -25,   -25,
     110,   128,  -111,   176,   248,   -85,  -296,   225,  -296,  -296,
    -296,   291,   292,   293,   294,   296,   298,   299,   300,   303,
     305,   311,   312,  -296,  -296,  -296,   313,    22,   314,   316,
     -17,   -17,   320,   321,   322,   -25,   -25,   -25,   307,   -28,
     -28,   -28,   -28,   324,   339,   341,   343,  -296,   385,   -28,
     -28,   -19,   -28,   359,   365,   369,   370,  -296,   371,    22,
     -25,   400,   401,   402,   403,   -26,   404,   405,   -28,   406,
     -28,   -25,   388,   390,   394,   395,   398,   399,  -296,   -28,
    -109,  -109,   407,  -109,   -25,   -25,   411,   412,   414,   415,
    -296,   416,  -296,   417,   418,  -296,  -296,   420,  -296,   421,
     422,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,   427,   428,   431,   432,
     433,   434,   435,   436,   438,  -296,  -296,   439,    22,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,   440,   441,   443,   449,
     450,   451,   453,   -28,   454,  -296,   -25,   -81,   -25,   -25,
     455,   456,   457,  -296,  -296,   458,  -296,   459,  -296,  -296,
    -296,  -296,  -296,   460,   461,   462,   463,   467,   470,   471,
     481,   483,   489,   -28,   491,   492,   493,   494,   -28,   409,
     -28,   -28,   -28,   -28,   495,   496,   497,    22,   498,   499,
     500,    22,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   501,  -296,  -296,   502,   503,   504,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   505,   506,   508,
     509,   510,   511,  -296,  -296,  -296,   512,  -296,  -296,  -296,
     524,   526,   530,   531,   532,   536,   537,   538,   540,   541,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    31,    46,    33,    65,    76,    57,   171,
     172,     0,    86,     0,    84,     0,   114,     0,    98,     0,
     116,     0,   100,     0,   132,     0,   125,     0,    16,     0,
      14,     0,   210,     0,   210,     0,   210,     0,   210,     0,
     210,     0,   210,     0,   210,    83,    89,    82,    89,    95,
     119,    94,   103,    97,   119,    96,   103,   131,   135,   124,
     128,    13,   210,    12,   210,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    50,    45,   210,    53,
     164,    43,    42,   195,     0,     0,    27,    32,   210,    37,
      30,    47,    29,    34,    64,     0,     0,    73,    69,    71,
      66,   210,    70,    72,    75,    77,   210,    81,    80,    56,
      61,    63,    58,   210,    62,   232,   232,   232,   232,   232,
     232,   232,   232,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,   210,    21,    23,    22,   242,    20,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,   211,
       0,     0,     0,   213,     0,     0,     0,   215,    35,     0,
       0,     0,    67,    78,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,    88,    91,
      92,    93,    90,     0,     0,     0,     0,   121,     0,   120,
     118,   110,   108,   111,   109,     0,   112,   102,     0,   140,
     136,   134,   137,   138,   129,   127,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,   173,   174,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   180,   178,     0,   148,     0,     0,
     218,   218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   239,     0,     0,   241,   244,     0,   246,     0,
       0,   248,   165,   162,   166,   160,   161,   163,   167,   169,
     168,    54,    55,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,   159,     0,   148,   206,
     208,   217,   216,   207,   209,    41,     0,     0,     0,     0,
       0,     0,     0,   183,     0,   181,     0,     0,     0,     0,
       0,     0,     0,   186,   185,     0,   184,     0,   143,   144,
     145,   142,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
       0,   148,    25,    24,    26,   236,   238,   240,   243,   245,
     247,     0,     0,     0,     0,     0,   183,   183,     0,   183,
      52,   147,   188,   189,   193,   187,   192,   190,   191,   182,
     194,     0,   177,   176,     0,     0,     0,   198,   197,   203,
     205,   204,    74,   123,   229,   223,   225,   224,   230,   231,
     219,   220,   234,   222,   228,   226,   227,     0,     0,     0,
       0,     0,     0,   104,   105,   107,     0,   106,   113,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     202,   200,   199,   201,   249,   250,   251,   252,   253,   254,
     122,   141,   150,   151,   152,   153,   154,   155,   156,   157,
     158
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,   -93,  -296,
    -296,  -296,  -296,  -296,  -296,   -63,  -296,   171,  -296,  -296,
    -296,  -296,   -29,  -296,  -296,   109,  -296,  -296,  -296,   410,
    -296,  -296,  -296,  -296,   105,  -296,   -44,  -296,  -296,  -296,
    -296,   429,  -296,  -296,  -296,  -296,  -296,  -296,   486,  -296,
    -296,  -296,  -296,  -296,  -296,   480,    82,  -296,  -296,  -296,
    -296,  -296,   518,  -296,  -296,   -15,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,   544,  -296,   -13,  -290,
    -296,   -70,   380,  -296,   -32,  -185,  -296,  -135,  -295,   295,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   -31,  -296,  -296,
    -296,  -146,    55,    71,  -296,   267,  -296,  -296,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    26,    69,   104,    67,   102,   182,   183,
      27,    73,    74,    77,    78,   137,   138,   126,    71,    72,
      75,    76,   127,   128,   204,   129,    28,    83,    84,   162,
     163,    29,    79,    80,   150,   151,   152,   231,    30,    81,
      82,   155,   156,    13,    53,    88,    51,    86,   165,   248,
      14,    57,    92,    61,    96,   168,   259,   267,    55,    90,
      59,    94,   167,   260,   362,   261,    15,    65,   100,   172,
     275,    16,    63,    98,   171,   271,   272,   366,   153,   407,
     408,   130,   131,   338,   305,   291,   504,   306,   424,   425,
     437,   435,   219,   220,   223,   327,   227,   132,   133,   134,
     135,   312,   263,   264,   253,   454,   187,   188,   358
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    54,    56,    58,    60,    62,    64,    66,    68,    70,
     295,   189,   157,   221,   299,   143,   502,   222,   145,   146,
     308,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     268,   235,   185,   254,   185,   255,   256,   269,   333,   334,
     164,   449,   374,    49,   303,   304,    50,   141,    31,   443,
     433,   158,   396,   397,   398,   399,   400,   401,   402,   403,
     404,    32,   335,   375,   352,   353,   288,   289,   380,   310,
      33,   186,   290,   186,   314,   228,    34,   354,   236,   355,
     356,    35,   237,   238,   239,    36,   157,    37,   240,   381,
     286,    38,   367,   368,   369,   250,   250,   145,   146,   210,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   268,
     235,   241,   254,   185,   255,   256,   269,   242,   491,   164,
     243,   244,   288,   289,    49,   158,    49,    50,   290,    50,
     416,   417,   418,    49,   357,    49,    50,    39,    50,   245,
     246,     1,     2,    40,   258,   371,   373,    85,   377,   379,
     249,   249,   186,   224,    87,   444,    89,   236,   273,   273,
     247,   237,   238,   239,   411,   412,   457,   240,    41,   301,
     302,   405,   406,   225,   226,   311,   313,   536,   323,   469,
     470,   540,  -133,   324,   325,    49,   326,    42,    50,   149,
     241,   546,   547,   161,   549,    91,   242,   336,    43,   243,
     244,    44,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   184,    93,   184,   117,   118,   119,    45,   245,   246,
     251,   251,    46,   258,    47,   465,   466,    48,   468,    17,
      18,    19,    20,    21,    22,    23,   252,   252,    24,   247,
      95,   501,   503,   505,   506,   139,    97,    99,   101,   139,
     266,   148,   266,   270,   274,   160,   232,   103,   105,   136,
     149,  -126,    49,   303,   304,    50,  -212,   140,   287,   142,
    -212,   144,   161,   154,   159,   121,   190,   191,   311,   311,
      49,   303,   304,    50,   370,   192,   193,   420,   421,   422,
     423,   194,   184,   122,   195,    25,   196,   431,   432,   434,
     436,   123,   372,  -214,   197,   198,   199,   124,   200,   139,
     201,   202,   203,   450,   205,   206,   453,   207,   456,   208,
     209,   229,   148,  -214,  -214,   125,   230,   464,    49,   303,
     304,    50,   277,   278,   160,   279,   280,   281,   145,   146,
     282,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     376,   115,   116,   117,   118,   119,   283,   147,   284,   285,
     292,   293,   294,   -36,   296,   297,   298,   145,   146,   300,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   307,
     115,   116,   117,   118,   119,   309,   147,   315,   316,   337,
     317,   423,     5,     6,     7,     8,     9,    10,    11,   382,
      49,   303,   304,    50,   318,  -212,   319,   320,   321,  -212,
     322,   328,   329,   330,   121,   331,   332,   339,   340,   341,
     342,   453,   378,   343,   344,   345,   527,   346,   529,   530,
     531,   532,   122,   347,  -212,   348,   349,   350,  -212,   351,
     123,   359,  -214,   121,   360,   361,   124,   363,   364,   541,
     542,   543,   544,   545,   423,   423,   548,   423,    12,   365,
     419,   122,  -214,  -214,   125,   383,   384,   385,   386,   123,
     387,  -214,   388,   389,   390,   124,   211,   391,   212,   392,
     107,   213,   109,   110,   111,   393,   394,   395,   409,   235,
     410,  -214,  -214,   125,   413,   414,   415,   426,   214,   215,
     216,   217,   -68,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   427,   235,   428,   254,   429,   255,   256,   257,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   265,
     235,   -60,   254,   438,   255,   256,   236,   218,   430,   439,
     237,   238,   239,   440,   441,   442,   240,   262,   262,   262,
     262,   262,   262,   445,   446,   447,   448,   451,   452,   455,
     236,   458,   528,   459,   237,   238,   239,   460,   461,   241,
     240,   462,   463,   234,   166,   242,   170,   236,   243,   244,
     467,   237,   238,   239,   471,   233,   472,   240,   473,   474,
     475,   476,   477,   241,   478,   479,   480,   245,   246,   242,
     481,   482,   243,   244,   483,   484,   485,   486,   487,   488,
     241,   489,   169,   490,   492,   493,   242,   494,   247,   243,
     244,   245,   246,   495,   496,   497,   258,   498,   500,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   245,   246,
     -87,   516,   247,   258,   517,   518,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   519,   235,   520,   254,   247,
     255,   256,   257,   521,  -115,   523,   524,   525,   526,   533,
     534,   535,   537,   538,   539,   550,   551,   552,   553,   554,
     555,   -99,   556,   557,   558,   559,   560,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   265,   235,   561,   254,
     562,   255,   256,   236,   563,   564,   565,   237,   238,   239,
     566,   567,   568,   240,   569,   570,   276,     0,   499,     0,
     522,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
       0,     0,   242,     0,   236,   243,   244,     0,   237,   238,
     239,     0,     0,   107,   240,   109,   110,   111,     0,     0,
       0,     0,   115,   116,   245,   246,     0,     0,     0,   258,
       0,     0,     0,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,   242,     0,   247,   243,   244,   106,   107,
     108,   109,   110,   111,   112,   113,   114,     0,   115,   116,
     117,   118,   119,     0,   120,   245,   246,  -117,     0,     0,
     258,     0,     0,     0,     0,     0,  -212,     0,     0,     0,
    -212,     0,     0,     0,     0,   121,   247,     0,     0,     0,
     107,     0,   109,   110,   111,     0,     0,     0,     0,   235,
       0,     0,     0,   122,     0,     0,     0,     0,  -101,     0,
     173,   123,  -212,  -214,     0,     0,  -212,   124,     0,     0,
       0,   121,   174,   175,   176,   177,   178,   179,   180,   181,
       0,     0,     0,  -214,  -214,     0,     0,     0,     0,   122,
       0,     0,     0,     0,     0,     0,   236,   123,     0,  -214,
     237,   238,   239,   124,     0,   107,   240,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -214,
    -214,   125,     0,   -19,     0,     0,     0,     0,     0,   241,
       0,     0,     0,     0,     0,   242,     0,     0,   243,   244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,   246,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,  -212,     0,
       0,     0,  -212,     0,     0,     0,     0,   121,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
     -85,     0,     0,   123,     0,  -214,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -214,  -214,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -79
};

static const yytype_int16 yycheck[] =
{
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     195,   104,    82,    77,   199,    78,    97,    81,    10,    11,
     205,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   102,    25,   104,    27,    28,    29,     5,     6,
      84,    67,   153,   152,   153,   154,   155,    76,     0,   339,
      69,    82,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   173,    29,   174,   101,   102,   147,   148,   153,    86,
     173,   102,   153,   104,   209,   138,   173,   114,    70,   116,
     117,   173,    74,    75,    76,   173,   156,   173,    80,   174,
     183,   173,   277,   278,   279,   165,   166,    10,    11,   128,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   103,    25,   183,    27,    28,    29,   109,   408,   163,
     112,   113,   147,   148,   152,   156,   152,   155,   153,   155,
     315,   316,   317,   152,   171,   152,   155,   173,   155,   131,
     132,    40,    41,   173,   136,   280,   281,   174,   283,   284,
     165,   166,   183,   114,   174,   340,   174,    70,   171,   172,
     152,    74,    75,    76,   310,   311,   351,    80,   173,   201,
     202,   149,   150,   134,   135,   207,   208,   467,    84,   364,
     365,   471,   174,    89,    90,   152,    92,   173,   155,    80,
     103,   486,   487,    84,   489,   174,   109,   229,   173,   112,
     113,   173,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   102,   174,   104,    25,    26,    27,   173,   131,   132,
     165,   166,   173,   136,   173,   360,   361,   173,   363,     3,
       4,     5,     6,     7,     8,     9,   165,   166,    12,   152,
     174,   426,   427,   428,   429,    74,   174,   174,   174,    78,
     168,    80,   170,   171,   172,    84,   151,   174,   174,   174,
     151,   174,   152,   153,   154,   155,    77,   174,   153,   174,
      81,   174,   163,   174,   174,    86,   173,   173,   310,   311,
     152,   153,   154,   155,   174,   173,   173,   319,   320,   321,
     322,   173,   183,   104,   173,    69,   173,   329,   330,   331,
     332,   112,   174,   114,   173,   173,   173,   118,   173,   138,
     173,   173,   173,   345,   173,   173,   348,   173,   350,   173,
     173,   173,   151,   134,   135,   136,   173,   359,   152,   153,
     154,   155,   173,   173,   163,   173,   173,   173,    10,    11,
     173,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     174,    23,    24,    25,    26,    27,   173,    29,   173,   173,
     153,   153,   153,   174,   153,   153,   153,    10,    11,   153,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   173,
      23,    24,    25,    26,    27,   153,    29,   173,   173,   153,
     173,   423,     3,     4,     5,     6,     7,     8,     9,   174,
     152,   153,   154,   155,   173,    77,   173,   173,   173,    81,
     173,   173,   173,   173,    86,   173,   173,   173,   173,   173,
     173,   453,   174,   173,   173,   173,   458,   173,   460,   461,
     462,   463,   104,   173,    77,   173,   173,   173,    81,   173,
     112,   173,   114,    86,   173,   173,   118,   173,   173,   481,
     482,   483,   484,   485,   486,   487,   488,   489,    69,   173,
     153,   104,   134,   135,   136,   174,   174,   174,   174,   112,
     174,   114,   174,   174,   174,   118,    83,   174,    85,   174,
      14,    88,    16,    17,    18,   174,   174,   174,   174,    23,
     174,   134,   135,   136,   174,   174,   174,   173,   105,   106,
     107,   108,   174,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   173,    23,   173,    25,   173,    27,    28,    29,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   174,    25,   174,    27,    28,    70,   144,   153,   174,
      74,    75,    76,   174,   174,   174,    80,   167,   168,   169,
     170,   171,   172,   153,   153,   153,   153,   153,   153,   153,
      70,   173,   153,   173,    74,    75,    76,   173,   173,   103,
      80,   173,   173,   163,    88,   109,    96,    70,   112,   113,
     173,    74,    75,    76,   173,   156,   174,    80,   174,   174,
     174,   174,   174,   103,   174,   174,   174,   131,   132,   109,
     173,   173,   112,   113,   173,   173,   173,   173,   173,   173,
     103,   173,    94,   174,   174,   174,   109,   174,   152,   112,
     113,   131,   132,   174,   174,   174,   136,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   131,   132,
     174,   174,   152,   136,   174,   174,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   174,    23,   174,    25,   152,
      27,    28,    29,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   174,    25,
     174,    27,    28,    70,   174,   174,   174,    74,    75,    76,
     174,   174,   174,    80,   174,   174,   172,    -1,   423,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    70,   112,   113,    -1,    74,    75,
      76,    -1,    -1,    14,    80,    16,    17,    18,    -1,    -1,
      -1,    -1,    23,    24,   131,   132,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   152,   112,   113,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    -1,    29,   131,   132,   174,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,   152,    -1,    -1,    -1,
      14,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,   174,    -1,
     111,   112,    77,   114,    -1,    -1,    81,   118,    -1,    -1,
      -1,    86,   123,   124,   125,   126,   127,   128,   129,   130,
      -1,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    70,   112,    -1,   114,
      74,    75,    76,   118,    -1,    14,    80,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,    -1,   174,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     174,    -1,    -1,   112,    -1,   114,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    41,   180,   181,     3,     4,     5,     6,     7,
       8,     9,    69,   222,   229,   245,   250,     3,     4,     5,
       6,     7,     8,     9,    12,    69,   182,   189,   205,   210,
     217,     0,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   152,
     155,   225,   263,   223,   263,   237,   263,   230,   263,   239,
     263,   232,   263,   251,   263,   246,   263,   185,   263,   183,
     263,   197,   198,   190,   191,   199,   200,   192,   193,   211,
     212,   218,   219,   206,   207,   174,   226,   174,   224,   174,
     238,   174,   231,   174,   240,   174,   233,   174,   252,   174,
     247,   174,   186,   174,   184,   174,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    26,    27,
      29,    86,   104,   112,   118,   136,   196,   201,   202,   204,
     260,   261,   276,   277,   278,   279,   174,   194,   195,   196,
     174,   201,   174,   194,   174,    10,    11,    29,   196,   204,
     213,   214,   215,   257,   174,   220,   221,   260,   276,   174,
     196,   204,   208,   209,   215,   227,   227,   241,   234,   241,
     234,   253,   248,   111,   123,   124,   125,   126,   127,   128,
     129,   130,   187,   188,   204,   260,   276,   285,   286,   187,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   203,   173,   173,   173,   173,   173,
     201,    83,    85,    88,   105,   106,   107,   108,   144,   271,
     272,    77,    81,   273,   114,   134,   135,   275,   194,   173,
     173,   216,   213,   220,   208,    23,    70,    74,    75,    76,
      80,   103,   109,   112,   113,   131,   132,   152,   228,   244,
     260,   281,   282,   283,    25,    27,    28,    29,   136,   235,
     242,   244,   261,   281,   282,    22,   235,   236,    22,    29,
     235,   254,   255,   257,   235,   249,   255,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   187,   153,   147,   148,
     153,   264,   153,   153,   153,   264,   153,   153,   153,   264,
     153,   263,   263,   153,   154,   263,   266,   173,   264,   153,
      86,   263,   280,   263,   266,   173,   173,   173,   173,   173,
     173,   173,   173,    84,    89,    90,    92,   274,   173,   173,
     173,   173,   173,     5,     6,    29,   263,   153,   262,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   101,   102,   114,   116,   117,   171,   287,   173,
     173,   173,   243,   173,   173,   173,   256,   264,   264,   264,
     174,   266,   174,   266,   153,   174,   174,   266,   174,   266,
     153,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   149,   150,   258,   259,   174,
     174,   280,   280,   174,   174,   174,   264,   264,   264,   153,
     263,   263,   263,   263,   267,   268,   173,   173,   173,   173,
     153,   263,   263,    69,   263,   270,   263,   269,   174,   174,
     174,   174,   174,   258,   264,   153,   153,   153,   153,    67,
     263,   153,   153,   263,   284,   153,   263,   264,   173,   173,
     173,   173,   173,   173,   263,   266,   266,   173,   266,   264,
     264,   173,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     174,   258,   174,   174,   174,   174,   174,   174,   174,   268,
     174,   264,    97,   264,   265,   264,   264,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   284,   174,   174,   174,   174,   263,   153,   263,
     263,   263,   263,   174,   174,   174,   258,   174,   174,   174,
     258,   263,   263,   263,   263,   263,   267,   267,   263,   267,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   179,   180,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   182,   184,   183,   186,   185,   187,   187,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   189,
     189,   191,   190,   193,   192,   194,   194,   195,   196,   196,
     196,   196,   196,   196,   198,   197,   200,   199,   201,   201,
     202,   203,   202,   202,   204,   204,   205,   207,   206,   208,
     208,   209,   209,   209,   210,   212,   211,   213,   213,   214,
     214,   214,   215,   216,   215,   217,   219,   218,   220,   220,
     221,   221,   222,   222,   224,   223,   226,   225,   227,   227,
     228,   228,   228,   228,   229,   229,   229,   229,   231,   230,
     233,   232,   234,   234,   235,   235,   235,   235,   235,   235,
     235,   235,   236,   236,   238,   237,   240,   239,   241,   241,
     242,   243,   242,   244,   245,   247,   246,   248,   248,   249,
     249,   250,   252,   251,   253,   253,   254,   254,   255,   255,
     256,   255,   257,   257,   257,   257,   257,   258,   258,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     260,   260,   260,   260,   261,   261,   261,   261,   261,   261,
     262,   263,   263,   264,   264,   264,   265,   265,   266,   266,
     266,   267,   268,   268,   269,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   271,   272,   271,   273,   273,   274,
     274,   274,   274,   275,   275,   275,   276,   276,   276,   276,
     277,   276,   278,   276,   279,   276,   280,   280,   280,   281,
     281,   281,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   283,   282,   284,   284,   285,   285,   285,   285,
     285,   285,   286,   286,   286,   286,   286,   286,   286,   287,
     287,   287,   287,   287,   287
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     0,     3,     0,     3,     2,     0,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     0,     2,     0,     2,     2,     0,     1,     4,     4,
       4,     4,     1,     1,     0,     2,     0,     2,     2,     0,
       1,     0,     5,     1,     4,     4,     4,     0,     2,     2,
       0,     1,     1,     1,     4,     0,     2,     2,     0,     1,
       1,     1,     1,     0,     5,     4,     0,     2,     2,     0,
       1,     1,     4,     4,     0,     3,     0,     3,     2,     0,
       1,     1,     1,     1,     4,     4,     4,     4,     0,     3,
       0,     3,     2,     0,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     4,     0,     3,     0,     3,     2,     0,
       1,     0,     5,     4,     4,     0,     3,     2,     0,     1,
       1,     4,     0,     3,     2,     0,     1,     1,     1,     4,
       0,     5,     4,     4,     4,     4,     4,     2,     0,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     1,
       4,     4,     4,     4,     1,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     2,     0,     2,     0,     2,     2,     2,     0,     4,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     2,     2,     0,     4,     3,     4,     3,
       4,     3,     1,     4,     3,     4,     3,     4,     3,     4,
       4,     4,     4,     4,     4
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
      yyerror (&yylloc, lexer, instance, arg, YY_("syntax error: cannot back up")); \
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
                  Type, Value, Location, lexer, instance, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, LogDriver **instance, gpointer arg)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (instance);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, LogDriver **instance, gpointer arg)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, lexer, instance, arg);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, CfgLexer *lexer, LogDriver **instance, gpointer arg)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , lexer, instance, arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, lexer, instance, arg); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, CfgLexer *lexer, LogDriver **instance, gpointer arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (instance);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 152: /* LL_IDENTIFIER  */
#line 410 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4071 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 155: /* LL_STRING  */
#line 410 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4077 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 157: /* LL_BLOCK  */
#line 410 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4083 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 263: /* string  */
#line 410 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4089 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 266: /* string_or_number  */
#line 410 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4095 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
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
yyparse (CfgLexer *lexer, LogDriver **instance, gpointer arg)
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
        case 2:
#line 511 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            *instance = (yyvsp[0].ptr);
            if (yychar != YYEMPTY)
              cfg_lexer_unput_token(lexer, &yylval);
            YYACCEPT;
          }
#line 4394 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 3:
#line 520 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4400 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 4:
#line 521 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4406 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 522 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4412 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 6:
#line 523 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4418 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 7:
#line 524 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4424 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 8:
#line 525 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4430 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 9:
#line 526 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4436 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 10:
#line 527 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4442 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 11:
#line 528 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4448 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 533 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4454 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 13:
#line 534 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4460 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 14:
#line 539 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
      create_and_set_unix_dgram_or_systemd_syslog_source((yyvsp[0].cptr), configuration);
	  }
#line 4468 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 15:
#line 542 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4474 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 547 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
      create_and_set_unix_stream_or_systemd_syslog_source((yyvsp[0].cptr), configuration);
	  }
#line 4482 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 550 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4488 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 561 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4494 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 562 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4500 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 563 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4506 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 564 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_driver->optional = (yyvsp[-1].num); }
#line 4512 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 566 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixSourceDriver *self = (AFUnixSourceDriver*) last_driver;
	    afunix_sd_set_pass_unix_credentials(self, (yyvsp[-1].num));
	  }
#line 4521 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 571 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixSourceDriver *self = (AFUnixSourceDriver*) last_driver;
	    afunix_sd_set_create_dirs(self, (yyvsp[-1].num));
	  }
#line 4530 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 578 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4536 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 579 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4542 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 580 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4548 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 581 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4554 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 586 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetSourceDriver *d = afinet_sd_new_udp(configuration);

            afinet_grammar_set_source_driver(d);
	  }
#line 4564 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 591 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4570 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 596 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetSourceDriver *d = afinet_sd_new_udp6(configuration);

            afinet_grammar_set_source_driver(d);
          }
#line 4580 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 601 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4586 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 38:
#line 614 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localip(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4592 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 39:
#line 615 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localip(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4598 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 616 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4604 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 617 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4610 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 624 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetSourceDriver *d = afinet_sd_new_tcp(configuration);

	    afinet_grammar_set_source_driver(d);
	  }
#line 4620 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 629 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4626 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 634 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetSourceDriver *d = afinet_sd_new_tcp6(configuration);

	    afinet_grammar_set_source_driver(d);
	  }
#line 4636 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 639 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4642 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 650 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context = tls_context_new(TM_SERVER);
	  }
#line 4650 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 654 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    afinet_sd_set_tls_context(last_driver, last_tls_context);
          }
#line 4658 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 657 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4664 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 661 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_sd_set_keep_alive(last_driver, (yyvsp[-1].num)); }
#line 4670 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 662 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_sd_set_max_connections(last_driver, (yyvsp[-1].num)); }
#line 4676 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 666 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4682 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 671 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            /* we use transport(tcp) transport by default */
            AFInetSourceDriver *d = afinet_sd_new_syslog(configuration);

            afinet_grammar_set_source_driver(d);
	  }
#line 4693 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 677 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4699 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 688 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4705 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 692 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4711 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 65:
#line 697 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            /* we use transport(tcp) transport by default */
            AFInetSourceDriver *d = afinet_sd_new_network(configuration);

            afinet_grammar_set_source_driver(d);
	  }
#line 4722 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 703 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4728 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 714 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4734 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 720 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context = tls_context_new(TM_SERVER);
	  }
#line 4742 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 724 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    afinet_sd_set_tls_context(last_driver, last_tls_context);
          }
#line 4750 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 75:
#line 730 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4756 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 734 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
#if ! SYSLOG_NG_ENABLE_SYSTEMD
            msg_error("systemd-syslog() source cannot be enabled and it is not"
                      " functioning. Please compile your syslog-ng with --enable-systemd"
                      " flag",
                      NULL);
            YYERROR;
#else
            SystemDSyslogSourceDriver *d = systemd_syslog_sd_new(configuration, FALSE);
            systemd_syslog_grammar_set_source_driver(d);
#endif
          }
#line 4773 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 746 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4779 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 760 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4785 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 761 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4791 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 766 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixDestDriver *d = afunix_dd_new_dgram((yyvsp[0].cptr), configuration);

      afunix_grammar_set_dest_driver(d);
	  }
#line 4801 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 771 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4807 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 86:
#line 776 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixDestDriver *d = afunix_dd_new_stream((yyvsp[0].cptr), configuration);

      afunix_grammar_set_dest_driver(d);
	  }
#line 4817 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 781 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4823 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 797 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4829 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 798 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4835 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 96:
#line 799 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4841 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 97:
#line 800 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4847 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 98:
#line 805 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_udp((yyvsp[0].cptr), configuration);

      afinet_grammar_set_dest_driver(d);
	  }
#line 4857 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 810 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4863 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 100:
#line 815 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_udp6((yyvsp[0].cptr), configuration);

	    afinet_grammar_set_dest_driver(d);
	  }
#line 4873 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 820 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4879 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 831 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_localip(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4885 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 832 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_localport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4891 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 833 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_destport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4897 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 834 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_destport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4903 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 844 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_spoof_source(last_driver, (yyvsp[-1].num)); }
#line 4909 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 849 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_tcp((yyvsp[0].cptr), configuration);

      afinet_grammar_set_dest_driver(d);
	  }
#line 4919 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 854 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4925 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 859 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_tcp6((yyvsp[0].cptr), configuration);

	    afinet_grammar_set_dest_driver(d);
	  }
#line 4935 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 864 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4941 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 875 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context = tls_context_new(TM_CLIENT);
	  }
#line 4949 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 879 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    afinet_dd_set_tls_context(last_driver, last_tls_context);
          }
#line 4957 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 885 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_dd_set_keep_alive(last_driver, (yyvsp[-1].num)); }
#line 4963 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 890 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4969 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 125:
#line 894 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetDestDriver *d = afinet_dd_new_syslog((yyvsp[0].cptr), configuration);

            afinet_grammar_set_dest_driver(d);
	  }
#line 4979 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 126:
#line 899 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4985 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 131:
#line 914 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4991 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 132:
#line 919 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetDestDriver *d = afinet_dd_new_network((yyvsp[0].cptr), configuration);

            afinet_grammar_set_dest_driver(d);
	  }
#line 5001 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 133:
#line 924 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5007 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 139:
#line 939 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_spoof_source(last_driver, (yyvsp[-1].num)); }
#line 5013 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 140:
#line 941 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            last_tls_context = tls_context_new(TM_CLIENT);
          }
#line 5021 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 141:
#line 945 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            afinet_dd_set_tls_context(last_driver, last_tls_context);
          }
#line 5029 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 142:
#line 951 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5035 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 143:
#line 952 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, "tcp"); }
#line 5041 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 144:
#line 953 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, "udp"); }
#line 5047 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 954 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, "tls"); }
#line 5053 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 146:
#line 955 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_address_family(last_transport_mapper, (yyvsp[-1].num)); }
#line 5059 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 149:
#line 965 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
}
#line 5066 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 150:
#line 969 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context->verify_mode = tls_lookup_verify_mode((yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5075 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 974 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context->key_file = g_strdup((yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5084 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 152:
#line 979 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context->cert_file = g_strdup((yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5093 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 153:
#line 984 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context->ca_dir = g_strdup((yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5102 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 154:
#line 989 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    last_tls_context->crl_dir = g_strdup((yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5111 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 155:
#line 994 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_session_set_trusted_fingerprints(last_tls_context, (yyvsp[-1].ptr));
          }
#line 5119 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 156:
#line 998 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_session_set_trusted_dn(last_tls_context, (yyvsp[-1].ptr));
          }
#line 5127 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1002 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            last_tls_context->cipher_suite = g_strdup((yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
	  }
#line 5136 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1007 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            last_tls_context->ssl_options = tls_lookup_options((yyvsp[-1].ptr));
	  }
#line 5144 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1010 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
}
#line 5151 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1016 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_sock_options->so_sndbuf = (yyvsp[-1].num); }
#line 5157 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1017 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_sock_options->so_rcvbuf = (yyvsp[-1].num); }
#line 5163 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1018 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_sock_options->so_broadcast = (yyvsp[-1].num); }
#line 5169 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1019 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_sock_options->so_keepalive = (yyvsp[-1].num); }
#line 5175 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1024 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->ip_ttl = (yyvsp[-1].num); }
#line 5181 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1025 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->ip_tos = (yyvsp[-1].num); }
#line 5187 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1026 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->tcp_keepalive_time = (yyvsp[-1].num); }
#line 5193 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1027 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->tcp_keepalive_intvl = (yyvsp[-1].num); }
#line 5199 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1028 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->tcp_keepalive_probes = (yyvsp[-1].num); }
#line 5205 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1033 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
          CHECK_ERROR((yyvsp[0].num) == 4 || (yyvsp[0].num) == 6, (yylsp[0]), "ip-protocol option can only be 4 or 6!");
          if ((yyvsp[0].num) == 4)
            {
              (yyval.num) = AF_INET;
            }
          else
            {
              (yyval.num) = AF_INET6;
            }
        }
#line 5221 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1288 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 1; }
#line 5227 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1289 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 5233 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1290 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5239 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1294 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5245 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1295 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 2; }
#line 5251 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1299 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 5257 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1300 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 5263 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1301 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 5269 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1305 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_reverse((yyvsp[0].ptr)); }
#line 5275 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1309 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_append((yyvsp[0].ptr), g_strdup((yyvsp[-1].cptr))); free((yyvsp[-1].cptr)); }
#line 5281 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1310 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 5287 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1320 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    /* return the numeric value of the "level" */
	    int n = syslog_name_lookup_level_by_name((yyvsp[0].cptr));
	    CHECK_ERROR((n != -1), (yylsp[0]), "Unknown priority level\"%s\"", (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
            (yyval.num) = n;
	  }
#line 5299 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1331 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            /* return the numeric value of facility */
	    int n = syslog_name_lookup_facility_by_name((yyvsp[0].cptr));
	    CHECK_ERROR((n != -1), (yylsp[0]), "Unknown facility \"%s\"", (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
	    (yyval.num) = n;
	  }
#line 5311 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1338 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = LOG_SYSLOG; }
#line 5317 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1356 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->init_window_size = (yyvsp[-1].num); }
#line 5323 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1357 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->chain_hostnames = (yyvsp[-1].num); }
#line 5329 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1358 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_hostname = (yyvsp[-1].num); }
#line 5335 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1359 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5341 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1360 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->host_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5347 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1361 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { gchar *p = strrchr((yyvsp[-1].cptr), ':'); if (p) *p = 0; last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5353 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1362 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_timestamp = (yyvsp[-1].num); }
#line 5359 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1363 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_source_options_set_tags(last_source_options, (yyvsp[-1].ptr)); }
#line 5365 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1364 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options = &last_source_options->host_resolve_options; }
#line 5371 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1369 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(log_proto_server_options_set_encoding(last_proto_server_options, (yyvsp[-1].cptr)),
                        (yylsp[-1]),
                        "unknown encoding %s", (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5382 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1375 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_proto_server_options->max_msg_size = (yyvsp[-1].num); }
#line 5388 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1383 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_fqdn = (yyvsp[-1].num); }
#line 5394 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1384 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns = (yyvsp[-1].num); }
#line 5400 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1385 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns_cache = (yyvsp[-1].num); }
#line 5406 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1386 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->normalize_hostnames = (yyvsp[-1].num); }
#line 5412 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1390 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_msg_format_options->recv_time_zone = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5418 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1392 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    if (last_msg_format_options->default_pri == 0xFFFF)
	      last_msg_format_options->default_pri = LOG_USER;
	    last_msg_format_options->default_pri = (last_msg_format_options->default_pri & ~7) | (yyvsp[-1].num);
          }
#line 5428 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1398 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    if (last_msg_format_options->default_pri == 0xFFFF)
	      last_msg_format_options->default_pri = LOG_NOTICE;
	    last_msg_format_options->default_pri = (last_msg_format_options->default_pri & 7) | (yyvsp[-1].num);
          }
#line 5438 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1410 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_reader_options->check_hostname = (yyvsp[-1].num); }
#line 5444 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1412 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_reader_options->fetch_limit = (yyvsp[-1].num); }
#line 5450 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1413 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_reader_options->parse_options.format = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5456 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1414 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options = &last_reader_options->super; }
#line 5462 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1415 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_proto_server_options = &last_reader_options->proto_options.super; }
#line 5468 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1416 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_msg_format_options = &last_reader_options->parse_options; }
#line 5474 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1420 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { CHECK_ERROR(log_reader_options_process_flag(last_reader_options, (yyvsp[-1].cptr)), (yylsp[-1]), "Unknown flag %s", (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5480 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1421 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_reader_options_process_flag(last_reader_options, "check-hostname"); }
#line 5486 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((LogDestDriver *) last_driver)->log_fifo_size = (yyvsp[-1].num); }
#line 5492 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1435 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((LogDestDriver *) last_driver)->throttle = (yyvsp[-1].num); }
#line 5498 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1437 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_INNER_DEST;
            gpointer value;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            value = plugin_parse_config(p, configuration, &(yylsp[0]), last_driver);

            free((yyvsp[0].cptr));
            if (!value)
              {
                YYERROR;
              }
            log_driver_add_plugin(last_driver, (LogDriverPlugin *) value);
          }
#line 5520 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1464 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->options = (yyvsp[-1].num); }
#line 5526 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1465 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->flush_lines = (yyvsp[-1].num); }
#line 5532 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1466 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->flush_timeout = (yyvsp[-1].num); }
#line 5538 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1467 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->suppress = (yyvsp[-1].num); }
#line 5544 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1468 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
                                                  GError *error = NULL;

                                                  last_writer_options->template = cfg_tree_check_inline_template(&configuration->tree, (yyvsp[-1].cptr), &error);
                                                  CHECK_ERROR_GERROR(last_writer_options->template != NULL, (yylsp[-1]), error, "Error compiling template");
	                                          free((yyvsp[-1].cptr));
	                                        }
#line 5556 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1475 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_writer_options_set_template_escape(last_writer_options, (yyvsp[-1].num)); }
#line 5562 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1476 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->padding = (yyvsp[-1].num); }
#line 5568 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1477 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->mark_freq = (yyvsp[-1].num); }
#line 5574 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1478 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_writer_options_set_mark_mode(last_writer_options, "internal"); }
#line 5580 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1480 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    CHECK_ERROR(cfg_lookup_mark_mode((yyvsp[-1].cptr)) != -1, (yylsp[-1]), "illegal mark mode: %s", (yyvsp[-1].cptr));
            log_writer_options_set_mark_mode(last_writer_options, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5590 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1485 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options = &last_writer_options->template_options; }
#line 5596 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1489 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = log_writer_options_lookup_flag((yyvsp[-1].cptr)) | (yyvsp[0].num); free((yyvsp[-1].cptr)); }
#line 5602 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1490 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 5608 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1494 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_uid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5614 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1495 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_uid(last_file_perm_options, "-2"); }
#line 5620 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1496 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_gid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5626 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1497 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_gid(last_file_perm_options, "-2"); }
#line 5632 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1498 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_perm(last_file_perm_options, (yyvsp[-1].num)); }
#line 5638 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1499 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_perm(last_file_perm_options, -2); }
#line 5644 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1504 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_uid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5650 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1505 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_uid(last_file_perm_options, "-2"); }
#line 5656 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1506 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_gid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5662 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1507 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_gid(last_file_perm_options, "-2"); }
#line 5668 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1508 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_perm(last_file_perm_options, (yyvsp[-1].num)); }
#line 5674 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1509 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_perm(last_file_perm_options, -2); }
#line 5680 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1513 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->ts_format = cfg_ts_format_value((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5686 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1514 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->frac_digits = (yyvsp[-1].num); }
#line 5692 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1514 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5698 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1515 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5704 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1516 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_LOCAL] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5710 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1518 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
          gint on_error;

          CHECK_ERROR(log_template_on_error_parse((yyvsp[-1].cptr), &on_error), (yylsp[-1]), "Invalid on-error() setting");
          free((yyvsp[-1].cptr));

          log_template_options_set_on_error(last_template_options, on_error);
        }
#line 5723 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;


#line 5727 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
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
      yyerror (&yylloc, lexer, instance, arg, YY_("syntax error"));
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
        yyerror (&yylloc, lexer, instance, arg, yymsgp);
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
                      yytoken, &yylval, &yylloc, lexer, instance, arg);
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
                  yystos[yystate], yyvsp, yylsp, lexer, instance, arg);
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
  yyerror (&yylloc, lexer, instance, arg, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, lexer, instance, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, lexer, instance, arg);
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
#line 1599 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1906  */

