/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:57:43 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/15 09:42:04 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int nbr;

	i = 0;
	nbr = nb;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= nbr)
	{
		if (i * i == nbr)
			return (i);
		i++;
	}
	return (0);
}
