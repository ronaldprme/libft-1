#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t l = ft_strlen(src);
	size_t t = size;
	size_t c = 0;
	while (c < l)
	{
		if (c >= t)
		{
			dst[c] = '\0';
		}
		else
		{
			dst[c] = src[c];
		}
		c++;
	}
	return (l);
}