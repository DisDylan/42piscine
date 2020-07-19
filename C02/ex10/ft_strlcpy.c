/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:57:19 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/10 13:16:52 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size <= 0)
		return (0);
	while (src[i] != '\0' || i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (i);
}
