/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:47:29 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 15:51:20 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}


#include <stdio.h> 
#include <string.h> 
#include <unistd.h> 

int	main(void)
{
	const char	*str = "abcdefg123abcXYZ";
	int			c;
	size_t		n;
	void		*std_result;
	void		*my_result;

	c = 'a';
	n = 15;
	std_result = memchr(str, c, n);
	my_result = ft_memchr(str, c, n);
	printf("Searching for '%c' in \"%s\" (first %zu bytes)\n", c, str, n);
	if (std_result)
		printf("  memchr    => '%c' at index %ld\n", *(char *)std_result,
			(char *)std_result - str);
	else
		printf("  memchr    => NULL\n");
	if (my_result)
		printf("  ft_memchr => '%c' at index %ld\n", *(char *)my_result,
			(char *)my_result - str);
	else
		printf("  ft_memchr => NULL\n");
	return (0);
}
