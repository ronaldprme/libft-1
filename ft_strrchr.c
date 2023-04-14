/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:59 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 01:28:49 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		i;

	i = ft_strlen(s);
	d = (void *)s;
	while (i >= 0)
	{
		if (d[i] == c)
		{
			return (&d[i]);
		}
		i--;
	}
	return (NULL);
}
