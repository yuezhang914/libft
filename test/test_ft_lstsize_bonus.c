/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:47:29 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 18:07:19 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*head;
	int		size;
	t_list	*tmp;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("Three"));
	ft_lstadd_front(&head, ft_lstnew("Two"));
	ft_lstadd_front(&head, ft_lstnew("One"));
	size = ft_lstsize(head);
	printf("List size: %d\n", size);
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
