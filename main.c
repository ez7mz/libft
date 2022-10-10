#include "libft.h"

int	main(void)
{
	// printf("%s\n", ft_strnstr(((void *)0), "fake", 3));
	// printf("%s\n", strnstr(((void *)0), "fake", 3));

	char hello[100] = "amongus";

	printf("string before memecpy : %s\n",hello);
	memcpy((hello + 5),hello,strlen(hello) + 1);
	printf("string after memecpy : %s",hello);
}
