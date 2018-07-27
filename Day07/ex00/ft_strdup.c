/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:58:21 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/11 14:43:07 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*ret_str;
	int		i;

	ret_str = malloc(sizeof(*src));
	if (ret_str == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		ret_str[i] = src[i];
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
