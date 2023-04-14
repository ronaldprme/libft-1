/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:33:02 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 01:51:38 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c;
	char	*r;

	c = 0;
	r = malloc((len - 1) * sizeof(char ));

	if (r == NULL)
		return (NULL);
	while (s[c + start] && c < len - start)
	{
		r[c] = s[c + start];
		c++;
	}
	return (r);
}
