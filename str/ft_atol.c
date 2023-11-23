/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:46:46 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/11/23 18:47:08 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long	ft_atol(const char *nptr)
{
	long	r;
	int		s;
	char	*d;

	d = (char *) nptr;
	r = 0;
	s = 1;
	while (*d == ' ' || *d == '\n' || *d == '\t' || *d == '\v'
		|| *d == '\f' || *d == '\r')
		d++;
	if (*d == '-' || *d == '+')
	{
		if (*d == '-')
			s = -1;
		d++;
	}
	while (*d >= '0' && *d <= '9')
	{
		r = r * 10 + *d - '0';
		d++;
	}
	return (r * s);
}
