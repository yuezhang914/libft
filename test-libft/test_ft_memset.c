/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:38:08 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:13:45 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buffer_std[20];
	char	buffer_ft[20];
	size_t	len;
	int		c;
	size_t	i;

	len = 10;
	c = 'A';
	i = 0;
	while (i < 20)
	{
		buffer_std[i] = 'x';
		buffer_ft[i] = 'x';
		i++;
	}
	memset(buffer_std, c, len);
	ft_memset(buffer_ft, c, len);
	printf("memset    : \"%s\"\n", buffer_std);
	printf("ft_memset : \"%s\"\n", buffer_ft);
	return (0);
}
