#include "libft.h"

// Define todos os caracteres da string como '\0'
void ft_strclr(char *s)
{
    if (s) // Verifica se a string não é NULL
        ft_bzero(s, ft_strlen(s)); // Zera a string
}
