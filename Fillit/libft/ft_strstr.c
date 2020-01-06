/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:28:34 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/10 11:54:53 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int f;
	int d;

	d = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[d])
	{
		f = 0;
		i = d;
		if (haystack[i] == needle[f])
			while ((haystack[i] == needle[f]) && haystack[i] && needle[f])
			{
				i++;
				f++;
			}
		if (needle[f] == '\0')
			return ((char*)haystack + d);
		d++;
	}
	return (NULL);
}
