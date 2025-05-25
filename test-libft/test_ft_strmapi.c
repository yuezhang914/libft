/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 01:57:27 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:34:21 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <stdio.h>
#include <stdlib.h>

char	test_map(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	if (i % 2 == 1 && c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	const char	*s = "LiBfT tEsT";
	char		*mapped;

	mapped = ft_strmapi(s, test_map);
	if (mapped)
	{
		printf("Original: \"%s\"\n", s);
		printf("Mapped  : \"%s\"\n", mapped);
		free(mapped);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
