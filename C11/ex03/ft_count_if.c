/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 10:55:12 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/23 10:47:41 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int how_many;

	i = 0;
	how_many = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			how_many++;
		i++;
	}
	return (how_many);
}
