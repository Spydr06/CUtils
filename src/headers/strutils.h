#ifndef SPYDR06_CUTILS_STRUTILS_H
#define SPYDR06_CUTILS_STRUTILS_H

#include <stdbool.h>

#ifndef __GLIBC__
char *strsep(char **stringp, const char *delim);
#endif

bool str_starts_with(const char *a, const char *b);
bool str_ends_with(const char *s, const char *suffix);

#endif /* SPYDR_06_CUTILS_STRUTILS_H */