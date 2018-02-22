/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:02:09 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/21 11:29:32 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int	i = 0;
	int	j;
	
	if (!s)
	{
		return (NULL);
	}
	j = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	while (s[i] != 0)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
