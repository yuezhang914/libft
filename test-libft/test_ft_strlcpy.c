/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:02:16 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:38:03 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
#include <stdio.h>   
#include <string.h>  


int	main(void)
{
	const char *src = "Hello, world!";
	char std_buf[20];
	char ft_buf[20];
	size_t size = 10;
	size_t i;

	i = 0;
	while (i < 20)
	{
		std_buf[i] = 'x';
		ft_buf[i] = 'x';
		i++;
	}

	size_t std_ret = strlcpy(std_buf, src, size);
	size_t ft_ret = ft_strlcpy(ft_buf, src, size);

	printf("src       : \"%s\"\n", src);
	printf("strlcpy   : \"%s\" (return: %zu)\n", std_buf, std_ret);
	printf("ft_strlcpy: \"%s\" (return: %zu)\n", ft_buf, ft_ret);

	return (0);
}
