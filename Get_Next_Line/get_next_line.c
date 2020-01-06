/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:45:54 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/03 13:17:45 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		ft_check(char **line, int fd)
{
	if (BUFF_SIZE <= 0 || fd < 0 || fd > 12000 || !line)
		return (1);
	return (0);
}

static	void	ft_recordline(char **s, char **line, int fd)
{
	int		i;
	int		g;
	char	*exchange;

	i = 0;
	g = 0;
	while (s[fd][i] != '\n' && s[fd][i])
		i++;
	if (s[fd][i] == '\0')
	{
		*line = ft_strsub(s[fd], 0, i);
		ft_strdel(&s[fd]);
	}
	else
	{
		while (s[fd][g])
			g++;
		*line = ft_strsub(s[fd], 0, i);
		exchange = ft_strsub(s[fd], i + 1, g);
		free(s[fd]);
		s[fd] = exchange;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
}

static	int		ft_record(int fd, char **s)
{
	int		res;
	char	*exchange;
	char	buff[BUFF_SIZE + 1];

	while ((res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		exchange = ft_strjoinfree(s[fd], buff, 1, 0);
		s[fd] = exchange;
	}
	return (res);
}

static	int		ft_distribution(int i, int fd, char **line, char **s)
{
	if (i < 0)
		return (-1);
	if (i == 0 && s[fd] == NULL)
		return (0);
	ft_recordline(s, line, fd);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*s[12000];

	if (ft_check(line, fd))
		return (-1);
	return (ft_distribution(ft_record(fd, s), fd, line, s));
}
