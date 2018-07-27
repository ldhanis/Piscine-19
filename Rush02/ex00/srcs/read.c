/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:13:01 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/22 22:40:45 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

char	*ft_string_from_t_list(t_list *list, int size)
{
	char	*string;
	int		i;
	t_list	*current;
	t_list	*to_free;

	i = 0;
	string = malloc(sizeof(char) * size);
	if (string)
	{
		current = list;
		while (current)
		{
			string[i++] = current->data;
			to_free = current;
			current = current->next;
			free(current);
		}
	}
	return (string);
}

char	*ft_read_pipe(void)
{
	t_list	*char_list;
	char	buffer;
	int		size;
	char	*str;

	char_list = NULL;
	size = 0;
	while (read(0, &buffer, 1) > 0)
	{
		ft_list_push_back(&char_list, buffer);
		size++;
	}
	str = ft_string_from_t_list(char_list, size);
	return (str);
}

void	get_arr_dim(char *str, int *height, int *width)
{
	int		comp_width;
	int		i;

	i = 0;
	comp_width = 0;
	*height = 0;
	while (str[i])
	{
		comp_width++;
		if (str[i] == '\n')
		{
			if (*height == 0)
				*width = i;
			else if (comp_width - 1 != *width)
				*width = 0;
			*height += 1;
			comp_width = 0;
		}
		i++;
	}
}

char	**size_arr(int height, int width)
{
	int		i;
	char	**arr;

	i = 0;
	arr = malloc(sizeof(char*) * height);
	while (i < height)
	{
		arr[i] = malloc(sizeof(char) * width);
		i++;
	}
	return (arr);
}

void	fill_arr(char **arr, char *str, int height, int width)
{
	int i;
	int h;
	int w;

	i = 0;
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			if (str[i] != '\n' && str[i] != '0')
			{
				arr[h][w] = str[i];
				w++;
			}
			i++;
		}
		h++;
	}
}
