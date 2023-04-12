#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t d = 0;
	char *st = s;
	while (*st != c && d < n)
	{
		st++;
	}
	return (--st);
}