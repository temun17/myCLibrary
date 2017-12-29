#include "../../includes/libft.h"

size_t  ft_strlen(const char *str)
{
    size_t  strlen;

    strlen = 0;
    while (str[strlen] != '\0')
    {
        strlen++;
    }
    return (strlen);
}
