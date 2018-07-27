/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 19:50:05 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 19:55:00 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*act;

	act = begin_list;
	while (act)
	{
		(*f)(act->data);
		act = act->next;
	}
}
