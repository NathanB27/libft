/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <nboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:12:18 by nboucher          #+#    #+#             */
/*   Updated: 2024/11/14 15:42:25 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	if (!*to_find)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (*str && len)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] == str[i] && to_find[i] && i < len - 1)
			{
				i ++;
			}
			if (!to_find[i])
				return ((char *)str);
		}
		len --;
		str ++;
	}
	return (0);
}
