/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:38:42 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/02 18:55:12 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int counter;
	int difference;

	difference = max - min;
	if (difference <= 0)
		return (0);
	range = malloc(sizeof(int) * (difference + 1));
	counter = 0;
	while (difference > counter)
	{
		range[counter] = min;
		counter++;
		min++;
	}
	return (range);
}
