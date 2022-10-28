/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:18:44 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/28 15:24:35 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		len;
	int		i;

	if (!s)
		return (0);
	len = ft_strlen(s);
	i = 0;
	ret = (char *)malloc(len * sizeof(char) + 1);
	if (!ret)
		return (0);
	while (s[i])
	{
		ret[i] = (*f)(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
