/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:41 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 01:56:28 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;
	int		l;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	l = ft_strlen(s);
	d = (char *)s;
	while (j <= l)
	{
		if (d[j] == c)
			return (&d[j]);
		d++;
	}
	return (NULL);
}
