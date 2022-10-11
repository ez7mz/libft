/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:27:09 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/12 00:51:47 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return(1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_intlen(n);
	str = malloc (i * sizeof(char) + 1);
	if (!str)
		return (0);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i--] = '\0';
	while (n > 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}
