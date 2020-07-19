/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:44:29 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/13 19:35:49 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	else if ((power == 0 && nb == 0) || power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
