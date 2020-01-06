/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logick_start_0.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:14:37 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 12:34:26 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

void	ft_logicka(t_struct *p)
{
	while (p->mass[0] != 0 && p->mass[0] != p->i + p->g + 1)
	{
		ft_pb(p);
		ft_putstr("pb\n");
		if (p->mass_2[0] > (p->i + p->g + 1) / 2)
		{
			ft_ra_rb_rr(p->mass_2, p->g);
			ft_putstr("rb\n");
		}
	}
}

void	ft_logick_start_0(t_struct *p)
{
	ft_ra_rb_rr(p->mass, p->i);
	ft_putstr("ra\n");
	while (p->mass[0] > p->mass[p->i])
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_putstr("ra\n");
		if (p->mass[0] == p->i + p->g + 1)
		{
			ft_ra_rb_rr(p->mass, p->i);
			ft_putstr("ra\n");
			break ;
		}
	}
	ft_logicka(p);
	if (p->mass[0] == p->i + p->g + 1)
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_putstr("ra\n");
	}
	ft_logicka(p);
}

void	ft_logick_start_1(t_struct *p)
{
	ft_ra_rb_rr(p->mass, p->i);
	ft_putstr("ra\n");
	ft_logicka(p);
	if (p->mass[0] == 0 && p->i != 1)
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_putstr("rra\n");
		ft_sa_sb_ss(p->mass, p->i);
		ft_putstr("sa\n");
		ft_ra_rb_rr(p->mass, p->i);
		ft_putstr("ra\n");
		ft_ra_rb_rr(p->mass, p->i);
		ft_putstr("ra\n");
	}
	ft_logicka(p);
}
