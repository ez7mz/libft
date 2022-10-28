/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:20:34 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/28 15:01:45 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free (strings[i]);
		i++;
	}
	free(strings);
	return (0);
}

static	int	len_to_extract(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && !(s[i] == c))
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
		while (s[i] != '\0' && (s[i] == c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !(s[i] == c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	if (!s)
		return (0);
	strings = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strings)
		return (0);
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			strings[i] = ft_substr(s, 0, len_to_extract(s, c));
			if (!strings[i++])
				return (ft_free(strings));
		}
		while (*s && !(*s == c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
