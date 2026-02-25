/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:40:31 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/25 12:25:25 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	size_t	sz;
	char	*a;
	size_t	i;

	sz = ft_strlen(s) + 1;
	a = malloc(sz);
	i = 0;
	if (a == 0)
		return (0);
	while (s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}
	if (s[i] == '\0')
		a[i] = s[i];
	return (a);
}
