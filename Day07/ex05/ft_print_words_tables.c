/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 11:41:16 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/12 11:58:06 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_my_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i]);
}

void		ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_my_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
