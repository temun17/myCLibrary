/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:53:02 by atemunov          #+#    #+#             */
/*   Updated: 2018/03/05 14:51:34 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
    int 			i;
    int				res;
    int				isneg;

    i = 0;
    res = 0;
    isneg = 1;
	while (ESEQUENCE(str[i]))
		i++;
	if (str[i] == '-')
		isneg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
    while ((str[i] >= '0' && str[i] <= '9'))
    {
        res *= 10;
        res += (str[i] - '0');
        i++;
    }
	return (res * isneg);
}
