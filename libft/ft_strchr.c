/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:51:57 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 12:07:50 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	while (*str)
	{
		if (*str == (char)to_find)
			return ((char *)str);
		str++;
	}
	if ((char)to_find == '\0')
		return ((char *)str);
	return (NULL);
}
