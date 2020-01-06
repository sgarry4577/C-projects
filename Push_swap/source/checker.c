/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:00:25 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/30 11:49:46 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../libft/libft.h"

int		ft_comand_2(char *buff, t_struct *p)
{
	if (ft_strequ(buff, "rr"))
	{
		ft_ra_rb_rr(p->mass, p->i);
		ft_ra_rb_rr(p->mass_2, p->g);
	}
	else if (ft_strequ(buff, "rra"))
		ft_rra_rrb_rrr(p->mass, p->i);
	else if (ft_strequ(buff, "rrb"))
		ft_rra_rrb_rrr(p->mass_2, p->g);
	else if (ft_strequ(buff, "rrr"))
	{
		ft_rra_rrb_rrr(p->mass, p->i);
		ft_rra_rrb_rrr(p->mass_2, p->g);
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (p->v)
		ft_print_mass(p);
	if (p->c != -1)
		p->c += 1;
	return (0);
}

int		ft_comand(char *buff, t_struct *p)
{
	if (ft_strequ(buff, "sa"))
		ft_sa_sb_ss(p->mass, p->i);
	else if (ft_strequ(buff, "sb"))
		ft_sa_sb_ss(p->mass_2, p->g);
	else if (ft_strequ(buff, "ss"))
	{
		ft_sa_sb_ss(p->mass, p->i);
		ft_sa_sb_ss(p->mass_2, p->g);
	}
	else if (ft_strequ(buff, "pb"))
		ft_pb(p);
	else if (ft_strequ(buff, "pa"))
		ft_pa(p);
	else if (ft_strequ(buff, "ra"))
		ft_ra_rb_rr(p->mass, p->i);
	else if (ft_strequ(buff, "rb"))
		ft_ra_rb_rr(p->mass_2, p->g);
	else
		return (ft_comand_2(buff, p));
	if (p->v)
		ft_print_mass(p);
	if (p->c != -1)
		p->c += 1;
	return (0);
}

void	ft_record_2(t_struct *p)
{
	char	*buff;
	int		a;
	int		f;
	int		res;

	buff = (char *)ft_memalloc(sizeof(5));
	a = 0;
	f = 0;
	while ((res = read(0, p->comand, 1)) > 0)
	{
		p->comand[res] = '\0';
		if (p->comand[0] == '\n' || p->comand[0] == ' ')
		{
			f = ft_comand(buff, p);
			if (f == 1)
				return ;
			free(buff);
			buff = (char *)ft_memalloc(sizeof(5));
			a = 0;
			continue ;
		}
		buff[a++] = p->comand[0];
	}
	free(buff);
	ft_putstr(ft_valid_0(p->mass, p->i, p->g));
}

int		main(int av, char **ac)
{
	t_struct *pst;

	if (av <= 1)
		return (ft_putstr("Arguments Pleas\n"));
	pst = (t_struct *)ft_memalloc(sizeof(t_struct));
	if (ft_valid_v(pst, ac, av))
		av -= 1;
	if (!(ft_valid_1(ac, av, pst)))
	{
		free(pst);
		return (ft_putstr("Error\n"));
	}
	ft_record_2(pst);
	if (pst->c != -1)
		ft_printf("Operation %i\n", pst->c - 1);
	free(pst);
	return (0);
}
