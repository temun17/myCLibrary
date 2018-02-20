/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:47:19 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/19 17:27:24 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(fd, str, str[i]);
		i++;
	}
}
