/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:07:14 by kzouggar          #+#    #+#             */
/*   Updated: 2019/03/31 22:22:02 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		file;
	char	buffer[2048];

	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	if (ac < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	file = open(av[1], O_RDONLY);
	write(1, buffer, read(file, buffer, 2048));
	close(file);
	return (0);
}
