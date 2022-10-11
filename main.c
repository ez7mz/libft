#include "libft.h"

int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");

	printf("%s\n", ret);
	printf("%s\n", s2);
	if (ret)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
	return (0);
}
