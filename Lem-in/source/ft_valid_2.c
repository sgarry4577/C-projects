/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:15:00 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:26:30 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

int		ft_valid_links_2(t_struct *p, int index)
{
	if (ft_strequ(p->links, p->start_1) || ft_strequ(p->links, p->end))
		return (1);
	if (ft_strequ(p->links, p->room[index]))
		return (1);
	return (0);
}

int		ft_valid_links_3(t_struct *p, int index, int f, int a)
{
	free(p->links);
	if (index == p->s)
	{
		free(p->buff[p->f]);
		return (0);
	}
	p->links = (char *)ft_memalloc(sizeof(char) * ft_strlen(p->line));
	while (p->line[++a])
	{
		p->links[f] = p->line[a];
		++f;
	}
	index = 0;
	while (index != p->s)
	{
		if (ft_valid_links_2(p, index))
			break ;
		++index;
	}
	return (ft_valid_links_3_1(a, p, index));
}

int		ft_valid_links(t_struct *p, int a, int f, int index)
{
	p->p = 10;
	p->links = (char *)ft_memalloc(sizeof(char) * ft_strlen(p->line));
	while (p->line[a] != '-' && p->line[a])
	{
		p->links[a] = p->line[a];
		++a;
	}
	if (p->line[a] == '-')
		while (index != p->s)
		{
			if (ft_valid_links_2(p, index))
				break ;
			++index;
		}
	else
	{
		free(p->links);
		return (0);
	}
	p->buff[p->f] = (char *)ft_memalloc(sizeof(char) * ft_strlen(p->line));
	return (ft_valid_links_3(p, index, f, a));
}

int		ft_valid_line_2(t_struct *p, int a)
{
	++a;
	if (!(p->line[a]))
		return (0);
	if (p->line[a] == '-' || p->line[a] == '+')
		a++;
	while ((p->line[a] >= '0' && p->line[a] <= '9')
	&& p->line[a])
		++a;
	if (!(p->line[a]))
		return (0);
	if (p->line[a] == ' ')
		++a;
	if (!(p->line[a]))
		return (0);
	return (ft_valid_line_2_1(p, a));
}

int		ft_start_end(t_struct *p)
{
	if (!(ft_record_start_end(p, -1)))
		return (0);
	return (1);
}
