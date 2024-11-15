/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <nboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:44:33 by nboucher          #+#    #+#             */
/*   Updated: 2024/11/14 16:03:50 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char	const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;

	len = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	while (s1[i] && is_in_set(set, s1[i]))
		i ++;
	while (s1[len] && is_in_set(set, s1[len]))
		len --;
	dest = (char *)ft_calloc(len - i + 2, sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i <= len)
	{
		dest[j] = s1[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (dest);
}
