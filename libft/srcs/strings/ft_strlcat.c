/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:42:44 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/27 17:39:43 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	k;
	char 	*s2;

	i = 0;
	l = 0;
	k = 0;
	s2 = (char *)src;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(s2) + dstsize);
	while ((dst[i] != '\0') && i < (dstsize - 1))
		i++;
	while (s2 && i < (dstsize - 1))
	{
		dst[i] = *s2;
		i++;
		s2++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(s2));
}
