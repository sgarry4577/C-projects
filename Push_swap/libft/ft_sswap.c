/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:36:52 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 14:50:26 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_sswap(char *str)
{
	char	i;
	int		f;
	int		g;

	f = 0;
	g = 0;
	while (str[f])
		f++;
	if (str[g] == '-')
		g++;
	while (g < --f)
	{
		i = str[g];
		str[g] = str[f];
		str[f] = i;
		g++;
	}
	return (str);
}