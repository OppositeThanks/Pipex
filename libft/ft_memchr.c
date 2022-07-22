/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:52:45 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 15:40:01 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);
}

/* void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		counter;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	counter = 0;
	if (c == '\0')
		return ((void *)s);
	while (tmp[i] != '\0' && i <= n)
	{
		if (tmp[i] == c)
		{
			tmp = tmp + counter;
			return ((void *)tmp);
		}
		i++;
		counter++;
	}
	return (0);
}
 */