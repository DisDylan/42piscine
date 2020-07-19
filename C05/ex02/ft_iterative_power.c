/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:31:16 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/13 19:28:12 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int base;

	i = 1;
	base = nb;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			nb *= base;
			i++;
		}
	}
	return (nb);
}
