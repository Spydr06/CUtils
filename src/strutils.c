#include "headers/strutils.h"
#include <string.h>

#ifndef __GLIBC__
char *strsep(char **stringp, const char *delim) 
{
    if (*stringp == NULL) { return NULL; }
    char *token_start = *stringp;
    *stringp = strpbrk(token_start, delim);
    if (*stringp) {
        **stringp = '\0';
        (*stringp)++;
    }
    return token_start;
}
#endif


bool str_starts_with(const char *a, const char *b)
{
    return !strncmp(a, b, strlen(b));
}

bool str_ends_with(const char *s, const char *suffix) {
    size_t slen = strlen(s);
    size_t suffix_len = strlen(suffix);

    return suffix_len <= slen && !strcmp(s + slen - suffix_len, suffix);
}