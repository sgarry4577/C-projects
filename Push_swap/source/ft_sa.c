/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:19:29 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 12:35:12 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

void	ft_sa_sb_ss(int *mass, int i)
{
	int	c;

	if (i >= 1)
	{
		c = mass[0];
		mass[0] = mass[1];
		mass[1] = c;
	}
}

void	ft_pb(t_struct *p)
{
	int f;
	int a;

	a = p->g;
	if (p->i <= -1)
		return ;
	while (a != -1)
	{
		p->mass_2[a + 1] = p->mass_2[a];
		a--;
	}
	p->mass_2[0] = p->mass[0];
	f = 0;
	while (f != p->i)
	{
		p->mass[f] = p->mass[f + 1];
		f++;
	}
	p->i -= 1;
	p->g += 1;
}

void	ft_pa(t_struct *p)
{
	int f;
	int a;

	a = p->i;
	if (p->g <= -1)
		return ;
	while (a != -1)
	{
		p->mass[a + 1] = p->mass[a];
		a--;
	}
	p->mass[0] = p->mass_2[0];
	f = 0;
	while (f != p->g)
	{
		p->mass_2[f] = p->mass_2[f + 1];
		f++;
	}
	p->g -= 1;
	p->i += 1;
}

void	ft_ra_rb_rr(int *mass, int i)
{
	int c;
	int f;

	if (i <= 0)
		return ;
	c = mass[0];
	f = 0;
	while (f != i)
	{
		mass[f] = mass[f + 1];
		f++;
	}
	mass[i] = c;
}

void	ft_rra_rrb_rrr(int *mass, int i)
{
	int c;
	int a;

	if (i <= 0)
		return ;
	a = i;
	c = mass[i];
	while (i != -1)
	{
		mass[i] = mass[i - 1];
		i--;
	}
	mass[0] = c;
}
