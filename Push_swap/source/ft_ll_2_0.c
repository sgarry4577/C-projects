/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll_2_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:58:16 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 12:34:14 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

void	ft_ll_2_6(t_struct *p, int a, int f, int ll)
{
	if (a < ll)
		ft_ll_2_5(p, a, f, ll);
	else
		ft_ll_2_4(p, ll);
}

void	ft_ll_2_7(t_struct *p, int a, int f, int ll)
{
	ll = p->g - ll + 1;
	a = p->i - a + 1;
	if (a < ll)
		ft_ll_2_3(p, f, a, ll);
	else
		ft_ll_2_2(p, ll);
}

void	ft_ll_2_4(t_struct *p, int ll)
{
	while (ll != 0)
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_ra_rb_rr(p->mass_2, p->g);
		ft_putstr("rr\n");
		--ll;
	}
	while (!(p->mass[p->i] < p->mass_2[0] && p->mass[0] > p->mass_2[0]))
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_putstr("ra\n");
	}
	ft_pa(p);
	ft_putstr("pa\n");
}

void	ft_ll_2_5(t_struct *p, int a, int f, int ll)
{
	f = a;
	while (f--)
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_ra_rb_rr(p->mass_2, p->g);
		ft_putstr("rr\n");
	}
	ll -= a;
	while (ll != 0)
	{
		ft_ra_rb_rr(p->mass_2, p->g);
		ft_putstr("rb\n");
		--ll;
	}
	ft_pa(p);
	ft_putstr("pa\n");
}
