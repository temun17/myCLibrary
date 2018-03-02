/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:01:26 by atemunov          #+#    #+#             */
/*   Updated: 2018/03/01 20:04:07 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl_fd(const char *s, int fd)
{

	unsigned int	len;

	len = ft_strlen(s);
	if (s)
	{
		write(fd, s, len);
		ft_putchar_fd('\n', fd);
	}
	return ;
}
