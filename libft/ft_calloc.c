/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:07:32 by yzhang2           #+#    #+#             */
/*   Updated: 2025/04/28 18:27:51 by yzhang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count == 0 || size == 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
	}
	else
	{
		str = malloc(count * size);
		if (!str)
			return (NULL);
		ft_bzero(str, count * size);
	}
	return ((void *)str);
}
