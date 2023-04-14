/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:13 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 01:47:34 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*v;

	if ((unsigned long)(nmemb * size) != ((long)nmemb) * size)
		return (NULL);
	v = malloc(nmemb * size);
	return (v);
}
