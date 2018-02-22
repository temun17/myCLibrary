/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:34:12 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/21 12:01:33 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i = 0;
	int	k = 0;
	char	*fstr;

	fstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (fstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		fstr[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		fstr[i+ k] = s2[k];
		k++;
	}
	fstr[i + k] = '\0';
	return (fstr);
}
