/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:12:47 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/28 15:52:12 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELECT_H
# define SELECT_H

#include "libft.h"
#include <term.h>
#include <curses.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>

typedef struct      s_element
{
    char            *arg;
    int            status;
}                   t_element;


typedef struct		s_select
{
    t_element       **list;
    int             count;
    int             size;
    int             pos;
    int             len;

	char			*term;
    unsigned long	config;


    int				width;
    int             col;
    int             out;



}					t_select;


void				run(t_select *select);
char				config(t_select *select);
void				quit(t_select *select);
void				print(t_select *select);
void	        	output(t_select *select, char *buf);
int					ft_putc(int c);
int                 ft_col(t_select *select);
void                ft_clearl(t_select *select);

#endif
