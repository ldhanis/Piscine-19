/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:34:01 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 15:56:32 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_alphanum(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char		ft_char_uncap(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i]) == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				i++;
			}
			while (ft_is_alphanum(str[i]) == 1)
			{
				str[i] = ft_char_uncap(str[i]);
				i++;
			}
		}
		i++;
	}
	return (str);
}
