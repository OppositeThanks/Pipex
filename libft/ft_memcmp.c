/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:52:56 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 15:43:57 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ps1;
	char	*ps2;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	i = 0;
	while (i < n && ((ps1[i] != '\0') || (ps2[i] != '\0')))
	{
		if (ps1[i] > ps2[i])
			return (1);
		else if (ps1[i] < ps2[i])
			return (-1);
		i++;
	}
	return (0);
} */
