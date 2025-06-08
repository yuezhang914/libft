/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:11:38 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:52:05 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!s1[i] || !s2[i] || (unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*a = "Hello";
	const char	*b = "Hellp";
	size_t		n;
	int			std_ret;
	int			ft_ret;

	n = 5;
	std_ret = strncmp(a, b, n);
	ft_ret = ft_strncmp(a, b, n);
	printf("Compare \"%s\" vs \"%s\", n = %zu\n", a, b, n);
	printf("strncmp    = %d\n", std_ret);
	printf("ft_strncmp = %d\n", ft_ret);
	return (0);
}
