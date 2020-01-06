/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:53:34 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:27:16 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

void	ft_res(t_struct *p, int a)
{
	int f;

	f = 0;
	while (f != a)
	{
		if ((p->i > p->mass_2[f] - p->mass_2[0]) || f == 0)
		{
			p->mass_4[p->n] = f;
			++p->n;
		}
		else
			break ;
		++f;
		--p->i;
		++p->ant;
	}
}

void	ft_clear(t_struct *pst, int a)
{
	while (++a != pst->l + 1)
		free(pst->kolia[a]);
	a = -1;
	while (++a != pst->d)
		free(pst->way[a]);
	a = -1;
	while (++a != pst->f)
		free(pst->buff[a]);
	a = -1;
	while (++a != pst->s)
		free(pst->room[a]);
	a = -1;
	while (++a != pst->u)
		free(pst->stack[a]);
	free(pst->res);
	free(pst->kolia);
	free(pst->way);
	free(pst->buff);
	free(pst->room);
	free(pst->start_1);
	free(pst->stack);
	free(pst->end);
	free(pst);
}

void	ft_start_0(t_struct *pst)
{
	pst->i = 0;
	pst->n = 1;
	pst->s = 0;
	pst->p = 0;
	pst->f = 0;
	pst->d = 0;
	pst->u = 0;
	pst->g = 0;
	pst->l = -1;
	pst->v = 0;
	pst->a = 0;
	pst->ant = 1;
}

void	ft_end(t_struct *pst, int a)
{
	a = ft_res_1(pst, 0, 0, 0);
	ft_putchar('\n');
	while (pst->i != 0)
		ft_res(pst, a);
	ft_res_2(pst);
	ft_clear(pst, -1);
}

int		main(int ac, char **av)
{
	t_struct	*pst;

	pst = (t_struct *)ft_memalloc(sizeof(t_struct));
	ft_start_0(pst);
	if (ac > 1 || av[1])
	{
		free(pst);
		return (ft_putstr("Error\n"));
	}
	if (ft_valid(pst, -1))
	{
		ft_clear(pst, -1);
		return (ft_putstr("Error: no valid maps\n"));
	}
	ft_short_way(pst);
	if (pst->l == -1)
	{
		ft_clear(pst, -1);
		return (ft_putstr("Error: no connection between start and finish\n"));
	}
	ft_end(pst, 0);
	return (0);
}
