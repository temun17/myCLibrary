/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:20:55 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/21 14:54:49 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	char	*new;

	start = 0;
	while (ESCAPE(s[start]))
		start++;
	if (s[start] == '\0')
	{
		new = ft_strnew(0);
		new[0] = '\0';
		return (new);
	}
	end = ft_strlen(s) - 1;
	while ((ESCAPE(s[end])) && end > 0)
		end--;
	if (!(new = (ft_strsub(s, start, end - start + 1))))
		return (NULL);
	return (new);

}
