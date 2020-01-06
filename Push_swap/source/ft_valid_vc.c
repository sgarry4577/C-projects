/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_vc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:05:22 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 16:08:28 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

int		ft_valid_vc(t_struct *p, char **ac, int av)
{
	int a;

	if (ft_strequ(ac[1], "-v"))
	{
		p->v = 1;
		a = 1;
		while (a < av - 1)
		{
			ac[a] = ac[a + 1];
			a++;
		}
		return (1);
	}
	if (ft_strequ(ac[1], "-c"))
	{
		p->c = 1;
		a = 1;
		while (a < av - 1)
		{
			ac[a] = ac[a + 1];
			a++;
		}
		return (1);
	}
	return (0);
}
