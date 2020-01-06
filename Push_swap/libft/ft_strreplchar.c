/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:45:19 by jjerde            #+#    #+#             */
/*   Updated: 2019/07/25 14:53:27 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplchar(char *str, char c, char k)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = k;
		i++;
	}
	return (str);
}
