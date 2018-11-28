/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase_uns.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:27:21 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/22 21:16:11 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoabase_uns(unsigned long long n, int b, long long *f, char c)
{
	char				*s;
	unsigned long long	n2;
	int					l;

	l = 1;
	n2 = n;
	while (n2 >= (unsigned long long)b && (n2 /= b))
		l++;
	l = f && f[2] > l ? f[2] : l;
	if (!(s = ft_strnew(l--)))
		return (0);
	while (n >= (unsigned long long)b)
	{
		s[l--] = c == 'X' ?
		("0123456789ABCDEF")[n % b] : ("0123456789abcdef")[n % b];
		n /= b;
	}
	s[l--] = c == 'X' ? ("0123456789ABCDEF")[n % b] :
	("0123456789abcdef")[n % b];
	while (l >= 0)
		s[l--] = '0';
	return (f[2] == 0 && *s == '0' ? "" : s);
}
