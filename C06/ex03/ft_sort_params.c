/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:26:24 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/14 10:36:26 by dpoinsu          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int k;
	int k2;

	k = 0;
	k2 = 1;
	if (s1[k] == '.' && s1[k2] == '/')
		return (0);
	while (s1[k] || s2[k])
	{
		if (s1[k] > s2[k])
			return (1);
		else if (s1[k] < s2[k])
			return (-1);
		k++;
	}
	return (0);
}

void	ft_sort_in_tab(char **str)
{
	int		l;
	char	*swap;

	l = 1;
	while (str[l])
	{
		if (ft_strcmp(str[l - 1], str[l]) == 1)
		{
			swap = str[l];
			str[l] = str[l - 1];
			str[l - 1] = swap;
			l = 1;
		}
		l++;
	}
}

int		main(int argc, char **argv)
{
	int		j;
	char	**printable;

	(void)argc;
	(void)argv;
	j = 1;
	printable = argv;
	ft_sort_in_tab(printable);
	while (printable[j])
	{
		ft_putstr(printable[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
