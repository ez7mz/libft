/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/10/07 16:18:28 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/07 16:18:28 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	cc;

	i = 0;
	str = (char *)b;
	cc = c;
	while (i < n)
		str[i++] = cc;
	return (b);
}
