/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:30 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 22:44:40 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	d;
	char	*str;
	char	*sr;
	char	*t;

	d = 0;
	str = dest;
	sr = (char *)src;
	t = malloc(n * sizeof(char));
	while (d < n)
	{
		t[d] = sr[d];
		d++;
	}
	d = 0;
	while (d < n)
	{
		str[d] = t[d];
		d++;
	}
	return (str);
}
