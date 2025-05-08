/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:49:31 by yzhang2           #+#    #+#             */
/*   Updated: 2025/04/29 01:21:24 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (ft_strchr(set, s1[i]))
	{
		i++;
	}
	if (i == ft_strlen(s1))
		return (ft_strdup(s1));
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]))
		j--;
	str = malloc(j - i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, j - i + 2);
	return (str);
}
