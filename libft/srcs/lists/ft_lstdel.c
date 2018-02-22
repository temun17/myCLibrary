/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:04:34 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/22 11:16:00 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *temp;
	
	temp = *alst;
	while (temp != NULL)
	{
		next = temp->next;
		(*del)(temp->content, temp->content_size);
		free(temp);
		(temp) = next;
	}
	temp = NULL;
}
