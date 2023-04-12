#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t n) {
	size_t c = 0;
    unsigned char *d1 = s1;
    unsigned char *d2 = s2;
	while (c < n && d1[c] == d2[c])
	{
		c++;
	}
	if (c == n)
		return (0);
	else
		return (d1[c] - d2[c]);
}