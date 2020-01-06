/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:35:55 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 12:34:18 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

void	ft_ll_2_0(t_struct *p, int f, int a, int ll)
{
	f = a;
	while (f != p->i + 1)
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_putstr("rra\n");
		f++;
	}
	while (ll != 0)
	{
		ft_ra_rb_rr(p->mass_2, p->g);
		ft_putstr("rb\n");
		--ll;
	}
	ft_pa(p);
	ft_putstr("pa\n");
}

void	ft_ll_2_1(t_struct *p, int ll)
{
	while (ll != p->g + 1)
	{
		ft_rra_rrb_rrr(p->mass_2, p->g);
		ft_putstr("rrb\n");
		++ll;
	}
	while (!(p->mass[p->i] < p->mass_2[0] && p->mass[0] > p->mass_2[0]))
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_putstr("ra\n");
	}
	ft_pa(p);
	ft_putstr("pa\n");
}

void	ft_ll_2_2(t_struct *p, int ll)
{
	while (ll != 0)
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_rra_rrb_rrr(p->mass_2, p->g);
		ft_putstr("rrr\n");
		--ll;
	}
	while (!(p->mass[p->i] < p->mass_2[0] && p->mass[0] > p->mass_2[0]))
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_putstr("rra\n");
	}
	ft_pa(p);
	ft_putstr("pa\n");
}

void	ft_ll_2_3(t_struct *p, int f, int a, int ll)
{
	f = a;
	while (f--)
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_rra_rrb_rrr(p->mass_2, p->g);
		ft_putstr("rrr\n");
	}
	ll -= a;
	while (ll != 0)
	{
		ft_rra_rrb_rrr(p->mass_2, p->g);
		ft_putstr("rrb\n");
		--ll;
	}
	ft_pa(p);
	ft_putstr("pa\n");
}

void	ft_ll_2(t_struct *p, int ll)
{
	int a;
	int f;

	a = 0;
	f = 0;
	if (p->mass[p->i] < p->mass_2[ll] && p->mass[0] > p->mass_2[ll])
		a = 0;
	else
		while (a != p->i)
		{
			if (p->mass[a] < p->mass_2[ll] && p->mass[a + 1] > p->mass_2[ll])
			{
				++a;
				break ;
			}
			a++;
		}
	if (ll <= p->g / 2 && a <= p->i / 2)
		ft_ll_2_6(p, a, f, ll);
	else if (ll > p->g / 2 && a > p->i / 2)
		ft_ll_2_7(p, a, f, ll);
	else if (ll > p->g / 2)
		ft_ll_2_1(p, ll);
	else
		ft_ll_2_0(p, f, a, ll);
}
