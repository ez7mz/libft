/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:27:09 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/13 17:01:39 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
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

static char	*get_zero(char *str)
{
	str[0] = '0';
	return (str);
}

static void	proc(char *str, int i, int n)
{
	while (n > 0)
	{
		str[i--] = n % 10 + 48;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_intlen(n);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n == 0)
		return (get_zero(str));
	if (n == -2147483648)
	{
		str[i--] = '8';
		n = -214748364;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	proc(str, i, n);
	return (str);
}
