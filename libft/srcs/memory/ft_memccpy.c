/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:37:04 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/26 17:16:52 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*c1;
	unsigned char		*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n > 0)
	{
		*c1 = *c2;
		if (*c1 == (unsigned char)c)
			return (c1 + 1);
		c1++;
		c2++;
		n--;
	}
	return (NULL);
}
