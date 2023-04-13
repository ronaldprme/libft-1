/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:23 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 00:03:08 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		c;
	int		d;
	char	*s;

	c = 0;
	d = n;
	while (n > 0)
	{
		c++;
		n /= 10;
	}
	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[c] = '\0';
	while (c > 0)
	{
		s[--c] = d % 10 + '0';
		d /= 10;
	}
	return (s);
}
