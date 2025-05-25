/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:46:25 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 19:08:42 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	del_func(void *content)
{
	printf("Freeing content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	char	*s;
	t_list	*node;

	s = strdup("Node content");
	node = ft_lstnew(s);
	if (node)
	{
		printf("Before delete: %s\n", (char *)node->content);
		ft_lstdelone(node, del_func);
	}
	else
	{
		printf("Failed to create node.\n");
	}
	return (0);
}
