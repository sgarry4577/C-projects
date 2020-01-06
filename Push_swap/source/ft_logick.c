/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logick.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:23:17 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 12:34:31 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

void	ft_analitic(int *mass, int i)
{
	int		a;
	int		m[i + 2];
	int		f;
	int		g;

	a = 0;
	while (a <= i)
	{
		m[a] = mass[a];
		a++;
	}
	a = 0;
	while (a <= i)
	{
		f = 0;
		g = 0;
		while (f <= i)
		{
			if (m[a] > m[f])
				g++;
			f++;
		}
		mass[a] = g;
		a++;
	}
}

void	ft_logick_3(t_struct *p)
{
	while (!(ft_strequ(ft_valid_0(p->mass, p->i, p->g), "OK\n")))
	{
		if (p->mass[0] > p->mass[1])
		{
			ft_sa_sb_ss(p->mass, p->i);
			ft_putstr("sa\n");
		}
		else
		{
			ft_rra_rrb_rrr(p->mass, p->i);
			ft_putstr("rra\n");
		}
	}
}

void	ft_logick_5_2(t_struct *p)
{
	if (p->mass[0] > p->mass[p->i])
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_putstr("rra\n");
	}
	else if (p->mass[0] == p->g + 1)
	{
		ft_pb(p);
		ft_putstr("pb\n");
	}
	else
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_putstr("rra\n");
	}
}

void	ft_logick_5(t_struct *p)
{
	int a;

	while (!(ft_strequ(ft_valid_0(p->mass, p->i, p->g), "OK\n")))
	{
		a = -1;
		while (p->i != -1 && p->mass[a + 1] == p->g + 2 + a && a != p->i)
			a++;
		if (a == p->i || p->i == -1)
		{
			ft_pa(p);
			ft_putstr("pa\n");
		}
		else if (p->mass[0] > p->mass[1] && p->mass[1] != p->mass[2] - 1)
		{
			ft_sa_sb_ss(p->mass, p->i);
			ft_putstr("sa\n");
		}
		else
			ft_logick_5_2(p);
	}
}

void	ft_logick(t_struct *p)
{
	if (p->i <= 2)
		return (ft_logick_3(p));
	if (p->i <= 4)
		return (ft_logick_5(p));
	return (ft_logick_many(p));
}
