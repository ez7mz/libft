/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:10:52 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/11 23:51:04 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				n;
	unsigned char	test;

	n = ft_strlen(s) + 1;
	test = c;
	while (n--)
	{
		if (*s == test)
			return ((char *)s);
		s++;
	}
	return (0);
}
