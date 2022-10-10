#include "libft.h"

int	main(void)
{
	char *ptr;

	ptr = ft_calloc(4, 20);
	if (!ptr)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
}
