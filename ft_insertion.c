/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 22:42:59 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 20:03:22 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*dest_node(t_stack *b, int	a_val)
{
	t_stack	*max_node;
	t_stack	*dest_node;
	long	max_val;
	long	dest_val;
	
	dest_node = NULL;
	max_val = -9223372036854775807;
	dest_val = -9223372036854775807;
	while (b)
	{
		if (b->value > max_val)
		{
			max_val = b->value;
			max_node = b;
		}
		if (b->value < a_val && dest_val < b->value)
		{
			dest_val = b->value;
			dest_node = b;
		}
		b = b->next;
	}
	if (dest_node == NULL)
		return (max_node);
	return (dest_node);
}
static int	find_node(t_stack *stack_b, int a_val)
{
	t_stack	*dst_node;
	int	count;

	dst_node = dest_node(stack_b, a_val);
	count = 0;
	while (stack_b->value != dst_node->value)
	{
		stack_b = stack_b->next;
		count++;
	}
	return (count);
}
static void	set_cost_s(t_stack **stack_a, t_stack **stack_b, int pb_c, int a_cnt)
{
	int	skip;
	t_stack *tmp;

	tmp = *stack_a;
	skip = 0;
	while (tmp)
	{
	tmp->cost_b = find_node(*stack_b, tmp->value);
	if ((pb_c + 1) / 2 < tmp->cost_b)
		tmp->cost_b = (pb_c - tmp->cost_b) * -1;
	tmp->cost_a = skip;
	if ((a_cnt + 1) / 2 < skip)
		tmp->cost_a = skip - a_cnt;
	skip++;
	tmp = tmp->next;
	}
}
static void	set_cost(t_stack **stack_a)
{
	t_stack *tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if ((tmp->cost_a > 0 && tmp->cost_b > 0) || (tmp->cost_a < 0 && tmp->cost_b < 0))
		{
			if (abs(tmp->cost_a) >= ft_abs(tmp->cost_b))
				tmp->cost = ft_abs(tmp->cost_a);
			else
				tmp->cost = ft_abs(tmp->cost_b);
		}
		else
			tmp->cost = ft_abs(tmp->cost_a - tmp->cost_b);
		tmp = tmp->next;
	}
}
void	ft_insertion(t_stack **stack_a, t_stack **stack_b, t_count **stack_cnt)
{
	pb(stack_a, stack_b, *stack_cnt);
	while (*stack_a)
	{
		set_cost_s(stack_a, stack_b, (*stack_cnt)->pb_cnt , (*stack_cnt)->a_cnt);
		set_cost(stack_a);
		operation_all(stack_a, stack_b, stack_cnt);
		pb(stack_a, stack_b, *stack_cnt);
	}
	while (*stack_b)
		pa(stack_a, stack_b, *stack_cnt);
}

