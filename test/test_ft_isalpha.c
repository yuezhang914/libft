/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:31:58 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/19 13:55:02 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

#include<stdio.h>
#include<ctype.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_isalpha(av[1][0]));
		printf("%d\n", isalpha(av[1][0]));
	}
	return (0);
}