/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:00:42 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/15 13:01:36 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i  == 0)
			return (0);
		else
			i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}
