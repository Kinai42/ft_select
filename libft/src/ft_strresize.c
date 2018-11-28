/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strresize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:32:46 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:32:47 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strresize(char *str, size_t size)
{
	char *tmp;

	tmp = ft_strdup(str);
	free(str);
	str = ft_strnew(size);
	if (ft_strlen(tmp) > size)
		ft_strncpy(str, tmp, size);
	else
		ft_strcpy(str, tmp);
	free(tmp);
	return (str);
}
