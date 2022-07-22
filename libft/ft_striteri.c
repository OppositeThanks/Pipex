/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:03:30 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/28 15:11:04 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	pos;

	if (!s)
		return ;
	pos = 0;
	while (s[pos])
	{
		(*f)(pos, &s[pos]);
		pos++;
	}
}
