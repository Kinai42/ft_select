/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:32:40 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:32:44 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrem(char *str, int from, int len)
{
	char *tmp;

	tmp = ft_strnew(ft_strlen(str) - len);
	ft_strncpy(tmp, str, from);
	ft_strcat(tmp, (str + (from + len)));
	ft_bzero(str, ft_strlen(str));
	ft_strcpy(str, tmp);
	return (str);
}
