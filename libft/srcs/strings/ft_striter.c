/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:10:47 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/20 17:23:53 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i = 0;
	
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
