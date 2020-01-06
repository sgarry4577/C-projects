/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:58:58 by jjerde            #+#    #+#             */
/*   Updated: 2019/05/16 18:22:41 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <stdio.h>

int		ft_sqare(int i)
{
	int		g;

	g = 2;
	i = i / 16 * 4;
	while (g <= i)
	{
		if ((g * g) >= i)
			break ;
		g++;
	}
	return (g);
}

void	print_answer(char *map, int map_scale)
{
	int i;

	i = 0;
	while (i < map_scale * map_scale)
	{
		if (i != 0 && i % map_scale == 0)
			ft_putchar('\n');
		ft_putchar(map[i]);
		i++;
	}
	ft_putchar('\n');
}

char	*plase(char *tet, char *map, int offset, int c)
{
	int i;
	int count;
	int l;
	int map_scale;

	count = 0;
	i = 0;
	map_scale = ft_sqrt(ft_strlen(map));
	while (count < 4)
	{
		l = i / 4;
		if (tet[i] != '.')
		{
			map[(l * map_scale) + offset + (i - (l * 4))] = c;
			count++;
		}
		i++;
	}
	return (map);
}

int		think(char *tet, char *map, int map_scale, int offset)
{
	int i;
	int count;
	int ii;

	count = 0;
	i = 0;
	ii = offset;
	while (count < 4)
	{
		ii = (i / 4) * map_scale + (i % 4) + offset;
		if (ii / map_scale > offset / map_scale + i / 4 && tet[i] != '.')
			return (0);
		else if (ii > map_scale * map_scale)
			return (-1);
		else if (map[ii] == '.' || tet[i] == '.')
		{
			if (tet[i] != '.')
				count++;
			i++;
		}
		else if (map[ii] != '.' && tet[i] != '.')
			return (0);
	}
	return (1);
}

int		ft_logic(char *array, char *map, int map_scale, int offset)
{
	int res;
	int t;

	t = 0;
	while (array[t * 16])
	{
		while ((res = think(&array[t * 16], map, map_scale, offset)) == 0)
			offset++;
		if (res == 1)
		{
			map = plase(&array[t * 16], map, offset, t + 'A');
			t++;
			offset = 0;
		}
		else if (res == -1 && t-- > 0)
		{
			offset = ft_strsearch(map, t + 'A') -
					ft_strsearch(&array[t * 16], '#') + 1;
			map = plase(&array[t * 16], map, offset - 1, '.');
		}
		else if (++t == 0 && res == -1)
			return (ft_fuck_norm(map));
	}
	return (ending(array, map, map_scale));
}
