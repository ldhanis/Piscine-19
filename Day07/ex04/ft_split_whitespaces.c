/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:27:21 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/11 21:18:44 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ld_find_next_word(char *str, int start)
{
	while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n')
		start++;
	if (str[start] == '\0')
		return (-1);
	return (start);
}

int				ld_word_size(char *str, int start)
{
	int		i;

	i = start;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i - start);
}

int				ld_count_words(char *str)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i = ld_find_next_word(str, i);
		if (i != -1)
		{
			words++;
			i = i + ld_word_size(str, i);
		}
	}
	return (words);
}

void			ft_init_to_zero(int *i1, int *i2)
{
	*i1 = 0;
	*i2 = 0;
}

char			**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		word;
	int		i_string;
	int		i_word;
	int		word_size;

	ft_init_to_zero(&i_string, &word);
	arr = (char**)malloc(sizeof(char*) * (ld_count_words(str) + 1));
	while (word < ld_count_words(str))
	{
		i_string = ld_find_next_word(str, i_string);
		i_word = 0;
		word_size = ld_word_size(str, i_string);
		arr[word] = (char *)malloc(sizeof(char) * word_size);
		while (i_word < word_size)
		{
			arr[word][i_word] = str[i_string + i_word];
			i_word++;
		}
		i_string += i_word;
		word++;
	}
	arr[ld_count_words(str)] = 0;
	return (arr);
}
