/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:36:35 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:36:37 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_intlen(int nbr)
{
	unsigned int	nb;
	int				len;

	nb = nbr < 0 ? (unsigned int)-nbr : (unsigned int)nbr;
	len = (nbr < 0) + 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
