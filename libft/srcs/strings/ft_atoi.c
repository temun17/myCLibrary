/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:53:02 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 17:08:19 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int neg;

	nbr = 0;
	neg = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
				str[i] == '\v' ||
				(str[i] == '\f')) || (str[i] == '\n'))
		i++;
	if (ISIGN(str[i]))
		i++;
	if (str[i] == '-')
		neg = 1;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-nbr);
	else
		return (nbr);
}
