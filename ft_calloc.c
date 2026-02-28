/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:36:34 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 18:06:01 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (n)
	{
		a[i] = 0;
		i++;
		n--;
	}
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ts;
	void	*a;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (0);
	ts = nmemb * size;
	a = malloc(ts);
	if (a == 0)
		return (0);
	ft_bzero(a, ts);
	return (a);
}
