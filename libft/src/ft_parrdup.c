/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:11:57 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:12:01 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_parrdup(void **array)
{
	void	**n_arr;

	n_arr = ft_parrnew();
	while (*array)
		ft_parrpush(&n_arr, *array++);
	return (n_arr);
}
