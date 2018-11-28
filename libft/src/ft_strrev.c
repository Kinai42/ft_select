/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:32:51 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:32:53 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		tt;
	int		pp;

	pp = 0;
	tt = 0;
	while (str[tt] != '\0')
		tt++;
	tt -= 1;
	while (tt > pp)
	{
		tmp = str[pp];
		str[pp] = str[tt];
		str[tt] = tmp;
		tt--;
		pp++;
	}
	return (str);
}
