#include "../../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (src != '\0' && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '0';
	return (dst);

}
