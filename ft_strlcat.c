/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:52:37 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/16 17:47:44 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (dstsize == 0 && !dst)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	(void)ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (src_len + dst_len);
}
