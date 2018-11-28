/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:12:20 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:12:24 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_parrjoin(void **a1, void **a2)
{
	void	**na;

	na = ft_parrnew();
	while (*a1)
		ft_parrpush(&na, *a1++);
	while (*a2)
		ft_parrpush(&na, *a2++);
	return (na);
}
