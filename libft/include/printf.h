/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:02:18 by dbauduin          #+#    #+#             */
/*   Updated: 2018/09/11 13:37:54 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdint.h>

int			ft_format(char *s, long long *f, va_list ap, int *c);
char		*ft_cast_int(char s, va_list ap, long long *f);
char		*ft_cast_uns(char s, va_list ap, long long *f);
char		*ft_cast_flo(va_list ap, long long *f);
char		*ft_cast_str(char s, va_list ap);
int			ft_cast_wch(char s, va_list ap, long long *f, int *c);
char		*ft_con_int(long long i, long long *f);
char		*ft_con_uns(char s, unsigned long long i, long long *f);
int			ft_con_ptr(va_list ap, long long f, int *c);
int			ft_color(char *s, int i, int *c);

#endif
