/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_way_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:53:42 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:25:41 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

int		ft_valid_links_3_1(int a, t_struct *p, int index)
{
	free(p->links);
	if (index == p->s)
	{
		free(p->buff[p->f]);
		return (0);
	}
	a = -1;
	while (p->line[++a])
		p->buff[p->f][a] = p->line[a];
	++p->f;
	return (1);
}

int		ft_short_way_2_3_1(t_struct *p)
{
	int i;
	int f;

	i = 0;
	f = ft_atoi(&p->way[p->g][2]);
	while (i < p->a)
	{
		if (f == p->mass[i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_short_way_2_3_2(t_struct *p)
{
	p->mass[p->a] = ft_atoi(&p->way[p->g][2]);
	++p->a;
	return (0);
}

void	ft_short_way_2_3_0(t_struct *p, int flag, int v, int a)
{
	char	*itoa;

	if (flag == 1)
	{
		a = ft_strlen(p->room[v]);
		p->room[v][a] = ' ';
	}
	a = -1;
	while (p->way[p->g][++a])
		p->way[p->d][a] = p->way[p->g][a];
	p->way[p->d][a] = '-';
	if (flag == 1)
	{
		itoa = ft_itoa(v);
		ft_strcat(p->way[p->d], itoa);
		free(itoa);
	}
	else
	{
		ft_strcat(p->way[p->d], "f");
		p->kolia[p->l] = ft_strdup(p->way[p->d]);
		ft_short_way_2_3_2(p);
	}
	p->d++;
}

void	ft_short_way_2_3(t_struct *p, int v, int a, int flag)
{
	p->way[p->d] = (char *)ft_memalloc(sizeof(char) * 500);
	if (ft_short_way_2_3_1(p))
	{
		free(p->way[p->d]);
		return ;
	}
	if (ft_strequ(p->links, p->end))
	{
		++p->l;
		flag = -1;
	}
	while (!(ft_strequ(p->links, p->room[v])) && v != p->s)
		v++;
	if (v == p->s && flag == 1)
	{
		free(p->way[p->d]);
		return ;
	}
	a = -1;
	while (p->way[p->g][++a])
		p->way[p->d][a] = p->way[p->g][a];
	p->way[p->d][a] = '-';
	ft_short_way_2_3_0(p, flag, v, a);
}
