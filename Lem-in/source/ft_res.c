/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_res.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:08:51 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:25:10 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

int		ft_res_2_1(t_struct *p, int i, int a, int g)
{
	int u;

	if (p->kolia[p->mass_4[a]][g + 1] == 'f')
	{
		p->res[i] = ft_strcat(p->res[i], p->end);
		p->res[i] = ft_strcat(p->res[i], " ");
	}
	else
	{
		u = ft_atoi(&p->kolia[p->mass_4[a]][++g]);
		p->res[i] = ft_strcat(p->res[i], p->room[u]);
	}
	return (g);
}

void	ft_res_2_0(t_struct *p, int i, int a, int d)
{
	int		f;
	char	*buff;
	int		g;

	g = 0;
	while (d < p->mass_2[p->mass_4[a]])
	{
		f = ft_strlen(p->res[i]);
		p->res[i][f++] = 'L';
		buff = ft_itoa(a);
		p->res[i] = ft_strcat(p->res[i], buff);
		free(buff);
		f = ft_strlen(p->res[i]);
		p->res[i][f++] = '-';
		while (p->kolia[p->mass_4[a]][g] != '-')
			++g;
		g = ft_res_2_1(p, i, a, g);
		++d;
		++i;
	}
}

void	ft_res_end(t_struct *p)
{
	int g;

	g = -1;
	while (p->res[++g][0] == 'L')
		ft_printf("%s\n", p->res[g]);
	g = -1;
	while (++g != 1000)
		free(p->res[g]);
}

void	ft_res_2(t_struct *p)
{
	int		a;
	int		f;
	int		i;
	int		v;
	int		u;

	f = 0;
	while (f != 1000)
		p->res[f++] = (char *)ft_memalloc(sizeof(char) * 10000);
	a = 1;
	v = 0;
	while (a != p->n)
	{
		i = v;
		u = a;
		while (a == u || (p->mass_4[a - 1] < p->mass_4[a]))
		{
			i = v;
			ft_res_2_0(p, i, a, 0);
			++a;
		}
		++v;
	}
	ft_res_end(p);
}

int		ft_res_1(t_struct *pst, int c, int res, int a)
{
	while (pst->l + 1 != a)
	{
		res = 0;
		c = 0;
		while (pst->kolia[a][c])
		{
			if (pst->kolia[a][c] == '-')
				res++;
			++c;
		}
		pst->mass_2[a] = res;
		++a;
	}
	return (a);
}
