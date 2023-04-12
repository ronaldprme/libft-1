#include <stdlib.h>
void *ft_memcpy(void *dest, const void *src, size_t n) {
    int d = 0;
    char *str = dest;
    char *sr = src;

    while (d < n) {
        str[d] = sr[d];
        d++;
    }
    return str;
}