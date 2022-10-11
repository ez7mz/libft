/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:45:27 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/11 13:54:49 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(len * sizeof(char) + 1);
	if (!join)
		return (0);
	(void)ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	(void)ft_strlcat(join, s2, len + 1);
	return (join);
}
