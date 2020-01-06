/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:40:24 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/02 14:23:39 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;
	size_t			f;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (!(res = malloc(len + 1)))
		return (NULL);
	f = 0;
	while (f != len)
	{
		res[f] = s[start];
		start++;
		f = f + 1;
	}
	res[f] = '\0';
	return (res);
}
