/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:46:09 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/09 18:51:44 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_equal(const char *s1, const char *s2, int start, int end)
{
	int	i;
	int	j;

	i = start;
	j = 0;
	while ((s1[i] != '\0' || s2[j] != '\0') && i < end)
	{
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	tmp_len;

	if (len == 0)
		return (0);
	i = 0;
	tmp_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (is_equal(haystack, needle, i, tmp_len + i))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
