/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:53:53 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 12:53:57 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char    *ft_strchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while (*str != c)
    {
        if (*str == '\0')
        {
            return (NULL);
        }
        str++;
    }
    return (str);
}
