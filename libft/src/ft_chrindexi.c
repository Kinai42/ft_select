/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrindexi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:36:16 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:36:18 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chrindexi(char *str, char c, int len)
{
	int i;

	i = 0;
	while (i < len && str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}
