/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:33:01 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 22:21:09 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charinstr(const char *s, char c)
{
	int	d;

	d = 0;

	if (s == NULL)
		return (0);
	while (s[d] && s[d++] != c)
		;

	return (s[d] != '\0');
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		st;
	int		en;
	char	*r;

	c = 0;
	st = 0;
	en = 0;

	while (s1[c] && charinstr(set, s1[c++]))
		;
	st = --c;
	c = ft_strlen(s1) - 1;
	while (s1[c] && charinstr(set, s1[c--]))
		;
	en = c;
	r = (char *)malloc(sizeof(char) * (en - st + 1));
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1 + st, en - st + 1);
	return (r);
}
