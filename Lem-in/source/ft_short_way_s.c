/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_way_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:49:19 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:25:59 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

void	ft_short_way_1_1(t_struct *p, int v)
{
	int		a;
	char	*itoa;

	while (!(ft_strequ(p->links, p->room[v])) && v != p->s)
		v++;
	if (v == p->s)
		return ;
	a = ft_strlen(p->room[v]);
	p->room[v][a] = ' ';
	p->way[p->d][ft_strlen(p->way[p->d])] = '-';
	itoa = ft_itoa(v);
	p->way[p->d] = ft_strcat(p->way[p->d], itoa);
	free(itoa);
	++p->d;
}

void	ft_short_way_1(t_struct *p, int f, int i, int a)
{
	int d;

	d = 0;
	free(p->links);
	p->links = (char *)ft_memalloc(sizeof(char) * 50);
	if (i == 1)
	{
		while (p->buff[f][a] != '-')
			++a;
		++a;
		while (p->buff[f][a])
			p->links[d++] = p->buff[f][a++];
	}
	else
	{
		while (p->buff[f][a] != '-')
		{
			p->links[a] = p->buff[f][a];
			++a;
		}
	}
	p->way[p->d] = (char *)ft_memalloc(sizeof(char) * 50);
	p->way[p->d][0] = 's';
	ft_short_way_1_1(p, 0);
}

void	ft_short_way_2(t_struct *p)
{
	int f;
	int c;

	while (p->d != p->g)
	{
		c = 0;
		p->links_1 = (char *)ft_memalloc(sizeof(char) * 50);
		f = ft_strlen(p->way[p->g]) - 1;
		while (p->way[p->g][f] == ' ' ||
			(p->way[p->g][f] >= '0' && p->way[p->g][f] <= '9'))
			--f;
		++f;
		while (p->way[p->g][f] >= '0' && p->way[p->g][f] <= '9')
			p->links_1[c++] = p->way[p->g][f++];
		c = ft_atoi(p->links_1);
		ft_short_way_2_1_1(p, c);
		ft_short_way_2_1(p);
		free(p->links_1);
		p->g++;
	}
}

void	ft_short_way(t_struct *p)
{
	int		a;
	int		d;
	int		f;

	f = -1;
	while (++f != p->f)
	{
		a = -1;
		p->links = (char *)ft_memalloc(sizeof(char) * 50);
		while (p->buff[f][++a] != '-')
			p->links[a] = p->buff[f][a];
		if (ft_strequ(p->links, p->start_1))
			ft_short_way_1(p, f, 1, 0);
		free(p->links);
		p->links = (char *)ft_memalloc(sizeof(char) * 50);
		d = 0;
		while (p->buff[f][++a])
			p->links[d++] = p->buff[f][a];
		if (ft_strequ(p->links, p->start_1))
			ft_short_way_1(p, f, 0, 0);
		free(p->links);
	}
	ft_short_way_2(p);
}
