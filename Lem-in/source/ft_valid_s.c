/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:46:46 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:27:00 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

int		ft_valid_line(t_struct *p)
{
	int a;

	a = 0;
	if (ft_strequ(p->line, "##start") || ft_strequ(p->line, "##end"))
		return (ft_start_end(p));
	if (p->line[a] == 'L')
		return (0);
	if (p->line[a] == '#')
		return (1);
	while (p->line[a] != ' ' && p->line[a])
		++a;
	if (p->line[a])
	{
		if (!(ft_valid_line_2(p, a)))
			return (0);
	}
	else
	{
		if (!ft_valid_links(p, 0, 0, 0))
			return (0);
	}
	return (1);
}

int		ft_valid(t_struct *p, int v)
{
	p->res = (char **)ft_memalloc(sizeof(char *) * 1000);
	p->kolia = (char **)ft_memalloc(sizeof(char*) * 12000);
	p->stack = (char **)ft_memalloc(sizeof(char*) * 12000);
	p->way = (char **)ft_memalloc(sizeof(char*) * 10000);
	p->buff = (char **)ft_memalloc(sizeof(char*) * 12000);
	p->room = (char **)ft_memalloc(sizeof(char*) * 12000);
	while (get_next_line(0, &(p->line)))
	{
		if (p->i != 0 && !(ft_valid_line(p)))
		{
			free(p->line);
			return (1);
		}
		else if (!(ft_valid_ants(p)) && p->i == 0)
		{
			free(p->line);
			return (1);
		}
		p->stack[p->u++] = ft_strdup(p->line);
		free(p->line);
	}
	while (++v != p->u)
		ft_printf("%s\n", p->stack[v]);
	return (0);
}
