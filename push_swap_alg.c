/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:45:01 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 03:39:37 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	abs(int check)
{
	if (check < 0)
		return (-check);
	return (check);
}
int	rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*bfrlast;
	int		succes;

	succes = 0;
	if (*stack_a != NULL && (*stack_a) -> next != NULL)
	{
	last = ft_lstlast(*stack_a);
	bfrlast = ft_beforelast(*stack_a);
	bfrlast -> next = NULL;
	ft_lstadd_front(stack_a, last);
	succes = 1;
	}
	if (*stack_b != NULL && (*stack_b) -> next != NULL)
	{
	last = ft_lstlast(*stack_b);
	bfrlast = ft_beforelast(*stack_b);
	bfrlast -> next = NULL;
	ft_lstadd_front(stack_b, last);
	succes = 1;
	}
	if (succes)
		write (1, "rrr\n", 4);
	return (succes);
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
void is_listed(t_stack *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return ;
		stack_a = stack_a->next;
	}
	exit(0);
}