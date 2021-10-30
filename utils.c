/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:27:41 by canjugun          #+#    #+#             */
/*   Updated: 2021/10/30 21:35:31 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	digit;

	i = 0;
	digit = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		neg = (str[i++] == '-') ? -1 : 1;
	while (str[i] > 47 && str[i] < 58)
	{
		digit = digit * 10 + (str[i++] - '0');
		if (digit >= 9223372036854775807)
			return ((neg == -1) ? 0 : -1);
	}
	return (digit * neg);
}

int	print(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (-1);
}