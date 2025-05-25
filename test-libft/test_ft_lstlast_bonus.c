/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:46:51 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 18:09:58 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*head;
	t_list	*last;
	t_list	*tmp;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew("One"));
	ft_lstadd_back(&head, ft_lstnew("Two"));
	ft_lstadd_back(&head, ft_lstnew("Three"));
	last = ft_lstlast(head);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("List is empty.\n");
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
