/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 01:28:26 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/07 13:01:25 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int alpha, int bravo)
{
	char nb_a;
	char nb_b;
	char nb_c;
	char nb_d;

	nb_a = alpha / 10 + 48;
	nb_b = alpha % 10 + 48;
	nb_c = bravo / 10 + 48;
	nb_d = bravo % 10 + 48;
	write(1, &nb_a, 1);
	write(1, &nb_b, 1);
	write(1, " ", 1);
	write(1, &nb_c, 1);
	write(1, &nb_d, 1);
	if (alpha == 98 && bravo == 99)
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
	}
}
