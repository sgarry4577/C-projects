/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mass.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:06:01 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 15:48:28 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

void	ft_print_mass(t_struct *p)
{
	int a;

	a = 0;
	ft_printf("         mass         mass_2\n");
	while (a <= p->i || a <= p->g)
	{
		if (a <= p->i && a <= p->g)
			ft_printf("%i|%11i%15i\n", a, p->mass[a], p->mass_2[a]);
		else if (a <= p->i)
			ft_printf("%i|%11i\n", a, p->mass[a]);
		else
			ft_printf("%i|%26i\n", a, p->mass_2[a]);
		++a;
	}
}
