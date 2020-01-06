/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 12:45:35 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/16 18:19:17 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_fuck_norm(char *map)
{
	ft_memdel((void **)&map);
	return (0);
}

int				ending(char *array, char *map, int map_scale)
{
	print_answer(map, map_scale);
	ft_memdel((void **)&map);
	ft_memdel((void **)&array);
	return (1);
}

static void		ft_obrez1(char **array)
{
	int		i;
	char	*str;
	int		g;
	int		d;

	i = 4;
	d = 0;
	while (--i >= 0)
	{
		g = 4;
		while (--g >= 0)
			if (array[i][g] == '#')
				d = i;
	}
	while (d != 0)
	{
		str = array[0];
		array[0] = array[1];
		array[1] = array[2];
		array[2] = array[3];
		array[3] = str;
		d -= 1;
	}
}

static void		ft_obrez(char **array)
{
	int		i;
	char	s;
	int		g;
	int		h;

	g = 4;
	while (--g >= 0)
	{
		i = 4;
		while (--i >= 0)
			if (array[i][g] == '#')
				h = g;
	}
	while (--h != -1)
	{
		i = -1;
		while (++i < 4)
		{
			s = array[i][0];
			array[i][0] = array[i][1];
			array[i][1] = array[i][2];
			array[i][2] = array[i][3];
			array[i][3] = s;
		}
	}
}

char			*ft_mega_array(char **array, char *mega_array_line)
{
	char	*exchange;
	int		i;

	i = 0;
	ft_obrez1(array);
	ft_obrez(array);
	while (i < 4)
	{
		exchange = ft_strjoinfree(mega_array_line, array[i], 1, 0);
		mega_array_line = exchange;
		i++;
	}
	return (mega_array_line);
}
