#include "libft.h"

int atoi(const char *str)
{
    int i;
    int nbr;
    int neg;
    char *temp;

    nbr = 0;
    neg = 0;
    i = 0;
    while (ft_isspace(*temp))
    {
        temp++;
    }
    if (str[i] == '-')
        neg = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
    {
        nbr *= 10;
        nbr += (int)str[i] - '0';
        i++;
    }
    if (neg == 1)
        return (-nbr);
    else
        return (nbr);
}
