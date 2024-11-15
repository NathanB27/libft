/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <nboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:14:44 by nboucher          #+#    #+#             */
/*   Updated: 2024/11/13 15:41:30 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	j = 0;
	dest = ft_calloc((ft_strlen(s1) + ft_strlen(s2)+ 1), sizeof(char));
	while (s1[i])
	{
		dest[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j ++;
	}
	dest[i + j] = '\0';
	return (dest);
}
