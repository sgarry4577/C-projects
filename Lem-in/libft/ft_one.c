/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 20:44:24 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/07 20:44:24 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_one(void *s, size_t len)
{
	size_t				i;
	unsigned char		*b;

	i = 0;
	b = (unsigned char *)s;
	while (i != len - 1)
	{
		b[i] = '1';
		i++;
	}
	b[i] = '\0';
}
