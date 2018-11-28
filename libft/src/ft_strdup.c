/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:31:06 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:31:09 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*n;
	char	*o;

	if (!(n = (char *)malloc(ft_strlen(src) + 1)))
		return (NULL);
	o = n;
	while (*src)
		*n++ = *src++;
	*n = '\0';
	return (o);
}
