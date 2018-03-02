/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:53:02 by atemunov          #+#    #+#             */
/*   Updated: 2018/03/01 20:26:01 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	intmax_t		res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res*10 + str[i] - '0';
		i++;;
	}
	return res;
}
