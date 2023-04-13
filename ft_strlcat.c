/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:51 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 22:53:06 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;
	size_t	l;

	c = 0;
	d = 0;
	l = ft_strlen(dst) + ft_strlen(src);

	while (dst[c])
		c++;
	while (c < size - 1)
	{
		dst[c++] = src[d++];
	}
	dst[c] = '\0';
	return (l);
}
