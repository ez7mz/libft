#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	char **tab;
	tab = ft_split(argv[1], ' ');
	while (*tab)
	{
		printf("%s\n", *tab);
		tab++;
	}
	return (0);
}
