/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_new_link_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <rpizpot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 14:32:43 by rpizpot           #+#    #+#             */
/*   Updated: 2019/09/05 10:56:06 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

t_link_asm	*add_new_link_list(t_link_asm *old, t_link_asm *new)
{
	t_link_asm *start;

	start = old;
	if (!start)
	{
		start = new;
		return (start);
	}
	while (old->next)
		old = old->next;
	new->previous = old;
	old->next = new;
	return (start);
}
