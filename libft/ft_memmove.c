/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:50:10 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/25 15:33:29 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*x;
	const unsigned char	*y;

	x = ((unsigned char *)dst);
	y = ((const unsigned char *)src);
	if (x == y)
		return (dst);
	else if (x > y)
	{
		y = y + len - 1;
		x = x + len - 1;
		while (len > 0)
		{
			*x = *y;
			x--;
			y--;
			len--;
		}
	}
	else
		dst = ft_memcpy(x, y, len);
	return (dst);
}

/* int main(void)
{
	char	target[21];
    char    *p;
    char    *src;

    target[21] = "a shiny white sphere";
    p = target + 14;
    printf("Pointer p is :%s\n", p);
    src = target + 5;
    printf("Pointer source is :%s\n", src);
    printf("Before memmove target is :%s\n", target);
    ft_memmove(p, src, 9);
    printf("After memmove target becomes :%s\n", target);
}
 */