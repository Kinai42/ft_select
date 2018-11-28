/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:12:35 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:12:39 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_parrnew(void)
{
	void	**arr;

	arr = (void**)ft_memalloc(sizeof(void*));
	*arr = (void*)0;
	return (arr);
}
