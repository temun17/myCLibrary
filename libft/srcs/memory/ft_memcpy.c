/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:38:16 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/23 13:23:28 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char *c1;
	char *c2;

	if (n == 0 || s1 == s2)
	{
		return (s1);
	}
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (n--)
	{
		*c1++ = *c2++;
	}
	c1 = c2;
	return (s1);
}
