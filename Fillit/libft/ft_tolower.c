/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:49:02 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/10 14:52:15 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	unsigned int res;

	res = 0;
	if (c >= 65 && c <= 90)
	{
		res = c + 32;
		return (res);
	}
	return (c);
}
