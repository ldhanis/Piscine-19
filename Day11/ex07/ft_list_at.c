/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:59:51 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 19:34:38 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;
	t_list				*ret;

	i = 1;
	ret = begin_list;
	if (nbr == 0)
		return (NULL);
	while (i < nbr)
	{
		if (ret->next)
			ret = ret->next;
		else
		{
			ret = NULL;
			break ;
		}
		i++;
	}
	return (ret);
}
