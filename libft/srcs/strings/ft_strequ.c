/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:54:30 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 12:54:33 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    if (s1 == '\0' || s1 == '\0')
    {
        return (0);
    }
    if (!ft_strcmp(s1,s2))
    {
        return (1);
    }
    return (0);
}
