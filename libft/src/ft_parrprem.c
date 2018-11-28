/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrprem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:12:41 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:12:48 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_parrprem(void **tab, void *elem)
{
	unsigned int	arr_len;

	arr_len = ft_parrlen(tab);
	while (*tab != elem)
	{
		++tab;
		--arr_len;
	}
	while (--arr_len)
	{
		tab[0] = tab[1];
		++tab;
	}
	tab[0] = 0;
}
