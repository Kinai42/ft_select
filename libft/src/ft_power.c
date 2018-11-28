/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:28:56 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:28:58 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long int	ft_iterative_power(int nb, int power)
{
	int tmp;

	tmp = nb;
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	else if (power < 0 || nb == 0)
	{
		return (0);
	}
	while (power > 1)
	{
		nb = nb * tmp;
		power--;
	}
	return (nb);
}
