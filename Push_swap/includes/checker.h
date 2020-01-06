/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:57:12 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 16:08:22 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_struct
{
	int				mass[1000];
	int				mass_2[1000];
	int				i;
	int				g;
	char			comand[12];
	int				v;
	int				c;
}					t_struct;

void				ft_sa_sb_ss(int *mass, int i);
void				ft_pb(t_struct *p);
void				ft_pa(t_struct *p);
void				ft_ra_rb_rr(int *mass, int i);
void				ft_rra_rrb_rrr(int *mass, int i);
int					ft_valid_1(char **s, int av, t_struct *pst);
int					ft_valid_2(t_struct *pst, int a);
char				*ft_valid_0(int *mass, int i, int g);
void				ft_print_mass(t_struct *p);
int					ft_valid_v(t_struct *p, char **ac, int av);
void				ft_logick(t_struct *p);
void				ft_analitic(int *mass, int i);
void				ft_logick_many(t_struct *p);
void				ft_ll_2(t_struct *p, int ll);
void				ft_ll_2_4(t_struct *p, int ll);
void				ft_ll_2_5(t_struct *p, int a, int f, int ll);
void				ft_ll_2_6(t_struct *p, int a, int f, int ll);
void				ft_ll_2_2(t_struct *p, int ll);
void				ft_ll_2_3(t_struct *p, int f, int a, int ll);
void				ft_ll_2_7(t_struct *p, int a, int f, int ll);
void				ft_logicka(t_struct *p);
void				ft_logick_start_0(t_struct *p);
void				ft_logick_start_1(t_struct *p);
int					ft_valid_vc(t_struct *p, char **ac, int av);
#endif
