/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:41:04 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/16 17:41:28 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_valid_line(char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#')
			return (1);
		i++;
	}
	if (i != 4)
		return (1);
	return (0);
}

static void		*ft_clean(char **array)
{
	int i;

	i = 0;
	while (i < 5)
	{
		ft_strdel(&array[i]);
		i++;
	}
	return (NULL);
}

static int		ft_valid_line_end(char **array, char *str)
{
	array[4] = ft_strdup(str);
	if (array[4][0] != '\0')
	{
		ft_clean(&*array);
		return (-1);
	}
	ft_clean(&*array);
	return (0);
}

static char		*ft_valid_square(char *str, char *mega_array_line)
{
	static char	*array[4];
	int			i;

	i = -1;
	while (++i < 4)
	{
		if (array[i] == NULL)
		{
			array[i] = ft_strdup(str);
			if (ft_valid_line(array[i]))
				return (ft_clean(&*array));
			break ;
		}
	}
	if (i == 3)
		if (!(mega_array_line = ft_valid_pro(array, mega_array_line)))
			return (NULL);
	if (i == 4)
		if (ft_valid_line_end(array, str) == -1)
			return (ft_clean(&*array));
	mega_array_line == NULL ? mega_array_line = ft_strnew(0) : 0;
	return (mega_array_line);
}

char			*ft_valid(char *str, char *mega_array_line)
{
	int		fd;
	char	*line;
	int		res;
	int		flag;

	flag = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while ((res = get_next_line(fd, &line)))
	{
		flag += res;
		if (res == -1)
			return (ft_clean(&line));
		if (!(mega_array_line = ft_valid_square(line, mega_array_line)))
			return (NULL);
		if (line)
			ft_memdel((void **)&line);
	}
	flag = (flag + 1) % 5;
	if (flag != 0 || close(fd) == -1 || ft_strlen(mega_array_line) > 417)
		return (NULL);
	return (mega_array_line);
}
