/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <nboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:27:27 by nboucher          #+#    #+#             */
/*   Updated: 2024/11/12 10:59:21 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}		
		else if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_isalpha(argv[1][0]));
	return (0);	
}
*/