/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:52:29 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/16 17:03:20 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	static char		*mega_array_line;
	int				map_scale;
	char			*map;

	if (ac == 2)
	{
		if (!(mega_array_line = ft_valid(av[1], mega_array_line)))
			ft_putstr("error\n");
		else
		{
			map_scale = ft_sqare(ft_strlen(mega_array_line));
			map = ft_memalloc(map_scale * map_scale + 1);
			map = ft_memset(map, '.', map_scale * map_scale);
			while (ft_logic(mega_array_line, map, map_scale, 0) == 0)
			{
				map_scale += 1;
				map = ft_memalloc(map_scale * map_scale + 1);
				map = ft_memset(map, '.', map_scale * map_scale);
			}
		}
	}
	else
		ft_putstr("error\n");
	return (0);
}
