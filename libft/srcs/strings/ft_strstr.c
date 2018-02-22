/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:43:29 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/20 14:05:33 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	int i = 0;
	int j = 0;
	
	while (haystack[i] != '\0')
	{
		while (needle[j] == haystack[i + j])
		{
			if (needle[j  + 1] == '\0')
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
