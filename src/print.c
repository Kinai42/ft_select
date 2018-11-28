/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:12:25 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/28 15:51:35 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

#include "libft.h"

#include <term.h>
#include <sys/ioctl.h>

# define NORMAL    "\033[0m"
# define POSITION   "\033[30;47m"
# define SELECT     "\033[4m"
# define POSSELECT "\033[7;4m"

static char		*ft_select(t_element *element)
{
    if (element->status >> 0 & 1)
    {
        if (element->status >> 1 & 1)
            return (POSSELECT);
        return (POSITION);
    }
    else if (element->status >> 1 & 1)
    {

        return (SELECT);
    }
    return (DEFAULT);
}

void			print(t_select *select)
{
    int     i;
    int     a;
    int     size;

    i = -1;
    size = 0;
    select->len = 0;
    
    while (++i < select->count)
    {
        ft_print(1, "%s%s%s", ft_select(select->list[i]),
                select->list[i]->arg, NORMAL);
        a = ft_strlen(select->list[i]->arg);
        size += a;
        while (((a++ % select->size) || size + select->size > select->width) &&
                (size += 1) <= select->width)
            write(1, " ", 1);

        select->len += a;
        if (size  >= (select->width))
            size = 0;
    }
}

void		output(t_select *select, char *buf)
{
    int			i;

    ft_print(1, "\n");
    if (buf[0] == 27 && !buf[1])
        return ;
    i = -1;
    while(select->list[++i])
        if (select->list[i]->status >> 1 & 1)
            ft_print(1, "%s ", select->list[i]->arg);
    if (select->out)
        ft_print(1, "\n");
}
