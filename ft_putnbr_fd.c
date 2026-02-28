/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:39:55 by ademirel          #+#    #+#             */
/*   Updated: 2026/03/01 00:09:32 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	z;
	long	x;

	x = n;
	if (fd < 0)
		return ;
	if (x < 0)
	{
		x = -x;
		write(fd, "-", 1);
	}
	if (x >= 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	else if (x < 10)
	{
		z = (x % 10) + '0';
		write(fd, &z, 1);
	}
}
