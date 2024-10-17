#include "libft.h"

char *ft_strchr(const char *s, int c)
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
    printf("Result: %s\n", ft_strchr(s, '\0'));  //final da string
    return (0);
}
*/
