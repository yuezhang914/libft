/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 02:44:42 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:44:55 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (s)
	{
		len = ft_strlen(s);
		write(fd, s, len);
	}
}
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*msg;

	msg = "Hello from ft_putstr_fd!";
	printf("Using printf     : %s\n", msg);
	printf("Using ft_putstr_fd to stdout:\n");
	ft_putstr_fd(msg, 1);
	ft_putchar_fd('\n', 1);
	printf("Using ft_putstr_fd to stderr:\n");
	ft_putstr_fd("This is an error message!", 2);
	ft_putchar_fd('\n', 2);
	printf("Testing NULL input (should not print anything):\n");
	ft_putstr_fd(NULL, 1);
	return (0);
}
