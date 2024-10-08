#include "libft.h"

// Aloca uma nova string e inicializa com zero
char *ft_strnew(size_t size)
{
    char *str;

    str = (char *)ft_memalloc(size + 1); // Aloca memória e adiciona espaço para o caractere nulo
    return (str); // Retorna a nova string
}
