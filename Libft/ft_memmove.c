/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:25:04 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/10 14:59:00 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	n;

	if (dst == src)
		return (dst);
	s1 = (char *)dst;
	s2 = (char *)src;
	if (dst < src)
	{
		n = 0;
		while (n < len)
		{
			s1[n] = s2[n];
			n++;
		}
	}
	else
	{
		n = len;
		while (n--)
			s1[n] = s2[n];
	}
	return (dst);
}
