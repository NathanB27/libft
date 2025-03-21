/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <nboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:49:11 by nboucher          #+#    #+#             */
/*   Updated: 2024/11/13 11:48:37 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	result;

	result = 0;
	signe = 1;
	i = 0;
	while (white_space(str[i]))
		i ++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i ++;
	}
	return (signe * result);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
