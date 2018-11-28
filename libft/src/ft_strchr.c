/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:30:17 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/29 12:33:29 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*ss;

	i = -1;
	ss = (char *)s;
	while (ss[++i])
		if (ss[i] == (char)c)
			return (ss + i);
	if (ss[i] == (char)c)
		return (ss + i);
	return (NULL);
}
