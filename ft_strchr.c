/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:23:29 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/18 14:33:29 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    const char *s = "Hello, 42!";
    printf("Result: %s\n", ft_strchr(s, '4'));
    printf("Result: %s\n", ft_strchr(s, 'z'));   //NULL
    printf("Result: %s\n", ft_strchr(s, '\0'));  //final
    return (0);
}
*/
