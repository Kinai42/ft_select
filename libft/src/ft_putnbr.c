/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:29:25 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:29:27 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char			s[ft_intlen(n) + 1];
	int				i;
	long			k;

	k = n;
	i = (k < 0) ? ft_intlen(k) : ft_intlen(k) - 1;
	ft_bzero(&s, ft_intlen(n) + 1);
	if (k < 0)
	{
		s[0] = '-';
		i--;
		k *= -1;
	}
	else if (k == 0)
	{
		ft_putchar('0');
		return ;
	}
	while (k > 0)
	{
		s[i] = (k % 10) + 48;
		k /= 10;
		i--;
	}
	ft_putstr(s);
}
