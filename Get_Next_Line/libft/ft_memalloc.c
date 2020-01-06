/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:03:33 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/09 12:02:23 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*memory;

	if (!(memory = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		((char*)memory)[i] = 0;
		i++;
	}
	return (memory);
}
