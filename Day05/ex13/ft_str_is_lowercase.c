/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:39:06 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 17:41:50 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_char_lc(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int			ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_lc(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
