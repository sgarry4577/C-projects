/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:06:14 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/09 14:30:25 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ss;
	unsigned char cs;

	ss = (unsigned char *)s;
	cs = (unsigned char)c;
	while (n--)
	{
		if (*(ss++) == cs)
			return (ss - 1);
	}
	return (NULL);
}
