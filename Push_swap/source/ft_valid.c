/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:56:13 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/30 11:33:10 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

int		ft_valid_2(t_struct *pst, int a)
{
	int i;
	int f;

	i = 0;
	while (i <= a - 2)
	{
		f = i + 1;
		while (f <= a - 1)
		{
			if (pst->mass[i] == pst->mass[f])
				return (0);
			f++;
		}
		++i;
	}
	pst->g = -1;
	pst->i = a - 1;
	return (1);
}

int		ft_valid(char **ac, int av, int a, t_struct *pst)
{
	int i;
	int g;
	int f;

	i = 1;
	f = 0;
	if (a == 0)
		return (0);
	while (i <= av - 1)
	{
		g = 0;
		while (ac[i][g] == ' ' && ac[i][g])
			g++;
		if (ac[i][g])
			pst->mass[f++] = ft_atoi(ac[i]);
		if ((ac[i][g] == '-' && pst->mass[f - 1] > 0)
			|| (ac[i][g] >= '0' && ac[i][g] <= '9' && pst->mass[f - 1] < 0))
			return (0);
		while (ac[i][g] && ac[i][g] != ' ')
			ac[i][g++] = ' ';
		if (ac[i][g] == '\0')
			i++;
	}
	return (ft_valid_2(pst, a));
}

int		ft_valid_1(char **s, int av, t_struct *pst)
{
	int i;
	int g;
	int a;

	i = 0;
	a = 0;
	while (i++ < av - 1)
	{
		g = 0;
		while (s[i][g])
		{
			if ((s[i][g] >= '0' && s[i][g] <= '9') || s[i][g] == ' ' ||
			(s[i][g] == '-' && (s[i][g + 1] >= '0' && s[i][g + 1] <= '9')))
			{
				while ((s[i][g] >= '0' && s[i][g] <= '9') || s[i][g] == '-')
					++g;
				(s[i][g - 1] >= '0' && s[i][g - 1] <= '9') ? ++a : 0;
				while (s[i][g] == ' ')
					g++;
			}
			else
				return (0);
		}
	}
	return (ft_valid(s, av, a, pst));
}

char	*ft_valid_0(int *mass, int i, int g)
{
	int a;
	int f;

	if (g != -1)
		return ("KO\n");
	a = 0;
	while (a != i)
	{
		f = a + 1;
		while (f <= i)
		{
			if (mass[a] > mass[f])
				return ("KO\n");
			f++;
		}
		a++;
	}
	return ("OK\n");
}

int		ft_valid_v(t_struct *p, char **ac, int av)
{
	int a;

	p->c = -1;
	p->v = 0;
	if (ft_strequ(ac[1], "-vc"))
	{
		p->c = 1;
		p->v = 1;
		a = 1;
		while (a < av - 1)
		{
			ac[a] = ac[a + 1];
			a++;
		}
		return (1);
	}
	return (ft_valid_vc(p, ac, av));
}
