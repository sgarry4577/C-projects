/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logick_many.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:15:02 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/30 11:42:08 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

int		ft_analiticks_a_2(t_struct *p, int f, int a, int res)
{
	if (f <= p->g / 2 && a <= p->i / 2)
	{
		(a < f) ? res = f : 0;
		(a >= f) ? res = a : 0;
	}
	else if (f > p->g / 2 && a > p->i / 2)
	{
		f = p->g - f + 1;
		a = p->i - a + 1;
		if (a < f)
			res = f;
		else
			res = a;
	}
	else if (f > p->g / 2)
	{
		f = p->g - f + 1;
		res = f + a;
	}
	else
	{
		a = p->i - a + 1;
		res = f + a;
	}
	return (res);
}

int		ft_analiticks_a(t_struct *p, int f)
{
	int a;
	int res;

	a = 0;
	if (p->mass[p->i] < p->mass_2[f] && p->mass[0] > p->mass_2[f])
		a = 0;
	else
		while (a != p->i)
		{
			if (p->mass[a] < p->mass_2[f] && p->mass[a + 1] > p->mass_2[f])
			{
				++a;
				break ;
			}
			a++;
		}
	res = 0;
	return (ft_analiticks_a_2(p, f, a, res));
}

void	ft_logick_100_2(t_struct *p)
{
	int f;
	int index;
	int min;
	int ll;

	while (p->g != -1)
	{
		f = 0;
		index = 12000;
		while (f - 1 != p->g)
		{
			min = ft_analiticks_a(p, f);
			if (index > min)
			{
				ll = f;
				index = min;
			}
			f++;
		}
		ft_ll_2(p, ll);
	}
}

void	ft_logick_end(t_struct *p)
{
	int a;

	a = 0;
	while (p->mass[a] != 0)
		a++;
	if (a > p->i / 2)
		while (p->mass[0] != 0)
		{
			ft_rra_rrb_rrr(p->mass, p->i);
			ft_putstr("rra\n");
		}
	else
		while (p->mass[0] != 0)
		{
			ft_ra_rb_rr(p->mass, p->i);
			ft_putstr("ra\n");
		}
}

void	ft_logick_many(t_struct *p)
{
	if (ft_strequ(ft_valid_0(p->mass, p->i, p->g), "OK\n"))
		return ;
	ft_logicka(p);
	if (p->mass[0] == 0 && p->i != 1)
		ft_logick_start_0(p);
	else if (p->i != 1)
		ft_logick_start_1(p);
	ft_logick_100_2(p);
	ft_logick_end(p);
}
