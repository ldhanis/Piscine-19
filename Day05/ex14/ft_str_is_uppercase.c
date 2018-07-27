/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:00:09 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 17:42:18 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_char_uc(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int			ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_uc(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
