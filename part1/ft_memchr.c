/*busca um byte específico em uma área de memória e retorna 
um ponteiro para a primeira ocorrência desse byte. 
Se o byte não for encontrado, a função retorna NULL.*/

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i; // Inicializa um índice para a busca

    for (i = 0; i < n; i++) // Percorre os n bytes especificados
    {
        if (((unsigned char *)s)[i] == (unsigned char)c) // Verifica se o byte atual é igual ao caractere c
            return ((unsigned char *)s + i); // Retorna o ponteiro para a posição encontrada
    }
    return NULL; // Retorna NULL se o caractere c não for encontrado nos n bytes
}
