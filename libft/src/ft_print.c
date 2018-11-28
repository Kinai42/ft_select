/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:14:20 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/11 18:41:17 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_print(int fd, char *s, ...)
{
    va_list		lst;
    char		*tmp;
    char        c;

    va_start(lst, s);
    while (*s)
        if (*s == '%' && (*(s + 1) == 's' || *(s + 1) == 'c') && (s += 2))
        {
            if (*(s - 1) == 's')
                tmp = va_arg(lst, char*);
            else
                c = (char)va_arg(lst, int);
            *(s - 1) == 's' ? write(fd, tmp, ft_strlen(tmp)) : write(1, &c, 1);
        }
        else if (*s == '%' && (*(s + 1) == 'd' || *(s + 1) == 'p') && (s += 2))
        {
            tmp = *(s - 1) == 'd' ? ft_itoa(va_arg(lst, int)) : 
                ft_utoabase((unsigned int)va_arg(lst, void*), 16);
            write(fd, tmp, ft_strlen(tmp));
            free(tmp);
        }
        else
            write(fd, s++, 1);
    va_end(lst);
}
