#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *last_occurrence = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/*
#include <stdio.h>
int main(void)
{
    const char *str = "Hello, 42!";
    printf("Result: %s\n", ft_strrchr(str, 'l'));
    printf("Result: %s\n", ft_strrchr(str, 'z')); //NULL
    printf("Result: %s\n", ft_strrchr(str, '\0'));
    return (0);
}
*/
