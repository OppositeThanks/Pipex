/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:51:03 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 12:41:25 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ddest;
	size_t	dsrc;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	ddest = j;
	dsrc = ft_strlen(src);
	if (size == 0 || size <= ddest)
		return (dsrc + size);
	while (src[i] != '\0' && i < size - ddest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ddest + dsrc);
}
