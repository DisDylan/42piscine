/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:26:15 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/12 13:14:33 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int total;

	i = ft_strlen(dest);
	total = ft_strlen(src);
	total += i;
	j = 0;
	if (size > 0 && i < size)
	{
		while ((i + j) < size && src[j])
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (total);
}
