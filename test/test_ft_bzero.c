/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:54:52 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:17:40 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	std_buf[10];
	char	ft_buf[10];
	size_t	i;

	i = 0;
	while (i < 10)
	{
		std_buf[i] = 'A';
		ft_buf[i] = 'A';
		i++;
	}
	bzero(std_buf, 5);
	ft_bzero(ft_buf, 5);
	printf("bzero    : ");
	i = 0;
	while (i < 10)
	{
		if (std_buf[i] == 0)
			printf("\\0");
		else
			printf("%c", std_buf[i]);
		i++;
	}
	printf("\n");
	printf("ft_bzero : ");
	i = 0;
	while (i < 10)
	{
		if (ft_buf[i] == 0)
			printf("\\0");
		else
			printf("%c", ft_buf[i]);
		i++;
	}
	printf("\n");
	return (0);
}
