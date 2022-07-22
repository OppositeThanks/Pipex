/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:50:56 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 16:00:43 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	c1;
	size_t	c2;

	c1 = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	c2 = size - 1;
	while (c2 > 0 && src[c1] != '\0')
	{
		dst[c1] = src[c1];
		c1++;
		c2--;
	}
	dst[c1] = '\0';
	return (len);
}
