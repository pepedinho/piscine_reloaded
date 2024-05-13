/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_parms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:42:07 by itahri            #+#    #+#             */
/*   Updated: 2024/05/13 18:03:56 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ascii_order(const char *str)
{
	int total;
	int	i;
	
	i = 0;
	total = 1;
	while (str[i])
	{
		total += str[i];
		i++;
	}
	return (total);
}

void	sorting_args(const char **argv, int argc)
{
	int		i;
	const char	*buff;

	i = 1;
	while (i < argc - 1)
	{
		if (ascii_order(argv[i]) > ascii_order(argv[i + 1]))
		{
			buff = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = buff;
		}
		i++;
	}
}

int main(int argc, char const *argv[])
{
	int		i;
	int		j;

	i = 1;
	sorting_args(argv, argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;	
	}
	return 0;
}
