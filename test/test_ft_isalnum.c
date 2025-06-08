/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:34:46 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/19 13:52:47 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
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
		printf("%d\n", ft_isalnum(av[1][0]));
		printf("%d\n", isalnum(av[1][0]));
	}
	return (0);
}