/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrndup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:12:30 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:12:33 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_parrndup(void **array, unsigned int n)
{
	void			**new_array;
	unsigned int	i;

	new_array = (void**)ft_memalloc(sizeof(void*) * (n + 1));
	i = 0;
	while (array[i] && n--)
	{
		new_array[i] = array[i];
		++i;
	}
	while (n--)
		new_array[i] = (void*)0;
	new_array[i] = (void*)0;
	return (new_array);
}
