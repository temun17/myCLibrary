/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:59:37 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/22 13:45:01 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	i = 0;
	if (s == '\0')
	{
		return (NULL);
	}
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == '\0')
	{
		return (NULL);
	}
	while (len--)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
