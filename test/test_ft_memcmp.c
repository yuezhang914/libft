/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:24:17 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:02:19 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*a = "abcdef";
	const char	*b = "abcxef";
	size_t		n;
	int			std_result;
	int			my_result;

	n = 5;
	std_result = memcmp(a, b, n);
	my_result = ft_memcmp(a, b, n);
	printf("Comparing \"%s\" vs \"%s\" (first %zu bytes)\n", a, b, n);
	printf("  memcmp    = %d\n", std_result);
	printf("  ft_memcmp = %d\n", my_result);
	return (0);
}
