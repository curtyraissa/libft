#include "libft.h"

// Localiza a primeira ocorrência do caractere c na string s
char *ft_strchr(const char *s, int c)
{
    size_t i = 0;

    while (s[i]) // Percorre a string até encontrar o caractere nulo
    {
        if (s[i] == (char)c) // Verifica se encontrou o caractere
            return ((char *)s + i); // Retorna um ponteiro para a ocorrência encontrada
        i++; // Avança para o próximo caractere
    }

    // Verifica se c é o caractere nulo
    if (c == '\0')
        return ((char *)s + i); // Retorna o ponteiro para o caractere nulo no final da string

    return NULL; // Retorna NULL se o caractere não for encontrado
}
