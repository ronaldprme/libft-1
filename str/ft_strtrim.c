/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:33:01 by tiagoliv          #+#    #+#             */
/*   Updated: 2024/02/23 16:13:00 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		st;
	int		en;
	char	*r;

	c = 0;
	st = 0;
	en = 0;
	if (!s1)
		return (NULL);
	while (s1[c] && ft_strchr(set, s1[c]))
		c++;
	st = c;
	c = ft_strlen(s1) - 1;
	while (s1[c] && ft_strchr(set, s1[c]))
		c--;
	en = c + 1;
	if (st > en)
		st = en;
	r = (char *)malloc(sizeof(char) * (en - st + 1));
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1 + st, en - st + 1);
	return (r);
}
