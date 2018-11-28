/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:27:16 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:27:19 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	t;
	unsigned int	i;

	nb = (unsigned int)((n < 0) ? -n : n);
	i = 2 + (n < 0);
	t = 1;
	while (nb / t > 9)
	{
		++i;
		t *= 10;
	}
	str = (char*)ft_memalloc(sizeof(char) * i);
	if ((i = n < 0))
		str[0] = '-';
	while (t)
	{
		str[i++] = nb / t % 10 + '0';
		t /= 10;
	}
	str[i] = '\0';
	return (str);
}
