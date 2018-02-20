/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:37:04 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/20 10:17:58 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, size_t n)
{
	char *c1;
	char *c2;
	size_t temp;

	if (s1 == s2 || n == 0)
	{
		return (s1);
	}
	temp = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (temp < n)
	{
		c1[temp] = c2[temp];
		if (c1[temp] == c)
		{
			return (c1 + temp + 1);
		}
		temp++;
	}
	return (NULL);
}
