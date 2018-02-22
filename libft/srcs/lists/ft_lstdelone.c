/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:52:07 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/22 11:01:48 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(*del) ((*alst)->content, (*alst)->content_size);
	free(*alst);
	(*alst) = (NULL);
}
