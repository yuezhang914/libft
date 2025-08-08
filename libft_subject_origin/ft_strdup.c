/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:32:25 by yzhang2           #+#    #+#             */
/*   Updated: 2025/05/24 16:30:02 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	length;

	length = ft_strlen(s1) + 1;
	str = malloc(sizeof(char) * length);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, length);
	return (str);
}
