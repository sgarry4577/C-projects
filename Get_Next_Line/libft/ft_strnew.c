/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:31:45 by sgarry            #+#    #+#             */
/*   Updated: 2019/05/02 17:45:46 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	a;

	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	a = 0;
	while (a < size)
	{
		str[a] = '\0';
		a++;
	}
	str[a] = '\0';
	return (str);
}
