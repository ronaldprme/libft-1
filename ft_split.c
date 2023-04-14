/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:40 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 02:16:12 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countchr(const char *s, char c)
{
	int	h;
	int	p;

	h = 0;
	p = 0;
	while (s[h])
		if (s[h++] == c)
			p++;
	return (p);
}

char	*nextsubstr(const char *s, char c, int start)
{
	int		d;
	char	*ss;

	d = start;
	ss = malloc(1);
	while (s[d] && s[d] != c)
	{
		ss = realloc(ss, (d - start + 1) * sizeof(char));
		if (ss == NULL)
			return (NULL);
		ss[d - start] = s[d];
		d++;
	}
	ss[d - start] = '\0';
	return (ss);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		j;
	char	**r;
	char	*ls;
	int		l;

	ls = nextsubstr(s, '-', 0);
	l = ft_strlen(ls) + 1;
	n = countchr(s, c);
	j = 0;
	r = malloc((n + 1) * sizeof(char *));
	while (j <= n)
	{
		r[j] = malloc(sizeof(char) * (ft_strlen(ls) + 1));
		r[j] = ls;
		ls = nextsubstr(s, '-', l);
		l += ft_strlen(ls) + 1;
		j++;
	}
	return (r);
}
