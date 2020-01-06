/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ld.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlarson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:25:19 by hlarson           #+#    #+#             */
/*   Updated: 2019/12/28 15:21:09 by hlarson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

static	int	get_args(t_parse *flags, t_carret *carret, int *d, size_t *i)
{
	unsigned char	args_byte;
	int				k;

	k = IDX_MOD;
	args_byte = flags->map[*i];
	(*i)++;
	set_movement(carret, args_byte, 2, 4);
	if (args_byte >> 6 == T_REG)
		return (-1);
	else if (args_byte >> 6 == T_DIR)
		d[0] = get_dir_one(flags->map, i);
	else if (args_byte >> 6 == T_IND)
		d[0] = get_arg_for_ind(flags->map, carret,
				i, get_dir_two(flags->map, i) % k);
	else
		return (-1);
	if ((args_byte & 0x30) >> 4 == T_REG)
		d[1] = get_reg(flags->map, i);
	else
		return (-1);
	return (0);
}

void		ld(t_parse *flags, t_carret *carret)
{
	size_t			i;
	int				d[2];

	i = carret->pos + 1;
	if (i >= MEM_SIZE)
		i %= MEM_SIZE;
	if (get_args(flags, carret, d, &i) == -1)
		return ;
	if (d[1] < 1 || d[1] > 16)
		return ;
	(carret->reg)[d[1] - 1] = d[0];
	if (d[0] == 0)
		carret->carry = 1;
	else
		carret->carry = 0;
	return ;
}
