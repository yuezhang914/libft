/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:49:31 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:20:05 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	str = malloc(j - i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, j - i + 2);
	return (str);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*original = " \t\n  Hello Libft \n\t ";
	const char	*set = " \n\t";
	char		*trimmed;

	trimmed = ft_strtrim(original, set);
	if (trimmed)
	{
		printf("Original : \"%s\"\n", original);
		printf("Set      : \"%s\"\n", set);
		printf("Trimmed  : \"%s\"\n", trimmed);
		free(trimmed);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
