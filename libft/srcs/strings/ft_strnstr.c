/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:18:39 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/20 16:38:45 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	char	*big;
	char	*small;
	size_t	i;

	big = (char *)haystack;
	small = (char *)needle;
	i = ft_strlen(small);
	if (i == 0)
	{
		return (char *)(big);
	}
	if (i > len)
	{
		return ((char *)('\0'));
	}
	while (big != '\0' && len)
	{
		if (big == small)
		{
			while((big + i) == (small + i) && len - i)
			{
				i++;
				if ((small + i) == '\0')
				{
					return (big);
				}
			}
			len--;
			big++;
		}
	}
	return (NULL);
}
