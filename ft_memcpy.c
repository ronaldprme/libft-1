/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:29 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 23:08:04 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	d;
	char	*str;
	char	*sr;

	d = 0;
	str = dest;
	sr = (char *)src;
	while (d < n)
	{
		str[d] = sr[d];
		d++;
	}
	return (str);
}
