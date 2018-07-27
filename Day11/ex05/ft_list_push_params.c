/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:22:41 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 19:33:58 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*ret_list;
	t_list	*temp;
	int		i;

	if (ac <= 0)
		return (NULL);
	i = 0;
	temp = NULL;
	while (i < ac)
	{
		ret_list = ft_create_elem(av[i]);
		ret_list->next = temp;
		temp = ret_list;
		i++;
	}
	return (ret_list);
}
