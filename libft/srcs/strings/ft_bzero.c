#include "../../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *c;

	c = s;
	while (n--)
	{
		*c++ = 0;
	}
}

	


