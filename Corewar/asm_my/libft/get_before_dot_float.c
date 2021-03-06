/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_after_dot_float.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlarson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:03:03 by hlarson           #+#    #+#             */
/*   Updated: 2019/05/10 12:05:38 by hlarson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_before_dot_float(char *c)
{
	int		i;

	i = 0;
	while (c[i] != '.')
		i++;
	return (i);
}
