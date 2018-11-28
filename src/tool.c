/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:41:19 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/28 15:35:04 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

int			ft_putc(int c)
{
	write(1, &c, 1);
	return (c);
}

int         ft_col(t_select *select)
{
    int col;

    col = 0;
    while (select->size * col + select->size < select->width &&
            col <= select->count)
        col++;
    return (col);
}

void    ft_clearl(t_select *select)
{
    write(1, "\x0d", 1);
    tputs(tgetstr("ce", 0), 0, ft_putc);
    while (select->len-- >= 0)
        write(1, "\b\b", 2);
    tputs(tgetstr("ce", 0), 0, ft_putc);
}
