#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2) {
    int l = ft_strlen(s1) + ft_strlen(s2);
    char * d = malloc(l + 1);
    int c = 0;
    int z = 0;
    
    if (d == NULL)
        return NULL;
    ft_strlcpy(d, s1, ft_strlen(s1));
    ft_strlcpy(d, s2, ft_strlen(s2));
    return d;
}