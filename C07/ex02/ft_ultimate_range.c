/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:37:01 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/15 14:20:37 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	size = max - (min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(*tab) * size);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	if (i <= 0)
		return (-1);
	return (i);
}
