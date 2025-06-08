/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 02:11:25 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/25 17:38:06 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
#include <stdio.h>
#include <string.h>

void	modify_char(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (i % 2 == 1 && *c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main(void)
{
	char	str[] = "HeLlO WoRLd";

	printf("Before : \"%s\"\n", str);
	ft_striteri(str, modify_char);
	printf("After  : \"%s\"\n", str);
	return (0);
}
