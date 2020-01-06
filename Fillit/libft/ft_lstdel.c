/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:17:13 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/11 16:29:55 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *next;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		next = (*alst)->next;
		*alst = next;
	}
	*alst = NULL;
}
