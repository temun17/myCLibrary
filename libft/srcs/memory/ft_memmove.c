/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:43:29 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 12:43:33 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*b;
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	if (s1 == '\0' || s2 == '\0')
		return (s1);
	if (!(b = malloc(sizeof(size_t) * len)))
		return (NULL);
	while (i < len)
	{
		*((char *)b + i) = *((char *)s2 + i);
		i++;
	}
	ft_memcpy(s1, b, len);
	free(b);
	return (s1);

}
