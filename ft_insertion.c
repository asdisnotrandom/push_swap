/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 22:42:59 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/26 22:55:33 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insertion(t_stack **stack_a, t_stack **stack_b)
{
	int	pb_c;

	pb_c = 0;
	pb(stack_a, stack_b);
	if ((*stack_a)->value < (*stack_b)->value)
	{
		pb(stack_a, stack_b);
		sb(stack_b);
	}
	else
		pb(stack_a, stack_b);
	while (*stack_a)
	{
		
	}
	while (*stack_b)
	{
		pa(stack_a, stack_b);
	}
}
