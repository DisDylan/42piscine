/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 09:33:15 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/09 09:01:35 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, int n, int nb)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (s1[nb] == s2[i])
		{
			i++;
			nb++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp(str, to_find, len, i))
			return (str + i);
		i++;
	}
	return (0);
}
