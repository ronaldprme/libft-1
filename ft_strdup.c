#include <stdlib.h>
char *ft_strdup(const char *s) {
    char *d = malloc(ft_strlen(s) * sizeof(char));
    size_t c = 0;
    while (s[c]) {
        d = s[c];
        c++;
    }
    return d;
}