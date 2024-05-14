/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:43:44 by itahri            #+#    #+#             */
/*   Updated: 2024/05/14 13:01:49 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char *argv[])
{
	char	buff[99999];
	int		nb_read;
	int		fd;
	int		i;

	i = 0;
	if (argc > 2)
		return (write(1, "Too many arguments.", 19), 0);
	else if (argc < 2)
		return (write(1, "File name missing.", 18), 0);
	fd = open(argv[1], O_RDONLY);
	nb_read = read(fd, buff, sizeof(buff));
	if (nb_read == -1)
		return (write(1, "Cannot read file.", 18), 0);
	while (i < nb_read)
	{
		write(1, &buff[i], 1);
		i++;
	}
}
