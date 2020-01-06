/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 10:10:13 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/12 11:35:37 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		f;
	int		g;

	f = 0;
	g = 0;
	if (!s)
		return (NULL);
	i = (int)ft_strlen(s);
	while (s[f] == ' ' || s[f] == '\t' || s[f] == '\n')
		f++;
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	if (i - f < 0)
		return (ft_chacc(g));
	if (!(str = malloc(i - f + 2)))
		return (NULL);
	while (f <= i)
		str[g++] = s[f++];
	str[g] = '\0';
	return (str);
}
