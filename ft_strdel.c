#include "libft.h"

// Libera uma string e define o ponteiro como NULL
void ft_strdel(char **as)
{
    ft_memdel((void **)as); // Usa ft_memdel para liberar a memória
}
