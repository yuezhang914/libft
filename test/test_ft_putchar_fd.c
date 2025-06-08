/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 02:34:28 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:40:46 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'A';
	printf("Standard printf: ");
	printf("%c\n", c);
	printf("Using ft_putchar_fd to write to stdout: ");
	ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);
	printf("Using ft_putchar_fd to write to stderr: ");
	ft_putchar_fd('E', 2);
	ft_putchar_fd('\n', 2);
	return (0);
}
