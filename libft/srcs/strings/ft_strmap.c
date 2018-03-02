/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:53:02 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/27 14:49:29 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	j = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s[i] != 0)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
