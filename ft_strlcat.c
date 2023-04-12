#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t c = 0;
	size_t d = 0;
	size_t l = ft_strlen(dst) + ft_strlen(src);

	while (dst[c])
		c++;
	while (c < size - 1)
	{
		dst[c++] = src[d++];
	}
	dst[c] = '\0';
	return (l);
}