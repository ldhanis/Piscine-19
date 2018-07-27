/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:54:23 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 19:34:56 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list *a;
	t_list *a_next;
	t_list *prev;

	a = *begin_list;
	prev = NULL;
	while (a)
	{
		a_next = a->next;
		a->next = prev;
		prev = a;
		a = a_next;
	}
	*begin_list = prev;
}
