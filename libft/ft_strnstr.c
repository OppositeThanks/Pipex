/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:53:13 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 15:55:32 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (*to_find == 0 || str == to_find)
		return ((char *)str);
	i = ft_strlen(to_find);
	while (*str && i <= len--)
	{
		if (!(ft_strncmp((char *)str, (char *)to_find, i)))
			return ((char *)str);
		str++;
	}
	return (0);
}

/* char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == 0 || str == to_find)
		return ((char *)str);
	while (str[i] != '\0' && i <= len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
 */