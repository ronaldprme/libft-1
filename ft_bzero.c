#include <stdio.h>

void ft_bzero(void *s, size_t n) {
    int d = 0;
    char *str = s;

    while (d < n) {
        str[d] = '\0';
        d++;
    }
    return s;
}