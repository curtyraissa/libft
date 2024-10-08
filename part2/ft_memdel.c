#include "libft.h"

// Libera memória e define o ponteiro como NULL
void ft_memdel(void **ap)
{
    if (ap && *ap)     // Verifica se o ponteiro e seu conteúdo não são NULL
    {
        free(*ap);     // Libera a memória
        *ap = NULL;    // Define o ponteiro para NULL
    }
}
