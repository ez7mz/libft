/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:52:37 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/28 18:33:41 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (src_len + dstsize);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	(void)ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (src_len + dst_len);
}
