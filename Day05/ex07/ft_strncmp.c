/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:33:26 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/10 15:13:14 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				comp;
	unsigned int	count;

	if (n <= 0)
		return (0);
	count = 1;
	comp = 0;
	while (*s1 == *s2 && count < n && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		count++;
	}
	if (*s1 != *s2)
		return (-(*s2 - *s1));
	return (0);
}
