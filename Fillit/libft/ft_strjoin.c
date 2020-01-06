/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:21:30 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/05 18:31:07 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		f;
	int		len;
	char	*str;

	i = 0;
	f = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[f])
		f++;
	len = i + f;
	if (!(str = malloc(len + 1)))
		return (NULL);
	i = -1;
	f = 0;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[f])
		str[i++] = s2[f++];
	str[i] = '\0';
	return (str);
}
