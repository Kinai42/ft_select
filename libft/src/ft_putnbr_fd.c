/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:29:35 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:29:38 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
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
		ft_putchar_fd('0', fd);
		return ;
	}
	while (k > 0)
	{
		s[i] = (k % 10) + 48;
		k /= 10;
		i--;
	}
	ft_putstr_fd(s, fd);
}
