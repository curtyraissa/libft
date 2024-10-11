#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    unsigned int d = 0; // Inicializa o índice para dest
    unsigned int s = 0; // Inicializa o índice para src
    unsigned int i = 0; // Inicializa o índice para a cópia

    // Calcula o comprimento da string de destino (dest)
    while (dest[d] && d < size)
        d++;
    
    // Calcula o comprimento da string de origem (src)
    while (src[s])
        s++;
    
    // Se o tamanho total disponível é menor ou igual ao comprimento de dest,
    // retorna o comprimento de src + size
    if (size <= d)
        return (s + size);

    // Copia os caracteres de src para dest
    while (src[i] && (d + i) < (size - 1))
    {
        dest[d + i] = src[i];
        i++;
    }
    dest[d + i] = '\0';
    
    // Retorna o comprimento total da nova string (dest + src)
    return (d + s);
}
