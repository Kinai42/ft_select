/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:31:37 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:31:40 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	char		*tab;
	char const	*cpy;
	size_t		n;
	size_t		len;

	tab = dst;
	cpy = (char *)src;
	n = size;
	while (n-- != 0 && *tab)
		tab++;
	len = tab - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(cpy));
	while (*cpy)
	{
		if (n != 1)
		{
			*tab++ = *cpy;
			n--;
		}
		cpy++;
	}
	*tab = '\0';
	return (len + (cpy - src));
}
