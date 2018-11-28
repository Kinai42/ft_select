/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:39:06 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/28 16:00:43 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

#include "libft.h"

#include <term.h>
#include <unistd.h>

static void		selection(t_select *select)
{
    if (select->list[select->pos]->status >> 1 & 1)
    {
        select->list[select->pos]->status = 0;
        select->out -= 1;
    }
    else
    {
        select->list[select->pos]->status = 2;
        select->out += 1;
    }

    select->pos += select->pos != select->count - 1 ? 1 : -select->pos;
    select->list[select->pos]->status += 1;
    ft_clearl(select);
    print(select);
}

static void		ft_remove(t_select *select)
{
    ft_parrprem((void**)select->list, select->list[select->pos]);
    select->count -= 1;
    if (select->pos >= select->count)
        select->pos = 0;
    select->list[select->pos]->status += 1;
    ft_clearl(select);
    print(select);
}

static void     ft_arrow(t_select *select, char key)
{

    if (key == 65)
    {
        if (select->pos == 0)
            select->pos = select->count - 1;
        else if (select->pos > 0)
        {
            select->pos -= ft_col(select);
            if (select->pos < 0)
                select->pos = 0;
        }
    }
    else if (key == 66)
    {
        if (select->pos == select->count - 1)
            select->pos = 0;
        else if (select->pos < select->count - 1)
        {
            select->pos += ft_col(select);
            if (select->pos >= select->count - 1)
                select->pos = select->count - 1;
        }
    }
}

static void		ft_move(t_select *select, char key)
{
    select->list[select->pos]->status -= 1;
    if (key == 65 || key == 66)
        ft_arrow(select, key);
    else if (key == 68)
        select->pos += select->pos != 0 ? -1 : select->count - 1;
    else if (key == 67)
        select->pos += select->pos != select->count - 1 ? 1 : -select->pos;
    select->list[select->pos]->status += 1;
    ft_clearl(select);
    print(select);
}

void			run(t_select *select)
{
    char	buf[4];
    int		rd;

    rd = 0;
    print(select);
    while (ft_parrlen((void**)select->list))
    {
        if ((rd = (int)read(0, buf, 3)) <= 0)
            continue ;
        buf[rd] = 0;
        if (buf[0] == 32)
            selection(select);
        if (buf[0] == '\n' || (buf[0] == 27 && !buf[1]))
            break ;
        else if (buf[0] == 127 || buf[0] == 126)
            ft_remove(select);
        else if (buf[0] == 27)
            ft_move(select, buf[2]);
    }
    output(select, buf);
    quit(select);
}
