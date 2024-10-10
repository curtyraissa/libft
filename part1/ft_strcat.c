#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
    char *ptr;

    *ptr = s1;
    while (*ptr)
        ptr++;

    while (*s2 != '\0')
    {
        *ptr = *s2;
        ptr++;
        s2++;
    }

    *ptr = '\0';
    return (s1); // Retorna o ponteiro para s1
}
