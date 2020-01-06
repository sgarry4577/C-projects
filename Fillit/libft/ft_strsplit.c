/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:53:27 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/04 16:50:45 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *str, char c)
{
	char	**r;
	int		i;
	int		j;
	int		k;
	int		len;

	i = 0;
	j = -1;
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	if (!(r = malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i = ft_clon(str, c, i);
	while (str[i])
	{
		r[++j] = malloc(sizeof(char) * (len));
		k = 0;
		while (str[i] != c && str[i])
			r[j][k++] = str[i++];
		r[j][k] = 0;
		i = ft_clon(str, c, i);
	}
	r[++j] = 0;
	return (r);
}
