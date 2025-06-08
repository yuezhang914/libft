/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:20:52 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:42:10 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	s = ft_strlen(src);
	if (dstsize == 0)
		return (s);
	d = ft_strlen(dst);
	if (dstsize <= d)
		return (s + dstsize);
	while (d + i < dstsize - 1 && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (s + d);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		std_buf[30] = "Hello, ";
	char		ft_buf[30] = "Hello, ";
	const char	*src = "world!";
	size_t		size;
	size_t		i;

	size = 15;
	size_t std_ret, ft_ret;
	i = 0;
	while (i < 30)
	{
		if (i >= 7)
		{
			std_buf[i] = 'x';
			ft_buf[i] = 'x';
		}
		i++;
	}
	std_ret = strlcat(std_buf, src, size);
	ft_ret = ft_strlcat(ft_buf, src, size);
	printf("src       : \"%s\"\n", src);
	printf("strlcat   : \"%s\" (return: %zu)\n", std_buf, std_ret);
	printf("ft_strlcat: \"%s\" (return: %zu)\n", ft_buf, ft_ret);
	return (0);
}
