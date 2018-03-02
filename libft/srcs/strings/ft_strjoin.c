/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:36:05 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/26 13:43:18 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		l;

	l = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (l + 1));
	if (!str)
	{
		return (NULL);
	}
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
