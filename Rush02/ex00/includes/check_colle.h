/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colle.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-duf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:27:38 by cvan-duf          #+#    #+#             */
/*   Updated: 2018/07/22 22:07:40 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_COLLE_H
# define CHECK_COLLE_H

char	*get_colle(int i);
int		check_line(char c1, char c2, char c3, char *str);
int		check_equality(char **tab, int size, int j);
int		get_string_size(char *str);
void	check_colle(char **tab, int height, int width, char result[5][3]);

#endif
