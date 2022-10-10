/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:22:29 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/09 16:19:01 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	*tmp;

	n = ft_strlen(s) + 1;
	tmp = NULL;
	while (n--)
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	return (tmp);
}
