/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:11:45 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:46:28 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str = "Hello, world!";
	int			ch;
	char		*std_res;
	char		*ft_res;

	ch = 'o';
	std_res = strrchr(str, ch);
	ft_res = ft_strrchr(str, ch);
	printf("String   : \"%s\"\n", str);
	printf("Search   : '%c'\n", ch);
	if (std_res)
		printf("strrchr   : Found at \"%s\"\n", std_res);
	else
		printf("strrchr   : Not found\n");
	if (ft_res)
		printf("ft_strrchr: Found at \"%s\"\n", ft_res);
	else
		printf("ft_strrchr: Not found\n");
	return (0);
}
