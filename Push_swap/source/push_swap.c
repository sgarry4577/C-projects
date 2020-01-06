/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:54:15 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 15:50:37 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

int		main(int av, char **ac)
{
	t_struct *pst;

	if (av <= 1)
		return (ft_putstr("Arguments Pleas\n"));
	pst = (t_struct *)ft_memalloc(sizeof(t_struct));
	if (ft_valid_v(pst, ac, av))
		av -= 1;
	if (!(ft_valid_1(ac, av, pst)))
	{
		free(pst);
		return (ft_putstr("Error\n"));
	}
	ft_analitic(pst->mass, pst->i);
	ft_logick(pst);
	free(pst);
}
