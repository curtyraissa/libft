#include "libft.h"

// Imprime uma string no output padrão
void ft_putstr(char const *s)
{
    if (s) // Verifica se a string não é NULL
        write(1, s, ft_strlen(s)); // Usa write para imprimir a string
}
