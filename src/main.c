/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:34:11 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/28 16:01:35 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

#define PROJECT "ft_select"
#define ERROR   "ft_select: terminal configuration error"
#define USAGE   "Usage: ft_select [...]"
#define FAIL    "failed to restore terminal configuration"

char			config(t_select *select)
{
    struct termios	term;
    struct winsize sz;

    ioctl(0, TIOCGWINSZ, &sz);
    select->width = sz.ws_col;
    select->pos = 0;
    select->out = 0;
    select->col = ft_col(select);
    if (!(select->term = getenv("TERM")) ||
            tgetent(0, select->term) != 1 || tcgetattr(0, &term) == -1)
        return (0);
    select->config = term.c_lflag;
    term.c_lflag &= ~(ICANON | ECHO);
    tputs(tgetstr("vi", 0), 0, ft_putc);
    return (tcsetattr(0, TCSANOW, &term) == -1) ? 0 : 1;
}

static void     ft_free(t_select *select)
{
    int i;

    i = -1;
    if (select->list)
    {
        while(select->list[++i])
        {
            free(select->list[i]->arg);
            free(select->list[i]);
        }
        free(select->list);
    }
}

void			quit(t_select *select)
{
    struct termios	term;

    if (tcgetattr(0, &term) == -1)
        ft_print(2, "%s: %s\n", PROJECT, FAIL);
    term.c_lflag &= select->config;
    if (tcsetattr(0, TCSANOW, &term) == -1)
        ft_print(2, "%s: %s\n", PROJECT, FAIL);
    tputs(tgetstr("ve", 0), 0, ft_putc);
    ft_free(select);
}

static int  parse(t_select *select, int ac, char **av)
{
    int         i;
    t_element   *element;

    if (ac < 2 || ac > 255)
        return (0);
    if (!(select->list = (t_element**)ft_memalloc(sizeof(t_element*))))
        return (0);
    i = 0;
    while (av[++i])
    {
        if (select->size < (int)ft_strlen(av[i]) + 2)
            select->size = ft_strlen(av[i]) + 2;
        if (!(element = (t_element*)ft_memalloc(sizeof(t_element))))
            return (0);
        element->arg = ft_strdup(av[i]);
        element->status = i == 1 ? 1 : 0;
        ft_parrpush((void***)&select->list, element);
    }
    return (1);
}

int				main(int ac, char **av)
{
    t_select    select;

    select.count = ac - 1;
    if (parse(&select, ac, av))
        if (config(&select))
            run(&select);
        else
        {
            quit(&select);
            ft_print(2, "%s\n", ERROR);
        }
    else
        ft_print(2, "%s\n", USAGE);
    return (0);
}
