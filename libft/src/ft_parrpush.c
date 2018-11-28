/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:12:51 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:12:54 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_parrpush(void ***tab, void *elem)
{
	void			**n_tab;
	unsigned int	arr_len;

	arr_len = ft_parrlen(*tab);
	n_tab = (arr_len % ALLOC_ARRAY) ? *tab :
	(void**)ft_memalloc(sizeof(void*) * (arr_len + ALLOC_ARRAY + 1));
	n_tab[arr_len] = elem;
	n_tab[arr_len + 1] = (void*)0;
	if (n_tab == *tab)
		return ;
	while (arr_len--)
		n_tab[arr_len] = (*tab)[arr_len];
	free(*tab);
	*tab = n_tab;
}
