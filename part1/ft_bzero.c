#include "libft.h"

// Preenche n bytes da memória apontada por s com zeros
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n); // Chama ft_memset para zerar a memória
}