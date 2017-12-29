#include "../../includes/libft.h"

void    *ft_memalloc(size_t size)
{
    char    *t;
    size_t  i;

    i = 0;
    if ((t = malloc(size)) == NULL)
    {
        return (NULL);
    }
    while (i < size)
    {
        t[i] = 0;
        i++;
    }
    return (t);
}
