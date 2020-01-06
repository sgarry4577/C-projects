/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlarson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:16:04 by hlarson           #+#    #+#             */
/*   Updated: 2019/07/17 18:46:47 by hlarson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_pow_long_x(long long e, unsigned long long k)
{
	char		*c;
	char		*d;
	char		*x;

	d = ft_strdup("0.0");
	while (k != 0)
	{
		if (k & 1)
		{
			if (e - 63 < 0)
				c = ft_long_pow_minus(-(e - 63));
			else
				c = ft_long_pow(e - 63);
			x = ft_long_sum_dot(d, c);
			ft_strdel(&c);
			ft_strdel(&d);
			d = x;
		}
		k = k >> 1;
		e++;
	}
	return (d);
}

static char		*ft_create_float(long double d, int i, t_list *print)
{
	char					*c;
	unsigned long long		k;
	int						s;
	long long				e;

	i--;
	u_q.ld = d;
	s = (u_q.x[1] & 0x8000) >> 15;
	e = (u_q.x[1] & 0x7FFF) - 16383;
	k = (u_q.x[0] & 0xffffffffffffffff);
	c = ft_pow_long_x(e, k);
	c = ft_make_precision(c, i, print);
	c = (s == 1) ? ft_strjoin(ft_strdup("-"), c) : c;
	return (c);
}

char			*ft_long_double(t_list *print)
{
	long double	d;
	int			i;

	i = 6;
	d = va_arg(print->ap, long double);
	if (print->precision != -1)
		i = print->precision;
	return (ft_create_float(d, i, print));
}
