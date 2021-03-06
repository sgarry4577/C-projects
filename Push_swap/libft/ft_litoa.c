/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:41:51 by jjerde            #+#    #+#             */
/*   Updated: 2019/07/25 14:49:17 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			lint_len(long long c)
{
	int		i;

	i = 1;
	while (c > 9 || c < -9)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

char		*ft_litoa(long long n)
{
	char				*str;
	int					len;
	unsigned long long	bck;

	len = lint_len(n);
	if (n < 0)
	{
		bck = -n;
		len++;
	}
	else
		bck = n;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = 0 + '0';
	while (bck > 0)
	{
		str[--len] = bck % 10 + '0';
		bck = bck / 10;
	}
	return (str);
}
