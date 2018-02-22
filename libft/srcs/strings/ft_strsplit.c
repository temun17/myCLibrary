/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allentemunovic <ajtemunovic@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:59:10 by allentemu         #+#    #+#             */
/*   Updated: 2018/02/21 15:44:32 by allentemu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t i;
	size_t add;
	
	add = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			add++;
		if (s[i])
			i++;
	}
	return (add);
}

static unsigned int	ft_mystrnew(const char *s, char c)
{
	int	a;
	
	a = 0;
	while (s[a] && s[a] != c)
		a++;
	return (a);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**new;
	char	**strings;
	unsigned int	i;
	unsigned int	j;
	unsigned int 	k;
	
	if (s)
	{
		if (!(new = (char **)malloc(sizeof(char *) * (ft_wordcount(s,c) + 1))))
			return (NULL);
		strings = new;
		i = 0;
		k = 0;
		while (s[i])
		{
			while (s[i] == c)
				i++;
			if (!(new[k] = (char *)malloc(sizeof(char) * (ft_mystrnew(s, c) + 1))))
				return (NULL);
			ft_memset(new[k], 0, (ft_mystrnew(s, c) + 1));
			j = 0;
			while (s[i] && s[i] != c)
				new[j][k++] = s[i++];
			new[j++][k] = '\0';
			if (s[i])
				i++;
		}
		return (strings);
	}
	return (NULL);
}	
