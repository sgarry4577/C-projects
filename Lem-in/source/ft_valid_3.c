/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:58:20 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 19:26:45 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include "../libft/libft.h"

int		ft_valid_line_2_1(t_struct *p, int a)
{
	if (p->line[a] == '-' || p->line[a] == '+')
		a++;
	while ((p->line[a] >= '0' && p->line[a] <= '9')
		&& p->line[a])
		++a;
	if (p->line[a])
		return (0);
	else if (p->p != 10)
	{
		if (!(ft_valid_rooms(p, 0)))
			return (0);
	}
	else
		return (0);
	return (1);
}
