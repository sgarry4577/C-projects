/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 20:15:25 by rpizpot           #+#    #+#             */
/*   Updated: 2019/06/24 20:15:25 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_atoi_precision(t_list *print)
{
	if (print->copy[print->i] == '.')
	{
		print->precision = 0;
		print->i++;
		if (print->copy[print->i] == '*')
		{
			print->precision = va_arg(print->ap, int);
			print->i++;
			return (print);
		}
		print->precision = 0;
		while (print->copy[print->i] >= '0' && print->copy[print->i] <= '9')
		{
			print->precision = print->precision * 10
					+ (print->copy[print->i] - '0');
			print->i++;
		}
		return (print);
	}
	else
		return (print);
}
