#include "libft.h"

int	main(void)
{
	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	t_list *ret;

	l->next = ft_lstnew(strdup("ss"));
	l->next->next = ft_lstnew(strdup("-_-"));
	ret = ft_lstmap(l, &ft_test, &ft_test2);
	return (0);
}
