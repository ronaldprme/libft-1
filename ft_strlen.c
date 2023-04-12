#include <stdlib.h>

size_t strlen(const char *s) {
    size_t c;
    c = 0;
    while (*s++)
        c++;
    return c;
}