/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:40:58 by itahri            #+#    #+#             */
/*   Updated: 2024/05/14 15:27:22 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	
	if (i == 0)
		return (1);
	else if (i < 0)
		return (0);
	if (nb > 12)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
