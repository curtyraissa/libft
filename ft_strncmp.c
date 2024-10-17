#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

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
