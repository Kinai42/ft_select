/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:14:39 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:14:40 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strarrstr(char **array, char *str)
{
	int		i;

	i = 0;
	while (array[i] && ft_strcmp(array[i], str))
		++i;
	return (array[i]) ? i : -1;
}
