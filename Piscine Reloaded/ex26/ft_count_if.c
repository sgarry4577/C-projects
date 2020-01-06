/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:38:39 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/02 20:43:40 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int summa;

	i = 0;
	summa = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			summa++;
		i++;
	}
	return (summa);
}
