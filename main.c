#include "libft.h"

// void (*f)(unsigned int, char *)

void	full(unsigned int i, char *s)
{
	(void)i;
	printf("%c |", *s);
}

int	main()
{
	char lol = 'c';
	ft_memset(&lol, 'v', 13);
	// printf("%s\n", lol);
	ft_striteri(&lol, full);
	return (0);
}
// 1456166247471474567
