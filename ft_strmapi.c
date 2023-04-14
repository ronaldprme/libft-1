/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:56 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 02:18:33 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		c;

	r = ft_strdup(s);
	if (!r)
		return (NULL);
	c = 0;
	while (s[c])
	{
		r[c] = f(c, s[c]);
		c++;
	}
	return (r);
}
