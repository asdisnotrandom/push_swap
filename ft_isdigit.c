/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:37:18 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/25 13:26:33 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_isdigit(const char *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
