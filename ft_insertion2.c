/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 05:58:27 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 20:04:25 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_p(t_stack **stack_a, t_stack **stack_b, t_stack *cheap, t_count **cnt)
{
	int	i;

	i = 0;
	if (cheap->cost_a > cheap->cost_b)
	{
		while (i++ < cheap->cost_b)
			rr(stack_a, stack_b, *cnt);
		while (i++ <= cheap->cost_a)
			ra(stack_a, *cnt);
	}
	else
	{
		while (i++ < cheap->cost_a)
			rr(stack_a, stack_b, *cnt);
		while (i++ <= cheap->cost_b)
			rb(stack_b, *cnt);
	}
}
void	operation_n(t_stack **stack_a, t_stack **stack_b, t_stack *cheap, t_count **cnt)
{
	int	i;

	i = 0;
	if (ft_abs(cheap->cost_a) > ft_abs(cheap->cost_b))
	{
		while (i++ < ft_abs(cheap->cost_b))
			rrr(stack_a, stack_b, *cnt);
		while (i++ <= ft_abs(cheap->cost_a))
			rra(stack_a, *cnt);
	}
	else
	{
		while (i++ < ft_abs(cheap->cost_a))
			rrr(stack_a, stack_b, *cnt);
		while (i++ <= ft_abs(cheap->cost_b))
			rrb(stack_b, *cnt);
	}
}
void	operation_m(t_stack **stack_a, t_stack **stack_b, t_stack *cheap, t_count **cnt)
{
	if (cheap->cost_a > 0)
	{
		while (cheap->cost_a--)
			ra(stack_a, *cnt);
	}
	else
		{
			while (ft_abs(cheap->cost_a++))
				rra(stack_a, *cnt);
		}
	if (cheap->cost_b > 0)
	{
		while (cheap->cost_b--)
			rb(stack_b, *cnt);
	}
	else
		{
			while (ft_abs(cheap->cost_b++))
				rrb(stack_b, *cnt);
		}
}

void	operation_all(t_stack **stack_a, t_stack **stack_b, t_count **stack_cnt)
{
	t_stack *cheap;

	cheap = pick_cheap(*stack_a);
	if (cheap->cost_a > 0 && cheap->cost_b > 0)
		operation_p(stack_a, stack_b, cheap, stack_cnt);
	else if (cheap->cost_a < 0 && cheap->cost_b < 0)
		operation_n(stack_a, stack_b, cheap, stack_cnt);
	else
		operation_m(stack_a, stack_b, cheap, stack_cnt);
}
t_stack	*pick_cheap(t_stack *stack_a)
{
	t_stack	*cheap_node;
	int	cost;

	cost = stack_a->cost;
	cheap_node = stack_a;
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (stack_a->cost < cost)
		{
			cost = stack_a->cost;
			cheap_node = stack_a;
		}
		stack_a = stack_a->next;
	}
	return (cheap_node);
}
