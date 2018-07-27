/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:27:14 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 19:33:18 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list		*iterator;
	int			i;

	i = 0;
	iterator = begin_list;
	while (iterator != NULL)
	{
		i++;
		iterator = iterator->next;
	}
	return (i);
}
