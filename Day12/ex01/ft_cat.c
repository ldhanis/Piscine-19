/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:59:29 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/19 22:01:19 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void	ft_perroquet(void)
{
	char *str;

	while (read(0, &str, 1) != -1)
		write(1, &str, 1);
}

void	ft_show_content(int fd)
{
	char	letter;

	if (fd == -1)
		return ;
	while (read(fd, &letter, 1))
		write(1, &letter, 1);
}

int		ft_strlen(char *filename)
{
	int i;

	i = 0;
	while (filename[i])
		i++;
	return (i + 1);
}

void	ft_show_error(char *filename)
{
	write(1, "cat: ", 5);
	write(1, filename, ft_strlen(filename));
	write(1, ": ", 2);
	if (errno == 21)
		write(1, "Is a directory\n", 15);
	else if (errno == 2)
		write(1, "No such file or directory\n", 26);
	else
		write(1, "Permission denied\n", 18);
}

int		main(int argc, char **argv)
{
	int count;
	int fd;

	count = 0;
	if (argc == 1)
		ft_perroquet();
	else
	{
		while (count < argc - 1)
		{
			if (argv[count + 1][0] == '-')
				ft_perroquet();
			else
			{
				fd = open(argv[count + 1], O_RDWR);
				if (fd == -1)
					ft_show_error(argv[count + 1]);
				else
					ft_show_content(fd);
			}
			count++;
		}
	}
}
