/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:11:30 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:34:57 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*tests[] = {"", "abc", "hello world", "1234567890",
			"ends with null\0hidden", "😊 unicode", "longlonglonglongstring"};
	size_t		i;
	size_t		std_len;
	size_t		my_len;

	i = 0;
	while (i < 7)
	{
		std_len = strlen(tests[i]);
		my_len = ft_strlen(tests[i]);
		printf("Test %zu: \"%s\"\n", i + 1, tests[i]);
		printf("  strlen    = %zu\n", std_len);
		printf("  ft_strlen = %zu\n", my_len);
		printf("--------------------------\n");
		i++;
	}
	return (0);
}
