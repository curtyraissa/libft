/*copia um bloco de memória de uma área de origem para uma área de destino. 
É utilizada para copiar n bytes de uma string ou bloco de dados, e a função 
retorna um ponteiro para a área de destino.*/

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i; // Inicializa um índice para a cópia

    for (i = 0; i < n; i++) // Percorre os n bytes a serem copiados
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i]; // Copia cada byte de src para dst
    }

    return dst; // Retorna o ponteiro para a área de destino
}