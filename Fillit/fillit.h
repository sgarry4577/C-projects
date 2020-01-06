/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:41:50 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/16 18:22:56 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft/libft.h"

char		*ft_mega_array(char **array, char *mega_array_line);
char		*ft_valid(char *str, char *mega_array_line);
char		*ft_valid_pro(char **array, char *mega_array_line);
int			ft_sqare(int i);
int			ft_logic(char *array, char *map, int map_scale, int offset);
int			ending(char *array, char *map, int map_scale);
int			ft_fuck_norm(char *map);
void		print_answer(char *map, int map_scale);

#endif
