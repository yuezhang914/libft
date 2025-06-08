/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:45:51 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 18:04:55 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
#include <stdio.h>
#include <stdlib.h>

void	print_list(t_list *head)
{
	int	i;

	i = 0;
	while (head)
	{
		printf("Node %d: %s\n", i, (char *)head->content);
		head = head->next;
		i++;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = NULL;
	node1 = ft_lstnew("World");
	node2 = ft_lstnew("Hello");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	print_list(head);
	free(node1);
	free(node2);
	return (0);
}
