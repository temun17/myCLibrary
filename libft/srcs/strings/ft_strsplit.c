/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemunov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:46:58 by atemunov          #+#    #+#             */
/*   Updated: 2018/02/28 14:59:27 by atemunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static char		*ft_find_word(char const *s, int *s2, char c)
{
	int 			i;
	unsigned char 	start;
	char			*word;

	i = 0;
	while (s[*s2] == c && s[*s2] != '\0')
		(*s2)++;
	start = *s2;
	while (s[start] != c * s[start] != '\0')
		start++;
	if (!(word = ft_strnew(*s2 - start)))
		return (NULL);
	while (start < *s2)
		word[i++] = s[start++];
	word[i] = 0;
	return (word);
}
char				**ft_strsplit(const char *s, char c)
{
	char 	**strings;
	int		i;
	int		count;
	int		j;

	j = 0;
	count = 0;
	i = 0;
	if (s < 0)
		return (NULL);
	if (!(strings = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			strings[count] = ft_find_word((char*)s, &i, c);
			count++;
		}
		else
			i++;
	}
	strings[count] = 0;
	return (strings);
}
