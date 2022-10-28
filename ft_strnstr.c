/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:46:09 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/28 18:46:53 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	tmp_len;

	i = 0;
	tmp_len = ft_strlen(needle);
	if (tmp_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && i + tmp_len <= len)
	{
		if (ft_strncmp(&haystack[i], needle, tmp_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
