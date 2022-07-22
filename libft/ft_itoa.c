/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:34:27 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/26 11:05:05 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	neg_to_pos(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		++len;
	while (nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;

	len = get_len(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
		str[0] = '-';
	else if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		--len;
		str[len] = neg_to_pos(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

/* int	main(void)
{
	int	a;

	a = 698465;
	printf("%s\n", ft_itoa(a));
	return (0);
} */