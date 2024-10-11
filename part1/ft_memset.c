/*preenche uma área de memória com um valor específico (um byte). 
É comumente usada para inicializar um bloco de memória com um determinado valor.*/

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *)b; // Converte b para um ponteiro de byte
    size_t i;

    for (i = 0; i < len; i++) // Percorre os len bytes a serem preenchidos
    {
        ptr[i] = (unsigned char)c; // Define o byte atual para o valor c
    }

    return b; // Retorna o ponteiro para a área de memória preenchida
}