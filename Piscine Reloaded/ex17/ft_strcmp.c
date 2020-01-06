/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:14:16 by sgarry            #+#    #+#             */
/*   Updated: 2019/04/02 14:37:44 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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