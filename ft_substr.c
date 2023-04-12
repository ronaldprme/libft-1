#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t c = 0;

    char *r = malloc((len - 1) * sizeof(char));
    if (r == NULL)
        return NULL;
    while (s[c+start] && c < len-start) {
        r[c] = s[c+start];
        c++;
    }
    return r;
}