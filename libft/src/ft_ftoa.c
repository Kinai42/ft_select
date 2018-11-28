/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:26:17 by dbauduin          #+#    #+#             */
/*   Updated: 2018/09/09 02:59:35 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_int_part(unsigned long long int i, char *r, int l)
{
	while (i >= 10)
	{
		r[l--] = (char)(i % 10 + '0');
		i /= 10;
	}
	r[l--] = (char)(i % 10 + '0');
	return (r);
}

char	*ft_float_part(long double f_part, char *r, int l, long long *f)
{
	r[++l] = '.';
	while (f[2]-- > 0)
	{
		f_part *= 10;
		r[++l] = (t_ull)f_part % 10 + '0';
	}
	if ((int)(f_part * 10) % 10 > 4)
	{
		while (r[l] == '9' || r[l] == '.')
			r[l] == '9' ? r[l--] = '0' : r[l--];
		r[l] += 1;
	}
	return (r);
}

char	*ft_ftoa(double floa, long long *f)
{
	t_ull		i_part;
	long double	f_part;
	int			l;
	char		*r;

	i_part = floa < 0 ? (t_ull)-floa : (t_ull)floa;
	f_part = floa < 0 ? -floa : floa;
	l = ft_intlen(i_part);
	if (!(r = ft_strnew(l + (floa < 0) +
					(f[2] = f[2] == -1 ? 6 : f[2]) + (f[2] != 0 ? 1 : 0))))
		return (0);
	l -= floa < 0 ? 0 : 1;
	r = ft_int_part(i_part, r, l);
	if (f[2] > 0)
		ft_float_part(f_part, r, l, f);
	*r = floa < 0 ? '-' : *r;
	return (r);
}
