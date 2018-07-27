/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:12:58 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 20:21:46 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *ret_array;
	int i;

	i = 0;
	ret_array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		ret_array[i] = (*f)(tab[i]);
		i++;
	}
	return (ret_array);
}
