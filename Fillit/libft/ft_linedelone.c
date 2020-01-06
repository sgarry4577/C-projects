/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linedelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:43:28 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/16 14:44:03 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_line	*ft_linedelone(t_line *start, t_line *todel)
{
	t_line	*tmp;

	if (!start || !todel)
		return (NULL);
	tmp = todel;
	todel = start;
	while (todel->next && todel->next != tmp)
		todel = todel->next;
	if (todel->next == NULL)
		return (NULL);
	todel->next = tmp->next;
	if (tmp->line)
		free(tmp->line);
	ft_memdel((void **)&tmp);
	tmp = NULL;
	return (todel);
}
