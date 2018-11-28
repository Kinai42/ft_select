/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 18:30:02 by dbauduin          #+#    #+#             */
/*   Updated: 2017/10/21 16:30:01 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	simple_sort(int *array, int len)
{
	int i;
	int temp;

	i = 0;
	while (i != (len - 1))
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			if ((i - 1) >= 0)
				i--;
			continue;
		}
		i++;
	}
}
