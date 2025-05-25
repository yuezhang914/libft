/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:11:33 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 16:44:11 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
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
	std_res = strchr(str, ch);
	ft_res = ft_strchr(str, ch);
	printf("String   : \"%s\"\n", str);
	printf("Search   : '%c'\n", ch);
	if (std_res)
		printf("strchr   : Found at \"%s\"\n", std_res);
	else
		printf("strchr   : Not found\n");
	if (ft_res)
		printf("ft_strchr: Found at \"%s\"\n", ft_res);
	else
		printf("ft_strchr: Not found\n");
	return (0);
}
