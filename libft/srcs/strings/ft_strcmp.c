#include "../../includes/libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    size_t len;
    size_t len2;
    int result;

    len = ft_strlen(s1) + 1;
    len2 = ft_strlen(s2) + 1;
    len = (len <= len2) ? len : len2;
    result = ft_memcmp(s1, s2, len);
    return (result);
}
