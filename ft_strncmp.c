/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:25:01 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/22 18:03:48 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Hello", 5));
    printf("%d\n", ft_strncmp("Hello", "Hellp", 5));
    printf("%d\n", ft_strncmp("Hello", "Hell", 5));
    printf("%d\n", ft_strncmp("Hello", "Hello", 3));
    return (0);
}
*/
