/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:14:54 by dbauduin          #+#    #+#             */
/*   Updated: 2018/08/09 03:14:56 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strcount(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
		if (*s++ == c)
			count++;
	return (count);
}
