/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:16:47 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:10:42 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memmove_copy(unsigned char *d, const unsigned char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (len == 0 || dst == src || (!dst && !src))
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s < d && s + len > d)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		memmove_copy(d, s, len);
	return (dst);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	std_buf[20] = "123456789";
	char	my_buf[20] = "123456789";

	memmove(std_buf + 2, std_buf, 5);
	ft_memmove(my_buf + 2, my_buf, 5);
	printf("Original : \"123456789\"\n");
	printf("memmove  : \"%s\"\n", std_buf);
	printf("ft_memmove: \"%s\"\n", my_buf);
	return (0);
}
