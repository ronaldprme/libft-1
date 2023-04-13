/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:52 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 23:09:29 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;
	size_t	t;
	size_t	c;

	l = ft_strlen(src);
	t = size;
	c = 0;
	while (c < l)
	{
		if (c >= t)
			dst[c] = '\0';
		else
			dst[c] = src[c];
		c++;
	}
	return (l);
}
