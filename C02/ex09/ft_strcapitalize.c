/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:14:01 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/07 16:21:51 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (i != ft_len(str))
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if ((str[i] <= 'z' && str[i] >= 'a') &&
				!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') &&
				!(str[i - 1] >= '0' && str[i - 1] <= '9') &&
				!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') &&
				((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
				(str[i - 1] >= '0' && str[i - 1] <= '9') ||
				(str[i - 1] >= 'a' && str[i - 1] <= 'z')))
			str[i] += 32;
		i++;
	}
	return (str);
}
