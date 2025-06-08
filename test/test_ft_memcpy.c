/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:03:58 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:05:23 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*s;

	i = 0;
	if ((!dst && !src) || n == 0)
		return (dst);
	str = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello, world!";
	char	dst1[20];
	char	dst2[20];
	size_t	n;
	size_t	i;

	n = 13;
	i = 0;
	while (i < 20)
	{
		dst1[i] = 0;
		dst2[i] = 0;
		i++;
	}
	memcpy(dst1, src, n);
	ft_memcpy(dst2, src, n);
	printf("Source   : \"%s\"\n", src);
	printf("memcpy   : \"%s\"\n", dst1);
	printf("ft_memcpy: \"%s\"\n", dst2);
	return (0);
}
