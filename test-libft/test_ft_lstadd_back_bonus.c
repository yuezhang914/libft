/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:45:39 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 18:38:15 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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
	t_list	*tmp;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew("One"));
	ft_lstadd_back(&head, ft_lstnew("Two"));
	ft_lstadd_back(&head, ft_lstnew("Three"));
	printf("List after ft_lstadd_back:\n");
	print_list(head);
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
