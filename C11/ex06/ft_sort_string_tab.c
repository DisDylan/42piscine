/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 14:58:23 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/22 15:18:31 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (1);
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int i;

	i = 0;
	while (i < ft_strlen(tab) - 1)
	{
		if (strcmp(tab[i], tab[i + 1]))
		{
			ft_swap(tab[i], tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
