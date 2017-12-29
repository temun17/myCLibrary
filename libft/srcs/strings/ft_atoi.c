#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int neg;

	nbr = 0;
	neg = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' ||
			(str[i] == '\f')) || (str[i] == '\n'))
		i++;
	if (ISIGN(str[i]))
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = 1;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
	{
		return (-nbr);
	}
	else
	{
		return (nbr);
	}
}
		
