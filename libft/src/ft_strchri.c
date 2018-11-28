/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:30:25 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:30:28 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchri(const char *s, int c, unsigned int len)
{
	unsigned int	i;
	char			*ss;

	i = 0;
	ss = (char *)s;
	while (i < len && ss[i])
	{
		if (ss[i] == (char)c)
			return (ss + i);
		i++;
	}
	if (ss[i] == (char)c)
		return (ss + i);
	return (NULL);
}
