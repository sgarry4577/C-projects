/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:03:33 by jjerde            #+#    #+#             */
/*   Updated: 2019/07/25 14:35:03 by sgarry           ###   ########.fr       */
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
