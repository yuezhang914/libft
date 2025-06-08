/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:31:33 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:17:25 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len1 + 1);
	ft_strlcat(str, s2, len1 + len2 + 1);
	return (str);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*s1 = "Lib";
	const char	*s2 = "ft";
	char		*joined;

	joined = ft_strjoin(s1, s2);
	if (joined)
	{
		printf("s1      : \"%s\"\n", s1);
		printf("s2      : \"%s\"\n", s2);
		printf("ft_strjoin: \"%s\"\n", joined);
		free(joined);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
