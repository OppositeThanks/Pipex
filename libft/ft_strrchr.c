/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:51:49 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 12:24:44 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	size_t	i;
	char	tmp;

	i = 0;
	tmp = (char)to_find;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		if (str[i] == tmp)
		{
			return ((char *)str + i);
		}
		i--;
	}
	if (i == 0)
	{
		if (str[i] == tmp)
			return ((char *)str + i);
	}
	return (0);
}
