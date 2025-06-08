/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 02:55:04 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:56:58 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	nums[] = {0, 42, -7, 2147483647, -2147483648};
	int	i;

	i = 0;
	printf("Testing ft_putnbr_fd:\n");
	while (i < 5)
	{
		printf("Number %d: ", nums[i]);
		ft_putnbr_fd(nums[i], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
