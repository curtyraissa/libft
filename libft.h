#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h> // Para malloc e free
# include <unistd.h> // Para write
# include <string.h> // Para NULL e size_t

// Definição da estrutura para manipulação de listas encadeadas
typedef struct s_list
{
    void            *content;        // Ponteiro para o conteúdo do nó
    size_t          content_size;    // Tamanho do conteúdo
    struct s_list   *next;           // Ponteiro para o próximo nó
}                   t_list;

// Protótipos das funções de manipulação de memória
void    *ft_memset(void *b, int c, size_t len); // Preenche a memória com um valor específico
void    ft_bzero(void *s, size_t n); // Zera a memória
void    *ft_memcpy(void *dst, const void *src, size_t n); // Copia memória de um lugar para outro
void    *ft_memccpy(void *dst, const void *src, int c, size_t n); // Copia até um caractere específico
void    *ft_memmove(void *dst, const void *src, size_t len); // Move memória (cuidado com sobreposição)
void    *ft_memchr(const void *s, int c, size_t n); // Encontra um caractere na memória
int     ft_memcmp(const void *s1, const void *s2, size_t n); // Compara duas áreas de memória

// Protótipos das funções de manipulação de strings
size_t  ft_strlen(const char *s); // Retorna o comprimento da string
char    *ft_strdup(const char *s1); // Duplicata uma string
char    *ft_strcpy(char *dst, const char *src); // Copia uma string
char    *ft_strncpy(char *dst, const char *src, size_t n); // Copia até n caracteres
char    *ft_strcat(char *s1, const char *s2); // Concatena duas strings
char    *ft_strncat(char *s1, const char *s2, size_t n); // Concatena até n caracteres
size_t  ft_strlcat(char *dst, const char *src, size_t size); // Concatena e limita o tamanho
char    *ft_strchr(const char *s, int c); // Encontra um caractere em uma string
char    *ft_strrchr(const char *s, int c); // Encontra o último caractere em uma string
char    *ft_strstr(const char *haystack, const char *needle); // Encontra uma substring
char    *ft_strnstr(const char *haystack, const char *needle, size_t len); // Encontra uma substring até n caracteres
int     ft_strcmp(const char *s1, const char *s2); // Compara duas strings
int     ft_strncmp(const char *s1, const char *s2, size_t n); // Compara até n caracteres
int     ft_atoi(const char *str); // Converte uma string para um inteiro

// Protótipos das funções de verificação de caracteres
int     ft_isalpha(int c); // Verifica se é letra
int     ft_isdigit(int c); // Verifica se é dígito
int     ft_isalnum(int c); // Verifica se é alfanumérico
int     ft_isascii(int c); // Verifica se é caractere ASCII
int     ft_isprint(int c); // Verifica se é caractere imprimível
int     ft_toupper(int c); // Converte para maiúscula
int     ft_tolower(int c); // Converte para minúscula

// Protótipos das funções adicionais
void    *ft_memalloc(size_t size); // Aloca memória e inicializa com 0
void    ft_memdel(void **ap); // Libera memória e define o ponteiro como NULL
char    *ft_strnew(size_t size); // Cria uma nova string inicializada com 0
void    ft_strdel(char **as); // Libera a string e define o ponteiro como NULL
void    ft_strclr(char *s); // Limpa a string definindo todos os caracteres como '\0'
void    ft_striter(char *s, void (*f)(char *)); // Aplica função a cada caractere
void    ft_striteri(char *s, void (*f)(unsigned int, char *)); // Aplica função com índice
char    *ft_strmap(const char *s, char (*f)(char)); // Cria nova string aplicando função
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char)); // Cria nova string com índice
int     ft_strequ(const char *s1, const char *s2); // Compara strings para igualdade
int     ft_strnequ(const char *s1, const char *s2, size_t n); // Compara até n caracteres
char    *ft_strsub(const char *s, unsigned int start, size_t len); // Cria substring
char    *ft_strjoin(const char *s1, const char *s2); // Concatena duas strings
char    *ft_strtrim(const char *s); // Remove espaços em branco do início e fim
char    **ft_strsplit(const char *s, char c); // Divide string em array usando delimitador
char    *ft_itoa(int n); // Converte inteiro para string
void    ft_putchar(char c); // Imprime caractere
void    ft_putstr(const char *s); // Imprime string
void    ft_putendl(const char *s); // Imprime string com nova linha
void    ft_putnbr(int n); // Imprime número inteiro
void    ft_putchar_fd(char c, int fd); // Imprime caractere em fd
void    ft_putstr_fd(const char *s, int fd); // Imprime string em fd
void    ft_putendl_fd(const char *s, int fd); // Imprime string com nova linha em fd
void    ft_putnbr_fd(int n, int fd); // Imprime número em fd

// Protótipos das funções de manipulação de listas
t_list  *ft_lstnew(void const *content, size_t content_size); // Cria novo nó
void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t)); // Libera nó
void    ft_lstdel(t_list **alst, void (*del)(void *, size_t)); // Libera lista
void    ft_lstadd(t_list **alst, t_list *new); // Adiciona nó no início da lista
void    ft_lstiter(t_list *lst, void (*f)(t_list *elem)); // Aplica função a cada nó
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)); // Cria nova lista

#endif