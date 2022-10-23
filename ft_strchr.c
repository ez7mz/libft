/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:10:52 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/23 22:45:18 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		n;
	char	test;

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
