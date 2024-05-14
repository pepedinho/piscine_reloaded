/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:11:52 by itahri            #+#    #+#             */
/*   Updated: 2024/05/14 15:52:41 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	tab = malloc(sizeof(int) * range);
	if (!tab)
		return (NULL);
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
