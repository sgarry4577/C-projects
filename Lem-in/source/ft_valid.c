/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:12:43 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:26:15 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

int		ft_valid_ants(t_struct *p)
{
	int a;
	int b;

	a = 0;
	if (ft_strequ(p->line, "##start") || ft_strequ(p->line, "##end"))
		return (0);
	if (p->line[0] == '#')
		return (1);
	while (p->line[a] && (p->line[a] >= '0' && p->line[a] <= '9'))
		a++;
	b = ft_strlen(p->line);
	if (a == b && p->i == 0 && b != 0)
	{
		p->i = ft_atoi(p->line);
		return (1);
	}
	return (0);
}

int		ft_record_start_end_2(t_struct *p, int a)
{
	++a;
	if (!(p->line[a]))
		return (0);
	if (p->line[a] == ' ')
		++a;
	while ((p->line[a] >= '0' && p->line[a] <= '9')
		&& p->line[a])
		++a;
	if (!(p->line[a]))
		return (0);
	if (p->line[a] == ' ')
		++a;
	if (!(p->line[a]))
		return (0);
	while ((p->line[a] >= '0' && p->line[a] <= '9')
		&& p->line[a])
		++a;
	if (p->line[a])
		return (0);
	return (1);
}

int		ft_record_start_end(t_struct *p, int a)
{
	if (ft_strequ(p->line, "##start") && p->start == 0)
	{
		p->stack[p->u++] = ft_strdup(p->line);
		p->start_1 = (char *)ft_memalloc(sizeof(char*) * ft_strlen(p->line));
		ft_strdel(&p->line);
		get_next_line(0, &p->line);
		while (p->line[a + 1] != ' ' && p->line[a + 1] && ++a != -2)
			p->start_1[a] = p->line[a];
		++p->start;
		return (ft_record_start_end_2(p, a));
	}
	if (ft_strequ(p->line, "##end") && p->finish == 0)
	{
		p->stack[p->u++] = ft_strdup(p->line);
		ft_strdel(&p->line);
		get_next_line(0, &p->line);
		p->end = (char *)ft_memalloc(sizeof(char*) * ft_strlen(p->line));
		while (p->line[a + 1] != ' ' && p->line[a + 1] && ++a != -2)
			p->end[a] = p->line[a];
		++p->finish;
		return (ft_record_start_end_2(p, a));
	}
	return (0);
}

int		ft_valid_rooms_end(t_struct *p)
{
	int f;

	f = 0;
	if (ft_strequ(p->room[p->s], p->start_1)
		|| ft_strequ(p->room[p->s], p->end))
		return (0);
	while (f != p->s)
	{
		if (ft_strequ(p->room[f], p->room[p->s]))
			return (0);
		++f;
	}
	return (1);
}

int		ft_valid_rooms(t_struct *p, int a)
{
	if (ft_strequ(p->line, "##start") || ft_strequ(p->line, "##end"))
	{
		if (!(ft_record_start_end(p, -1)))
			return (0);
		return (1);
	}
	if (p->line[a] == '#')
		return (1);
	if (p->line[a] == 'L')
		return (0);
	p->room[p->s] = (char *)ft_memalloc(sizeof(char) * ft_strlen(p->line));
	while (p->line[a] != ' ' && p->line[a])
	{
		p->room[p->s][a] = p->line[a];
		++a;
	}
	if (!(ft_valid_rooms_end(p)))
	{
		free(p->room[p->s]);
		return (0);
	}
	++p->s;
	return (1);
}
