/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <nboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:40:47 by nboucher          #+#    #+#             */
/*   Updated: 2024/11/14 14:45:36 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(char *s)
{
	int		i;
	char	*dest;

	if (s == NULL)
		return (NULL);
	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
        char *test;

        test = ft_strdup(argv[1]);
        if (argc > 0)
                printf("%s\n", test);
        free(test);
        return (0);
}
*/