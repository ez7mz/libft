/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:29:59 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/11 13:07:56 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	len_to_alloc;

	i = 0;
	if (!s)
		return (0);
	if ((ft_strlen(s) - start) < len)
		len_to_alloc = ft_strlen(s) - start;
	else
		len_to_alloc = len;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub = (char *)malloc(len_to_alloc * sizeof(char) + 1);
	if (!sub)
		return (0);
	(void)ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
