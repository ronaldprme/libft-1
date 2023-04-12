#include <stdio.h>
#include <stdlib.h>
void *ft_memset(void *s, int c, size_t n) {
    int d = 0;
    char *str = s;

    while (d < n) {
        str[d] = c;
        d++;
    }
    return s;
}