/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:31:26 by dbauduin          #+#    #+#             */
/*   Updated: 2018/09/07 13:01:37 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fresh;

	if (!s1 || !s2)
		return (NULL);
	fresh = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (fresh == NULL)
		return (NULL);
	ft_strcpy(fresh, (char *)s1);
	ft_strcat(fresh, (char *)s2);
	return (fresh);
}
