/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:32:25 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:05:25 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	length;

	length = ft_strlen(s1) + 1;
	str = malloc(sizeof(char) * length);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, length);
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	const char	*original = "Libft is lovely";
	char		*std_copy;
	char		*ft_copy;

	std_copy = strdup(original);
	ft_copy = ft_strdup(original);
	printf("Original   : \"%s\"\n", original);
	printf("strdup     : \"%s\"\n", std_copy);
	printf("ft_strdup  : \"%s\"\n", ft_copy);
	if (std_copy == original)
		printf("X strdup returned original pointer!\n");
	if (ft_copy == original)
		printf("X ft_strdup returned original pointer!\n");
	free(std_copy);
	free(ft_copy);
	return (0);
}
