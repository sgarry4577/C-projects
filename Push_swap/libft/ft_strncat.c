/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:33:22 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/10 15:00:39 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	f;

	i = 0;
	while (s1[i])
		i++;
	f = 0;
	while (f < n && s2[f])
	{
		s1[f + i] = s2[f];
		f++;
	}
	s1[f + i] = '\0';
	return (s1);
}
