/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Damien <dbauduin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 08:07:49 by Damien            #+#    #+#             */
/*   Updated: 2018/09/09 02:57:05 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addchar(char *str, char c)
{
	char	*new;
	int		i;

	i = ft_strlen(str) + 1;
	if (!(new = malloc(sizeof(char) * (i + 1))))
		return (0);
	new = ft_strcpy(new, str);
	new[i - 1] = c;
	new[i] = 0;
	free(str);
	return (new);
}
