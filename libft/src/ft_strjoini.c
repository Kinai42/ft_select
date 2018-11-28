/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:31:32 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:31:34 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoini(char const *s1, char const *s2, size_t len)
{
	char *fresh;

	if (!s1 || !s2)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s1) + len + 1);
	if (fresh == NULL)
		return (NULL);
	ft_strcpy(fresh, (char *)s1);
	ft_strncat(fresh, (char *)s2, len);
	return (fresh);
}
