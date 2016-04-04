s/^#undef  *\([ABCDEFGHIJKLMNOPQRSTUVWXYZ_]\)/#undef SYSLOG_NG_\1/
s/^#undef  *\([abcdefghijklmnopqrstuvwxyz]\)/#undef _syslog_ng_\1/
s/^#define  *\([ABCDEFGHIJKLMNOPQRSTUVWXYZ_][abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_]*\)\(.*\)/#ifndef SYSLOG_NG_\1\
#define SYSLOG_NG_\1\2\
#endif/
s/^#define  *\([abcdefghijklmnopqrstuvwxyz][abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_]*\)\(.*\)/#ifndef _syslog_ng_\1\
#define _syslog_ng_\1\2\
#endif/
