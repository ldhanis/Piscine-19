/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:06:07 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/14 21:48:19 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int		ft_valid_char(char c);
int		ft_get_len(char *c);
int		ft_get_line(char *arg, int line[9]);
int		ft_get_array(int argc, char **argv, int array[9][9]);
int		ft_get_nb_zero(int array[9][9]);

#endif
