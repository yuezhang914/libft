/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:46:10 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 19:55:53 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (!lst || !del || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next_node = current->next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	del_func(void *content)
{
	printf("Freeing: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*head;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("One")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Two")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Three")));
	printf("Clearing list:\n");
	ft_lstclear(&head, del_func);
	if (!head)
		printf("List is now cleared (head == NULL)\n");
	return (0);
}
