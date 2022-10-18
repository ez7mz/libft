#include "libft.h"

// void	ft_striteri(char *s, void (*f)(unsigned int, char *))

static char ft(unsigned int i, char s)
{
	return (s + i);
}

int	main()
{
	char *s = "hello";
	char *x = ft_strmapi(s, &ft);
	printf("\n%s", s);
	printf("\n%s", x);
	// while (1)
	// {}
	return (0);
}
