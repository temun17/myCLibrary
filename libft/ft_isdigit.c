#include "libft.h"

int ft_isdigit(int c)
{
    if (DIGIT(c))
    {
        return (1);
    }
    return (0);
}
