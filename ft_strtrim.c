/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:55:50 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/18 18:39:35 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	left_len(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	right_len(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (i >= 0 && ft_strchr(set, s1[i]))
	{
		i--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		len;
	int		start;
	int		rstart;

	if (!s1 || !set)
		return (0);
	start = left_len(s1, set);
	rstart = right_len(s1, set);
	len = ft_strlen(s1) - (start + rstart);
	if (len <= 0)
		return (ft_strdup(""));
	if (start == 0 && rstart == 0)
		return (ft_strdup(s1));
	trim = ft_substr(s1, start, len);
	return (trim);
}
