#include "libft.h"


int	main()
{
	t_list	*k = ft_lstnew("Hey");
	k->next = ft_lstnew("you");

	t_list *tmp = k;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstadd_back(&k, ft_lstnew("zbiiii"));
	printf("===============\n");
	printf("%s", (char *)ft_lstlast(k)->content);
	// printf("%d", ft_lstsize(k));
	return (0);
}


// 1456166247471474567
