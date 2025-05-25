/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 02:51:24 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:47:16 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (s)
	{
		len = ft_strlen(s);
		write(fd, s, len);
		write(fd, "\n", 1);
	}
}
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*line1;
	char	*line2;
	char	*line3;

	line1 = "This is line 1";
	line2 = "This is line 2 (stderr)";
	line3 = NULL;
	printf("Using printf for comparison:\n");
	printf("%s\n", line1);
	printf("Using ft_putendl_fd to stdout:\n");
	ft_putendl_fd(line1, 1);
	printf("Using ft_putendl_fd to stderr:\n");
	ft_putendl_fd(line2, 2);
	printf("Testing NULL input:\n");
	ft_putendl_fd(line3, 1);
	return (0);
}
