/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:02:29 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/07 11:46:49 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int i;
	int max;

	i = 0;
	max = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[max];
		tab[max] = swap;
		i++;
		max--;
	}
}
