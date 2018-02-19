/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:58:02 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 12:58:04 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *str;

    str = (char *)s + ft_strlen(s);
    while (*str != c)
    {
        if (str == s)
        {
            return (NULL);
        }
        str--;
    }
    return (str);
}
