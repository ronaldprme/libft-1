#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t c = 0;
	while (c < n && s1[c] == s2[c])
	{
		c++;
	}
	if (c == n)
		return (0);
	else
		return (s1[c] - s2[c]);
}