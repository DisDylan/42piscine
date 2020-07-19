/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:44:46 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/19 11:19:18 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		total_size(char **str, char *sp)
{
	int i;
	int j;
	int total;

	i = 0;
	total = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			total++;
		}
		j = 0;
		while (sp[j])
		{
			total++;
			j++;
		}
		i++;
	}
	return (total);
}

char	*concatenate(char **strs, char *newstr, char *sp)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			newstr[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sp[j])
		{
			newstr[k] = sp[j];
			j++;
			k++;
		}
		i++;
	}
	return (newstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		tsize;
	char	*newstr;

	i = 0;
	j = 0;
	if (size == 0)
	{
		newstr = malloc(sizeof(*newstr) * 1);
		newstr[0] = '\0';
		return (newstr);
	}
	tsize = total_size(strs, sep);
	if (!(newstr = malloc(sizeof(*newstr) * (tsize + 1))))
		return (0);
	newstr = concatenate(strs, newstr, sep);
	return (newstr);
}
