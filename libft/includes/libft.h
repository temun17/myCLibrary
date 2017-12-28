#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <strings.h>
# include <unistd.h>

# define UCASE(x) (x >= 'A' && x <= 'Z')
# define LCASE(x) (x >= 'a' && x <= 'z')
# define ALPHA(x) (UCASE(x) || LCASE(x))
# define DIGIT(x) (x >= '0' && x <= '9')
# define ISIGN(x) (x == '+' || x == '-')

typedef struct      s_list
{
    void                    *content;
    size_t                  content_size;
    struct s_list   *next;
}                                   t_list;

void            ft_putchar(char c);
void            ft_putchar_fd(char, int fd);
void            ft_putstr(const char *str);
void            ft_putstr_fd(const char *str, int fd);
void            ft_putnbr(int n);
void		print_bits(unsigned char octet);
void            *ft_memcpy(void *s1, const void *s2, size_t n);
void            *ft_memccpy(void *s1, const void *s2, int c, size_t n);
void            *ft_memchr(const void *s, int c, size_t n);
void            *ft_memalloc(size_t size);
void		*ft_memset(void *b, int c, size_t len);
void            ft_memdel(void **ap);
int             ft_isalpha(int c);
int             ft_toupper(int c);
int             ft_tolower(int c);
int             ft_isprint(int c);
int             ft_isdigit(int c);
int             ft_isascii(int c);
int             ft_isalnum(int c);
int             ft_isspace(int c);
int             ft_atoi(const char *str);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
int             ft_strcmp(const char *s1, const char *s2);
int             ft_strncmp(const char *s1, const char *s2, size_t n);
int             ft_strequ(char const *s1, char const *s2);
int             ft_strnequ(char const *s1, char const *s2, size_t n);
size_t          ft_strlen(const char *str);
char            *ft_strdup(char *src);
char            *ft_strcpy(char *dest, const char *src);
char            *ft_strcat(char *dest, const char *src);
char            *ft_strncat(char *dest, const char *src, size_t n);
char            *ft_strchr(const char *s, int c);
char            *ft_strrchr(const char *s, int c);
char            *ft_strnew(size_t size);
char            *ft_strsub(char const *s, unsigned int start, size_t len);
void            ft_strdel(char **as);
void            ft_strclr(char *s);

#endif

