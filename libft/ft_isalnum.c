#include "libft.h"

int ft_isalnum(int c)
{
    if ((LCASE(c)) || (UCASE(c)) || (DIGIT(c)))
    {
        return (1);
    }
    return (0);
}
