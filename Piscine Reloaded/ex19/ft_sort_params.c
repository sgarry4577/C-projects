/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:38:36 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/03 11:10:00 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s, char *s2)
{
	int i;

	i = 0;
	while (s[i] || s2[i])
	{
		if (s[i] > s2[i])
			return (1);
		if (s[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) == 1)
			{
				av[0] = av[i];
				av[i] = av[i + 1];
				av[i + 1] = av[0];
				i = 1;
			}
			else
				i++;
		}
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
