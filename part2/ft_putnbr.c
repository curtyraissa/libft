#include "libft.h"

// Imprime um número inteiro no output padrão
void ft_putnbr(int n)
{
    if (n < 0) // Se o número for negativo
    {
        ft_putchar('-'); // Imprime o sinal negativo
        n = -n; // Converte o número para positivo
    }
    if (n >= 10) // Se o número for maior ou igual a 10
        ft_putnbr(n / 10); // Chama recursivamente para imprimir o dígito mais significativo
    ft_putchar(n % 10 + '0'); // Imprime o dígito menos significativo
}
