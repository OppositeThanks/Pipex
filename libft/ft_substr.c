/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:50:33 by lperrin           #+#    #+#             */
/*   Updated: 2022/05/11 17:52:49 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_checkmalloc(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		*substr = '\0';
		return (substr);
	}
	substr = (char *)malloc(ft_checkmalloc(ft_strlen(s), len) + 1);
	if (substr == 0)
		return (0);
	i = start;
	j = 0;
	while (s[i] && i < start + len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

/* static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		rtn = malloc(sizeof(char));
		*rtn = '\0';
		return (rtn);
	}
	rtn = (char *)malloc(sizeof(char) * ft_min(ft_strlen(s), len) + 1);
	if (!rtn)
		return (0);
	while (i < ft_min(ft_strlen(s), len))
	{
		rtn[i] = s[start + i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
} */