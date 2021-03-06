/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:41:05 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/15 13:45:14 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != '\0' && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else
		return (0);
}
