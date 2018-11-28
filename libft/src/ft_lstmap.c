/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:27:56 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:27:58 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *a;
	t_list *b;

	if (!lst)
		return (NULL);
	b = f(lst);
	a = b;
	if (b == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		b->next = f(lst);
		if (b->next == NULL)
			return (NULL);
		b = b->next;
	}
	return (a);
}
