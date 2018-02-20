/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:59:15 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 17:12:26 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_size;
	size_t i;

	i = 0;
	dest_size = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
