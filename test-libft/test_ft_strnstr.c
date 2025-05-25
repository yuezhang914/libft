/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:11:42 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:56:31 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] && needle[j] && haystack[i
			+ j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*haystack = "Hello, sweet world!";
	const char	*needle = "sweet";
	size_t		len;
	char		*std_res;
	char		*ft_res;

	len = 20;
	std_res = strnstr(haystack, needle, len);
	ft_res = ft_strnstr(haystack, needle, len);
	printf("Haystack  : \"%s\"\n", haystack);
	printf("Needle    : \"%s\"\n", needle);
	printf("Search len: %zu\n", len);
	if (std_res)
		printf("strnstr   : Found at \"%s\"\n", std_res);
	else
		printf("strnstr   : Not found\n");
	if (ft_res)
		printf("ft_strnstr: Found at \"%s\"\n", ft_res);
	else
		printf("ft_strnstr: Not found\n");
	return (0);
}
