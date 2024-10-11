/*copia bytes de uma área de memória para outra até que um caractere específico seja 
encontrado ou que um número especificado de bytes tenha sido copiado. 
Se o caractere for encontrado, a função retorna um ponteiro para o próximo byte 
após o caractere copiado; caso contrário, retorna NULL.*/

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i; // Inicializa um índice para a cópia

    for (i = 0; i < n; i++) // Percorre os n bytes especificados
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i]; // Copia byte por byte
        if (((unsigned char *)src)[i] == (unsigned char)c) // Verifica se o byte copiado é igual ao caractere c
            return ((unsigned char *)dst + i + 1); // Retorna o ponteiro para o próximo byte em dst
    }
    return NULL; // Retorna NULL se o caractere c não for encontrado nos n bytes
}
