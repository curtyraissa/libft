/*compara duas áreas de memória byte a byte. Ela retorna um valor inteiro 
que indica se as áreas de memória são iguais ou se uma é maior ou menor que a outra. */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i; // Inicializa um índice para a comparação

    for (i = 0; i < n; i++) // Percorre os n bytes especificados
    {
        unsigned char byte1 = ((unsigned char *)s1)[i]; // Obtém o byte da primeira área
        unsigned char byte2 = ((unsigned char *)s2)[i]; // Obtém o byte da segunda área

        if (byte1 != byte2) // Se os bytes forem diferentes, retorna a diferença
            return (byte1 - byte2);
    }
    return 0; // Se todos os n bytes forem iguais, retorna 0
}
