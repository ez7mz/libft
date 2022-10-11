#include "libft.h"

int	main(void)
{
	char	*str = "01234";
	size_t	size = 10;
	char	*ret = ft_substr(str, 10, size);

	if (!strncmp(ret, "", 1))
	{
		free(ret);
		printf("TEST_SUCCESS");
	}
	else
	{
		free(ret);
		printf("TEST_FAILED");
	}

	return (0);
}
