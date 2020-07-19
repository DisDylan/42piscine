/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:09:35 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/07/05 21:54:54 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char result;

	if (n < 0)
	{
		result = 'N';
		write(1, &result, 1);
	}
	else
	{
		result = 'P';
		write(1, &result, 1);
	}
}
