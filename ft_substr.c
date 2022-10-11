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

	i = 0;
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (!sub || !s)
		return (0);
	if (start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	(void)ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
