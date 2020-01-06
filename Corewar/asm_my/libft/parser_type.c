/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 17:01:43 by rpizpot           #+#    #+#             */
/*   Updated: 2019/06/25 17:01:43 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*parser_type(t_list *print)
{
	size_t i;

	i = 0;
	while (print->typical_type[i])
	{
		if (print->copy[print->i] == print->typical_type[i])
		{
			print->type = print->copy[print->i];
			break ;
		}
		i++;
	}
	return (print);
}
