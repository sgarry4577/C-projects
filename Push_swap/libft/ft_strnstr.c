/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:56:07 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/10 15:47:13 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	f;
	size_t	d;

	d = 0;
	if (!*nee)
		return ((char*)hay);
	while (hay[d] && (d < len))
	{
		f = 0;
		i = d;
		if (hay[i] == nee[f])
			while ((hay[i] == nee[f]) && hay[i] && nee[f] && (i < len))
			{
				i++;
				f++;
			}
		if (nee[f] == '\0')
			return ((char*)hay + d);
		d++;
	}
	return (NULL);
}
