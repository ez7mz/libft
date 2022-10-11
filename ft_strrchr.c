/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:22:29 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/11 23:52:32 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				n;
	char			*tmp;
	unsigned char	test;

	n = ft_strlen(s) + 1;
	tmp = NULL;
	test = c;
	while (n--)
	{
		if (*s == test)
			tmp = (char *)s;
		s++;
	}
	return (tmp);
}
