/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:18:01 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/22 11:23:08 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = *alst;
	if (!(temp))
		temp = new;
	else
	{
		new->next = temp;
		temp = new;
	}
}
