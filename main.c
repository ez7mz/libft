#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_strnstr(((void *)0), "fake", 3));
	printf("%s\n", strnstr(((void *)0), "fake", 3));
}
