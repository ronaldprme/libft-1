#include <stdlib.h>
void *ft_memmove(void *dest, const void *src, size_t n) {
    int d = 0;
    char *str = dest;
    char *sr = src;
    char t[n];

    while (d < n) {
        t[d] = sr[d];
        d++;
    }
    d = 0;
    while (d < n) {
        str[d] = t[d];
        d++;
    }
    return str;
}