/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:06:55 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/12 11:24:31 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	int		f;
	long	res;

	res = n;
	if (!(str = malloc(sizeof(char) * (ft_sstrlen(res) + 2))))
		return (NULL);
	f = 0;
	if (res < 0)
	{
		str[f++] = '-';
		res *= -1;
	}
	while (res >= 10)
	{
		str[f++] = res % 10 + '0';
		res /= 10;
	}
	str[f++] = res % 10 + '0';
	str[f] = '\0';
	return (ft_sswap(str));
}
