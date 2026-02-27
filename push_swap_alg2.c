/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 05:58:27 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/27 06:54:36 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	operation_p(t_stack **stack_a, t_stack **stack_b, t_stack *cheap)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	if (cheap->cost_a > cheap->cost_b)
	{
		while (i++ < cheap->cost_b)
			cnt += rr(stack_a, stack_b);
		while (i++ <= cheap->cost_a)
			cnt += ra(stack_a);
	}
	else
	{
		while (i++ < cheap->cost_a)
			cnt += rr(stack_a, stack_b);
		while (i++ <= cheap->cost_b)
			cnt += rb(stack_b);
	}
	return (cnt);
}
int	operation_n(t_stack **stack_a, t_stack **stack_b, t_stack *cheap)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	if (abs(cheap->cost_a) > abs(cheap->cost_b))
	{
		while (i++ < abs(cheap->cost_b))
			cnt += rrr(stack_a, stack_b);
		while (i++ <= abs(cheap->cost_a))
			cnt += rra(stack_a);
	}
	else
	{
		while (i++ < abs(cheap->cost_a))
			cnt += rrr(stack_a, stack_b);
		while (i++ <= abs(cheap->cost_b))
			cnt += rrb(stack_b);
	}
	return (cnt);
}
int	operation_m(t_stack **stack_a, t_stack **stack_b, t_stack *cheap)
{
	int	cnt;

	cnt = 0;
	if (cheap->cost_a > 0)
	{
		while (cheap->cost_a--)
			cnt += ra(stack_a);
	}
	else
		{
			while (abs(cheap->cost_a++))
				cnt += rra(stack_a);
		}
	if (cheap->cost_b > 0)
	{
		while (cheap->cost_b--)
			cnt += rb(stack_b);
	}
	else
		{
			while (abs(cheap->cost_b++))
				cnt += rrb(stack_b);
		}
	return (cnt);
}

int	operation_all(t_stack **stack_a, t_stack **stack_b)
{
	int	cnt;
	t_stack *cheap;

	cheap = pick_cheap(*stack_a);
	cnt = 0;
	if (cheap->cost_a > 0 && cheap->cost_b > 0)
		cnt += operation_p(stack_a, stack_b, cheap);
	else if (cheap->cost_a < 0 && cheap->cost_b < 0)
		cnt += operation_n(stack_a, stack_b, cheap);
	else
		cnt += operation_m(stack_a, stack_b, cheap);
	return (cnt);
}
