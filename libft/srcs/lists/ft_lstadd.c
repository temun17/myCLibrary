/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:37:01 by atemunov          #+#    #+#             */
/*   Updated: 2018/03/01 16:28:00 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = (*alst);
	if (!new && !temp)
		return ;
	new->next = temp;
	*alst = new;	
}
