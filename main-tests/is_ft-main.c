/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ft-main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:00:59 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/18 21:05:30 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	choix;

	printf ("1)- ft_isalpha\n");
	printf ("2)- ft_isdigit\n");
	printf ("3)- ft_isalnum\n");
	printf ("4)- ft_isascii\n");
	printf ("5)- ft_isprint\n");
	printf ("--> choose wish main to execute :  ");
	scanf("%d", &choix);
	printf ("\n-------------------------------------\n");
	if (choix == 1)
	{
		printf("ft_isalpha\n");
		printf("'a'   isalpha : %d \n", ft_isalpha('a'));
		printf("'F'   isalpha : %d \n", ft_isalpha('F'));
		printf("'-'   isalpha : %d \n", ft_isalpha('-'));
		printf("'5'   isalpha : %d \n", ft_isalpha('5'));
		printf("' '   isalpha : %d \n", ft_isalpha(' '));
		printf("'	' isalpha : %d \n", ft_isalpha('	'));
	}
	else if (choix == 2)
	{
		printf("ft_isdigit\n");
		printf("'a'   isdigit : %d \n", ft_isdigit('a'));
		printf("'F'   isdigit : %d \n", ft_isdigit('F'));
		printf("'-'   isdigit : %d \n", ft_isdigit('-'));
		printf("'5'   isdigit : %d \n", ft_isdigit('5'));
		printf("' '   isdigit : %d \n", ft_isdigit(' '));
		printf("'	' isdigit : %d \n", ft_isdigit('	'));
		printf("9 isdigit : %d \n", ft_isdigit(9));
	}
	else if (choix == 3)
	{
		printf("ft_isalnum\n");
		printf("'a'   isalnum : %d \n", ft_isalnum('a'));
		printf("'F'   isalnum : %d \n", ft_isalnum('F'));
		printf("'-'   isalnum : %d \n", ft_isalnum('-'));
		printf("'5'   isalnum : %d \n", ft_isalnum('5'));
		printf("' '   isalnum : %d \n", ft_isalnum(' '));
		printf("'	' isalnum : %d \n", ft_isalnum('	'));
		printf("9 isalnum : %d \n", ft_isalnum(9));
	}
	else if (choix == 4)
	{
		printf("ft_isascii\n");
		printf("-> 'a'   isascii : %d \n", ft_isascii('a'));
		printf("-> 'F'   isascii : %d \n", ft_isascii('F'));
		printf("-> '-'   isascii : %d \n", ft_isascii('-'));
		printf("-> '5'   isascii : %d \n", ft_isascii('5'));
		printf("-> ' '   isascii : %d \n", ft_isascii(' '));
		printf("-> '	' isascii : %d \n", ft_isascii('	'));
		printf("-> '%c'    isascii : %d \n", (-5), ft_isascii(-5));
	}
	else if (choix == 5)
	{
		printf("ft_isprint\n");
		printf("-> 'a'   isprint : %d \n", ft_isprint('a'));
		printf("-> 'F'   isprint : %d \n", ft_isprint('F'));
		printf("-> '-'   isprint : %d \n", ft_isprint('-'));
		printf("-> '5'   isprint : %d \n", ft_isprint('5'));
		printf("-> ' '   isprint : %d \n", ft_isprint(' '));
		printf("-> '	' isprint : %d \n", ft_isprint('	'));
		printf("-> '%c'    isprint : %d \n", 15, ft_isprint(15));
	}
	else
	{
		printf("choice undefined!");
	}
	return (0);
}
