/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:44:10 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 16:01:31 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_char_is_alpha(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int			ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_alpha(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
