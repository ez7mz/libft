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

// 00000000 01010100 10011101 11101100

int main()
{
	int tab[] = {1, 5545452, 3, 4};
	int *p = tab;
	// ft_bzero(p, 20);
	ft_memset(p++, 1, 1);
	ft_memset((char *)p, 0x000000001, 1);
	ft_bzero((char *)p + 1, 3)
	ft_memset(++p, 1, 1);
	ft_memset(++p, 1, 1);

	printf("\n\n%d - %d - %d - %d", tab[0], tab[1], tab[2], tab[3]);
}
