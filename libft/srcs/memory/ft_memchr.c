/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:37:21 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 12:37:27 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *temp;

    temp = (unsigned char *)s;
    while (n--)
    {
        if (*temp == c)
            return (temp);
        if (n)
            temp++;
    }
    return (NULL);
}
