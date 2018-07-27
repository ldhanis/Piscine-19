/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:49:47 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/22 18:53:55 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

# include "ft_list.h"

char	*ft_string_from_t_list(t_list *list, int size);
char	*ft_read_pipe(void);
void	get_arr_dim(char *str, int *height, int *width);
char	**size_arr(int height, int width);
void	fill_arr(char **arr, char *str, int height, int width);

#endif
