/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:27:14 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 16:38:26 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_char_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int			ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_numeric(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
