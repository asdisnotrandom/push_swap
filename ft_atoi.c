/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:36:03 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/25 13:08:07 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sgn;
	int	rst;

	i = 0;
	sgn = 1;
	rst = 0;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sgn = -sgn;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rst = (rst * 10) + (nptr[i] - '0');
		i++;
	}
	return (rst * sgn);
}
