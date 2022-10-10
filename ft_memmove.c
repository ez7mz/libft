/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:44:33 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/07 16:44:33 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    char    *tmp_src;
    char    *tmp_dst;

    // Check source and dstination validity
    if (src == NULL && dst == NULL) return (dst);

    tmp_src = (char *)src;
    tmp_dst = (char *)dst;

    // if ther's no overlapping
    if (dst < src)
    {
        ft_memcpy(dst, src, n);
    }
    // if there's overlapping (not all case there's but always happened if src address gt dst address)
    else {
        while (n--)
        {
            tmp_dst[n] = tmp_src[n];
        }
    }
    return (dst);
}
