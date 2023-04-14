/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:50 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 00:41:57 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1l;
	int		s2l;
	char	*d;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	d = malloc(s1l + s2l + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1, s1l);
	ft_strlcat(d, s2, s2l);
	return (d);
}
