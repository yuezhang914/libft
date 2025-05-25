/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:26:52 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:25:19 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_array(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count += 1;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_add_word(char **array, size_t j, const char *s, char c)
{
	array[j] = ft_substr(s, 0, ft_len(s, c));
	if (!array[j])
		return (0);
	return (1);
}

static void	ft_free_array(char **array, size_t j)
{
	while (j > 0)
	{
		j--;
		free(array[j]);
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = ft_count_array(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	while (s[i] && j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			if (!ft_add_word(array, j, s + i, c))
				return (ft_free_array(array, j), NULL);
			i += ft_len(&s[i], c);
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*s = "  this  is  Libft ";
	char		sep;
	char		**res;
	size_t		i;

	sep = ' ';
	res = ft_split(s, sep);
	i = 0;
	printf("Split result:\n");
	while (res && res[i])
	{
		printf("[%zu]: \"%s\"\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
