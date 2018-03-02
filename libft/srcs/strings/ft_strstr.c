/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:50:08 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/27 14:46:58 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	str;

	i = 0;
	j = 0;
	str = 0;
	while (needle[str] != '\0')
		str++;
	if (!str)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i + j])
		{
			if (j == str - 1)
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
