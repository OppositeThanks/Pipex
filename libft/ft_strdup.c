/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:22:40 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/22 10:23:32 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*orcpy;
	size_t	size;

	size = ft_strlen(s1);
	orcpy = malloc(size + 1);
	if (!(orcpy))
		return (NULL);
	ft_memcpy(orcpy, s1, size);
	orcpy[size] = '\0';
	return (orcpy);
}
