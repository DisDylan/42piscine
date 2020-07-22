/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 12:15:57 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/22 16:23:35 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	long neg;
	long i;
	long num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	num *= neg;
	return (num);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

long	calcul(long nb1, long nb2, char symbol)
{
	long result;

	result = 0;
	if (symbol == '/')
		result = nb1 / nb2;
	else if (symbol == '*')
		result = nb1 * nb2;
	else if (symbol == '+')
		result = nb1 + nb2;
	else if (symbol == '-')
		result = nb1 - nb2;
	else if (symbol == '%')
		result = nb1 % nb2;
	return (result);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
			argv[2][0] != '/' && argv[2][0] != '%' && argv[2][1] != '\0')
		ft_putstr("0\n");
	else if (argv[2][0] == '/' && argv[3][0] == '0' && argv[3][1] == '\0')
		ft_putstr("Stop : division by zero\n");
	else if (argv[2][0] == '%' && argv[3][0] == '0' && argv[3][1] == '\0')
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(calcul(ft_atoi(argv[1]), ft_atoi(argv[3]), *argv[2]));
		write(1, "\n", 1);
	}
	return (0);
}
