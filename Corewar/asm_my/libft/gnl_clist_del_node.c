/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_clist_del_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:37:56 by sgarry            #+#    #+#             */
/*   Updated: 2019/09/05 11:37:56 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_clist_del_node(t_clist *clist, t_lists **node, void (*del)(void**))
{
	t_lists	*prev;
	t_lists	*tmp;

	if (!node || !*node || !clist)
		return ;
	prev = ft_clist_find_prev(*node);
	tmp = (*node)->next;
	if (*node == clist->parent_node)
		clist->parent_node = tmp;
	if (del)
		del(&(*node)->data);
	free(*node);
	*node = NULL;
	--(clist->list_size);
	if (prev)
		prev->next = tmp;
	if (tmp == clist->parent_node)
		clist->list = tmp;
}
