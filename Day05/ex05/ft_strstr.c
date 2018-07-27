/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:58:49 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/10 14:52:13 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int i;
	int verif;

	if (!to_find[0])
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (to_find[i] != '\0')
		{
			verif = 0;
			if (str[i] == to_find[i])
			{
				i++;
				verif = 1;
			}
			else
				break ;
		}
		if (verif == 1)
			return (str);
		str++;
	}
	str[0] = '\0';
	return (&str[0]);
}
