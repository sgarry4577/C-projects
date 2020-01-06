/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrejoinre.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:40:17 by jjerde            #+#    #+#             */
/*   Updated: 2019/07/25 14:52:47 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrejoinre(char const *s1, char const *s2)
{
	int		i;
	int		ii;
	char	*ss;

	if (!s1 || !s2)
		return (NULL);
	if (!(ss = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ss[i] = s1[i];
		i++;
	}
	ii = 0;
	while (s2[ii])
	{
		ss[i + ii] = s2[ii];
		ii++;
	}
	ft_memdel((void **)&s1);
	ft_memdel((void **)&s2);
	ss[i + ii] = '\0';
	return (ss);
}
