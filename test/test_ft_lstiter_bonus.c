/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:46:38 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 19:59:38 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	to_uppercase(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

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
	ft_lstadd_back(&head, ft_lstnew(strdup("hello")));
	ft_lstadd_back(&head, ft_lstnew(strdup("libft")));
	ft_lstadd_back(&head, ft_lstnew(strdup("rocks")));
	printf("Before iteration:\n");
	print_list(head);
	ft_lstiter(head, to_uppercase);
	printf("\nAfter ft_lstiter (to_uppercase):\n");
	print_list(head);
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->content);
		free(tmp);
	}
	return (0);
}
