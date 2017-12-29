#include "../../includes/libft.h"

void    ft_pustr(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
