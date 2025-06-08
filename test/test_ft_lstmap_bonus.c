/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:47:03 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 20:10:39 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*str_to_upper_copy(void *content)
{
	char	*s;
	char	*copy;
	int		i;

	s = (char *)content;
	copy = strdup(s);
	i = 0;
	while (copy[i])
	{
		if (copy[i] >= 'a' && copy[i] <= 'z')
			copy[i] -= 32;
		i++;
	}
	return (copy);
}

void	del_func(void *content)
{
	free(content);
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
	t_list	*original;
	t_list	*mapped;

	original = NULL;
	ft_lstadd_back(&original, ft_lstnew(strdup("hello")));
	ft_lstadd_back(&original, ft_lstnew(strdup("libft")));
	ft_lstadd_back(&original, ft_lstnew(strdup("test")));
	printf("Original list:\n");
	print_list(original);
	mapped = ft_lstmap(original, str_to_upper_copy, del_func);
	printf("\nMapped list (to uppercase):\n");
	print_list(mapped);
	ft_lstclear(&original, del_func);
	ft_lstclear(&mapped, del_func);
	return (0);
}
