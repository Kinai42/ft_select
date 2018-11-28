/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:12:25 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/13 16:22:58 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_parrlen(void **array)
{
	void	**beg;

	beg = array;
	while (*array)
		++array;
	return ((unsigned int)(array - beg));
}
