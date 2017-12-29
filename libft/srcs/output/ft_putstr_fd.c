#include "../../includes/libft.h"

void    ft_putstr_fd(const char *str, int fd)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(fd, str, str[i]);
        i++;
    }
}
