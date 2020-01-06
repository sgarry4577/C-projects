/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:02:21 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/19 13:57:05 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	f;
	size_t	g;

	i = 0;
	f = 0;
	g = 0;
	while (src[i])
		i++;
	while (dst[f])
		f++;
	if (size <= f)
		i += size;
	else
		i += f;
	while (src[g] && f + 1 < size)
	{
		dst[f] = src[g];
		f++;
		g++;
	}
	dst[f] = '\0';
	return (i);
}
