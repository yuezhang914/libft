/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:47:16 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 18:02:05 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list) * 1);
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*msg;
	t_list	*node;

	msg = "Hello, Libft!";
	node = ft_lstnew(msg);
	if (node)
	{
		printf("Node content : %s\n", (char *)node->content);
		printf("Node next    : %p\n", node->next);
		free(node);
	}
	else
	{
		printf("Node allocation failed.\n");
	}
	return (0);
}
