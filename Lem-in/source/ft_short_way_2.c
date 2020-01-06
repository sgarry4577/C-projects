/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_way_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:39:40 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:25:25 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

void	ft_short_way_2_2(t_struct *p, int f, int i, int a)
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
	ft_short_way_2_3(p, 0, 0, 1);
}

void	ft_short_way_2_1(t_struct *p)
{
	int a;
	int d;
	int f;

	f = -1;
	while (++f != p->f)
	{
		a = -1;
		p->links = (char *)ft_memalloc(sizeof(char) * 50);
		while (p->buff[f][++a] != '-')
			p->links[a] = p->buff[f][a];
		if (ft_strequ(p->links, p->links_1))
			ft_short_way_2_2(p, f, 1, 0);
		free(p->links);
		p->links = (char *)ft_memalloc(sizeof(char) * 50);
		d = 0;
		while (p->buff[f][++a])
			p->links[d++] = p->buff[f][a];
		if (ft_strequ(p->links, p->links_1))
			ft_short_way_2_2(p, f, 0, 0);
		free(p->links);
	}
}

void	ft_short_way_2_1_1(t_struct *p, int c)
{
	int a;

	a = -1;
	c = ft_atoi(p->links_1);
	free(p->links_1);
	p->links_1 = (char *)ft_memalloc(sizeof(char) * ft_strlen(p->room[c]));
	while (p->room[c][++a + 1])
		p->links_1[a] = p->room[c][a];
}
