/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:09:16 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/23 21:33:48 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list	**head = malloc(sizeof(t_list**));
	*head = ft_lstnew("lol");
	ft_lstadd_front(head, NULL);

	printf("%s", (char *)(*head)->content);
}
