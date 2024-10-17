#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = 0;
	while(s1[len])
		len++;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strdup("Hello, 42!"));
	return (0);
}
*/
