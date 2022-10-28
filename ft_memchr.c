/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:19:56 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/28 14:51:18 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;
	unsigned char	test;

	i = 0;
	tmp = (unsigned char *)s;
	test = c;
	while (i < n)
	{
		if (*tmp == test)
			return (tmp);
		i++;
		tmp++;
	}
	return (0);
}
