/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:54:21 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/22 22:40:02 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(char data)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = data;
		temp->next = NULL;
	}
	return (temp);
}

void		ft_list_push_back(t_list **begin_list, char data)
{
	t_list *iterator;

	iterator = *begin_list;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (iterator->next)
			iterator = iterator->next;
		iterator->next = ft_create_elem(data);
	}
}

void		ft_list_foreach(t_list *begin_list, void (*f)(char))
{
	t_list	*act;

	act = begin_list;
	while (act)
	{
		(*f)(act->data);
		act = act->next;
	}
}
