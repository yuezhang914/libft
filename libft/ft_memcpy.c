/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:03:58 by yzhang2           #+#    #+#             */
/*   Updated: 2025/04/28 14:15:49 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*s;

	i = 0;
	str = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		str[i] = s[i];
	}
	return (dst);
}
