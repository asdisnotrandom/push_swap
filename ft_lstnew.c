/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:38:42 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/06 13:38:45 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*d;

	d = (t_stack *)malloc(sizeof(t_stack));
	if (d == 0)
		return (0);
	d->value = value;
	d->next = 0;
	return (d);
}
