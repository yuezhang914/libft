/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:26:19 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 15:50:56 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * num));
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int			i;
	int			real;
	int			mine;
	const char	*tests[] = {"42", "   123", "-987", "+654", "   -42abc",
			"abc123", "", "    +0", "2147483647", "-2147483648",
			"99999999999999"};

	i = 0;
	while (i < 11)
	{
		real = atoi(tests[i]);
		mine = ft_atoi(tests[i]);
		printf("Test %d: \"%s\"\n", i + 1, tests[i]);
		printf("  atoi    = %d\n", real);
		printf("  ft_atoi = %d\n", mine);
		printf("-------------------------\n");
		i++;
	}
	return (0);
}
