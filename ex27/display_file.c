/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:43:44 by itahri            #+#    #+#             */
/*   Updated: 2024/05/14 14:46:35 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

static void	write_file(int fd)
{
	int		nb_read;
	char	buff[100];

	while (nb_read != 0)
	{
		nb_read = read(fd, buff, sizeof(buff));
		if (nb_read < 0)
		{
			write(1, "Cannot read file.", 18);
			return ;
		}
		write(1, buff, nb_read);
	}
}

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc > 2)
		return (write(1, "Too many arguments.", 19), 0);
	else if (argc < 2)
		return (write(1, "File name missing.", 18), 0);
	fd = open(argv[1], O_RDONLY);
	write_file(fd);
}
