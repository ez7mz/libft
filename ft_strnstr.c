/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:46:09 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/10 17:13:00 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (haystack[0] == '\0')
		return (0);
	while (haystack[i] && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, tmp_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
