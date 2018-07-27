/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:03:21 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/21 18:09:21 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct			s_list
{
	char				data;
	struct s_list		*next;
}						t_list;

t_list					*ft_create_elem(char data);
void					ft_list_push_back(t_list **begin_list, char data);
void					ft_list_foreach(t_list *begin_list, void (*f)(char));

#endif
