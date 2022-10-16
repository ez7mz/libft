/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:20:34 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/16 18:04:22 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_c(char s_i, char c)
{
	if (s_i == c)
		return (1);
	return (0);
}

static	int	len_to_extract(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && !is_c(s[i], c))
		i++;
	return (i);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && is_c(s[i], c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !is_c(s[i], c))
			i++;
	}
	return (count);
}

static char	*extract_word(char const *s, char c)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = len_to_extract(s, c);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (0);
	len = count_words(s, c);
	strings = (char **)malloc(sizeof(char *) * (len + 1));
	if (!strings)
		return (0);
	while (*s)
	{
		while (*s && is_c(*s, c))
			s++;
		if (*s)
		{
			strings[i] = extract_word(s, c);
			i++;
		}
		while (*s && !is_c(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
