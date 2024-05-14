/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:11:52 by itahri            #+#    #+#             */
/*   Updated: 2024/05/14 14:31:28 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	decrement;
	int	i;

	i = 0;
	if (min == max)
		return (NULL);
	else if (min > max)
		return (NULL);
	else
	{
		range = max - min;
		decrement = max - 1;
	}
	tab = malloc(sizeof(int) * range - 1);
	if (!tab)
		return (NULL);
	while (i++ <= range - 1)
		tab[i - 1] = decrement - (i - 1);
	return (tab);
}
