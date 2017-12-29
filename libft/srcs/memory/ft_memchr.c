#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *temp;

    temp = (unsigned char *)s;
    while (n--)
    {
        if (*temp == c)
            return (temp);
        if (n)
            temp++;
    }
    return (NULL);
}
