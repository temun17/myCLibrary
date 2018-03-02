/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:01:31 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/27 14:48:40 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static	size_t	ft_mystrlen(int n)
{
	size_t	a;

	a = 1;
	while (n /= 10)
		a++;
	return (a);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	sign;

	len = ft_mystrlen(n);
	sign = n;
	if (n < 0)
	{
		sign = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = sign % 10 + 48;
	while (sign /= 10)
		str[--len] = sign % 10 + 48;
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
