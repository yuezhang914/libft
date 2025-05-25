/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:07:32 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:01:38 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count == 0 || size == 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		ft_bzero(str, 1);
		return (str);
	}
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	size_t			count;
	size_t			size;
	unsigned char	*std_mem;
	unsigned char	*ft_mem;
	size_t			i;

	count = 5;
	size = 4;
	std_mem = calloc(count, size);
	ft_mem = ft_calloc(count, size);
	if (!std_mem || !ft_mem)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("calloc: ");
	i = 0;
	while (i < count * size)
	{
		printf("%d ", std_mem[i]);
		i++;
	}
	printf("\n");
	printf("ft_calloc: ");
	i = 0;
	while (i < count * size)
	{
		printf("%d ", ft_mem[i]);
		i++;
	}
	printf("\n");
	free(std_mem);
	free(ft_mem);
	return (0);
}
