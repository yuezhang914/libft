/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 22:56:55 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:11:32 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	s_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	sub = malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*s = "Hello, sweet world!";
	char		*sub;

	sub = ft_substr(s, 7, 5);
	printf("Original : \"%s\"\n", s);
	printf("ft_substr: start=7, len=5 → \"%s\"\n", sub);
	free(sub);
	sub = ft_substr(s, 50, 10);
	printf("ft_substr: start=50, len=10 → \"%s\"\n", sub);
	free(sub);
	sub = ft_substr(s, 10, 100);
	printf("ft_substr: start=10, len=100 → \"%s\"\n", sub);
	free(sub);
	return (0);
}
