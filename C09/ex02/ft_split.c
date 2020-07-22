/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 10:26:38 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/22 16:59:27 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
			count++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
	{
		if (str[i] && (is_charset(str[i], charset)))
			break ;
		i++;
	}
	if (!(dest = malloc(sizeof(dest) * (i + 1))))
		return (NULL);
	dest = ft_strncpy(dest, str, i);
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * count_words(str, charset) + 1)))
		return (NULL);
	while (str[i] && j < count_words(str, charset))
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
		{
			tab[j] = ft_strdup(str + i, charset);
			j++;
		}
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	tab[j] = 0;
	return (tab);
}
