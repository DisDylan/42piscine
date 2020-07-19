/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:20:09 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/13 15:21:38 by dpoinsu          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int j;

	(void)argc;
	(void)argv;
	j = 1;
	while (argv[j])
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
