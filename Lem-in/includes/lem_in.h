/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:21:48 by sgarry            #+#    #+#             */
/*   Updated: 2019/08/19 17:00:16 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_struct
{
	int				i;
	char			**res;
	char			**kolia;
	char			**stack;
	char			**buff;
	char			**way;
	char			*links;
	char			*links_1;
	int				f;
	char			*line;
	int				start;
	char			*start_1;
	char			*end;
	int				finish;
	char			**room;
	int				mass[50];
	int				mass_2[100];
	int				mass_3[1000];
	int				ant;
	int				s;
	int				p;
	int				d;
	int				g;
	int				v;
	int				mass_4[1000];
	int				mass_5[1000];
	int				l;
	int				u;
	int				a;
	int				n;
}					t_struct;

int					ft_valid(t_struct *p, int v);
int					ft_valid_line(t_struct *p);
int					ft_start_end(t_struct *p);
int					ft_valid_line_2(t_struct *p, int a);
int					ft_valid_links(t_struct *p, int a, int f, int index);
int					ft_valid_links_3(t_struct *p, int index, int f, int a);
int					ft_valid_links_3_1(int a, t_struct *p, int index);
int					ft_valid_links_2(t_struct *p, int index);
int					ft_valid_rooms(t_struct *p, int a);
int					ft_valid_rooms_end(t_struct *p);
int					ft_record_start_end(t_struct *p, int a);
int					ft_record_start_end_2(t_struct *p, int a);
int					ft_valid_ants(t_struct *p);
void				ft_short_way_2_1_1(t_struct *p, int c);
void				ft_short_way_2_end(t_struct *p, int c);
void				ft_short_way_2_1(t_struct *p);
void				ft_short_way_2_2(t_struct *p, int f, int i, int a);
void				ft_short_way_2_3(t_struct *p, int v, int a, int flag);
int					ft_short_way_2_3_1(t_struct *p);
int					ft_short_way_2_3_2(t_struct *p);
void				ft_short_way_2_3_0(t_struct *p, int flag, int v, int a);
int					ft_short_way_2_3_0_1(int a, t_struct *p);
int					ft_valid_line_2_1(t_struct *p, int a);
void				ft_short_way(t_struct *p);
void				ft_short_way_2(t_struct *p);
void				ft_short_way_1(t_struct *p, int f, int i, int a);
void				ft_short_way_1_1(t_struct *p, int v);
int					ft_res_1(t_struct *pst, int c, int res, int a);
void				ft_res_2(t_struct *p);
void				ft_res_end(t_struct *p);
void				ft_res_2_0(t_struct *p, int i, int a, int d);
int					ft_res_2_1(t_struct *p, int i, int a, int g);
#endif
