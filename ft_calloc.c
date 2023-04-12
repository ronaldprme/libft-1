#include <stdlib.h>
void *ft_calloc(size_t nmemb, size_t size) {
    if (nmemb * size != ((long) nmemb) * size)
        return NULL;
    return malloc(nmemb * size);
}