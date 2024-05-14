/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_parms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:42:07 by itahri            #+#    #+#             */
/*   Updated: 2024/05/14 14:23:39 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ascii_order(const char *str)
{
	int	total;
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

void	swap(const char **str1, const char **str2)
{
	const char	*buff;

	buff = *str1;
	*str1 = *str2;
	*str2 = buff;
}

void	sorting_args(const char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ascii_order(argv[j]) > ascii_order(argv[j + 1]))
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char const *argv[])
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
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
