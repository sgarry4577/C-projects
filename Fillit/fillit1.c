/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:08:42 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/16 14:20:21 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_valid_1line(char **array, int i, int f)
{
	int a;

	a = 0;
	if (i == 0 && f == 0)
	{
		array[i][f + 1] == '#' ? a++ : 0;
		array[i + 1][f] == '#' ? a++ : 0;
	}
	if (i == 0 && (f >= 1 && f <= 2))
	{
		array[i][f - 1] == '#' ? a++ : 0;
		array[i][f + 1] == '#' ? a++ : 0;
		array[i + 1][f] == '#' ? a++ : 0;
	}
	if (i == 0 && f == 3)
	{
		array[i][f - 1] == '#' ? a++ : 0;
		array[i + 1][f] == '#' ? a++ : 0;
	}
	return (a);
}

static int		ft_valid_2line(char **array, int i, int f)
{
	int a;

	a = 0;
	if ((i >= 1 && i <= 2) && f == 0)
	{
		array[i][f + 1] == '#' ? a++ : 0;
		array[i + 1][f] == '#' ? a++ : 0;
		array[i - 1][f] == '#' ? a++ : 0;
	}
	if ((i >= 1 && i <= 2) && f == 3)
	{
		array[i][f - 1] == '#' ? a++ : 0;
		array[i + 1][f] == '#' ? a++ : 0;
		array[i - 1][f] == '#' ? a++ : 0;
	}
	if ((i >= 1 && i <= 2) && (f >= 1 && f <= 2))
	{
		array[i][f - 1] == '#' ? a++ : 0;
		array[i + 1][f] == '#' ? a++ : 0;
		array[i - 1][f] == '#' ? a++ : 0;
		array[i][f + 1] == '#' ? a++ : 0;
	}
	return (a);
}

static int		ft_validvalid(char **array, int i, int f)
{
	int a;

	a = 0;
	a += ft_valid_1line(array, i, f);
	a += ft_valid_2line(array, i, f);
	if (i == 3 && f == 0)
	{
		array[i][f + 1] == '#' ? a++ : 0;
		array[i - 1][f] == '#' ? a++ : 0;
	}
	if (i == 3 && f == 3)
	{
		array[i][f - 1] == '#' ? a++ : 0;
		array[i - 1][f] == '#' ? a++ : 0;
	}
	if ((f >= 1 && f <= 2) && i == 3)
	{
		array[i][f - 1] == '#' ? a++ : 0;
		array[i - 1][f] == '#' ? a++ : 0;
		array[i][f + 1] == '#' ? a++ : 0;
	}
	return (a);
}

char			*ft_valid_pro(char **array, char *mega_array_line)
{
	int i;
	int g;
	int f;
	int a;

	i = -1;
	g = 0;
	a = 0;
	while (++i < 4)
	{
		f = -1;
		while (++f < 4)
			if (array[i][f] == '#')
			{
				a += ft_validvalid(array, i, f);
				g++;
			}
	}
	if (g == 4 && (a == 6 || a == 8))
	{
		mega_array_line = ft_mega_array(array, mega_array_line);
		return (mega_array_line);
	}
	return (NULL);
}
