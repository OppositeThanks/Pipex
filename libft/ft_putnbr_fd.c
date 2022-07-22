/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:36:40 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/26 16:39:04 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_write(int c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_write('-', fd);
		write(fd, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			ft_write('-', fd);
			nb *= -1;
		}
		if (nb >= 10)
			ft_putnbr_fd(nb / 10, fd);
		ft_write((nb % 10) + '0', fd);
	}
}
