#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    int i;
    char *substr;

    i = 0;
    if (s == '\0')
    {
        return ('\0');
    }
    substr = (char *)malloc(sizeof(char) * (len +1));
    if (substr == '\0')
    {
        return ('\0');
    }
    while (len--)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
