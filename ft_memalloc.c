#include "libft.h"

// Aloca memória e inicializa com zero
void *ft_memalloc(size_t size)
{
    void *ptr;

    ptr = (void *)malloc(size); // Tenta alocar o espaço de memória
    if (!ptr)          // Se a alocação falhar
        return (NULL); // Retorna NULL
    ft_bzero(ptr, size); // Inicializa a memória alocada com zeros
    return (ptr);      // Retorna o ponteiro para a nova área de memória
}
