/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:03:21 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 11:31:30 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct	s_list
{
	void				*data;
	struct s_list		*next;
}				t_list;
t_list			*ft_create_elem(void *data);
#endif
