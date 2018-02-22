/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:25:00 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/20 13:36:51 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;	

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[k] != '\0')
	{
		k++;
	}
	return(k + dstsize);
}
