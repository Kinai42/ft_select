/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:26:38 by dbauduin          #+#    #+#             */
/*   Updated: 2018/09/09 02:54:48 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strpush(char **str, char c)
{
	char			*n_str;
	unsigned int	len;

	len = ft_strlen(*str);
	if (!(n_str = (char*)malloc(sizeof(char) * (len + 2))))
		return (0);
	n_str[len] = c;
	n_str[len + 1] = '\0';
	if (n_str == *str)
		return (1);
	while (len--)
		n_str[len] = (*str)[len];
	free(*str);
	*str = n_str;
	return (1);
}
