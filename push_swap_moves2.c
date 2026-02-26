/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:21:16 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/26 23:08:20 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ra(t_stack **stack_a)
{
    t_stack *tmp;
    int     cnt;

	cnt = 0;
    if (*stack_a != NULL && (*stack_a) -> next != NULL)
    {
    tmp = *stack_a;
    tmp = tmp -> next;
    ft_lstadd_back(stack_a, *stack_a);
    *stack_a = tmp;
    write (1, "ra\n", 3);
    cnt = 1;
    }
    return (cnt);
}
int	rb(t_stack **stack_b)
{
    t_stack	*tmp;
	int		cnt;

	cnt = 0;
	if (*stack_b != NULL && (*stack_b) -> next != NULL)
	{
    tmp = *stack_b;
    tmp = tmp -> next;
    ft_lstadd_back(stack_b, *stack_b);
    *stack_b = tmp;
    write (1, "rb\n", 3);
	cnt = 1;
	}
	return (cnt);
}
int	rr(t_stack **stack_a, t_stack **stack_b)
{
    t_stack	*tmp;
    int		succes;

    succes = 0;
    if (*stack_a != NULL && (*stack_a) -> next != NULL)
    {
    tmp = *stack_a;
    tmp = tmp -> next;
    ft_lstadd_back(stack_a, *stack_a);
    *stack_a = tmp;
	succes = 1;
    }
	if (*stack_b != NULL && (*stack_b) -> next != NULL)
	{
    tmp = *stack_b;
    tmp = tmp -> next;
    ft_lstadd_back(stack_b, *stack_b);
    *stack_b = tmp;
	succes = 1;
	}
	if (succes)
		write (1, "rr\n", 3);
	return (succes);
}
int    rra(t_stack **stack_a)
{
    t_stack	*last;
	t_stack	*bfrlast;
	int		cnt;

	cnt = 0;
	if (*stack_a != NULL && (*stack_a) -> next != NULL)
	{
	last = ft_lstlast(*stack_a);
	bfrlast = ft_beforelast(*stack_a);
	bfrlast -> next = NULL;
	ft_lstadd_front(stack_a, last);
	write (1, "rra\n", 4);
	cnt = 1;
	}
	return (cnt);
}
int    rrb(t_stack **stack_b)
{
    t_stack	*last;
	t_stack	*bfrlast;
	int		cnt;

	cnt = 0;
	if (*stack_b != NULL && (*stack_b) -> next != NULL)
	{
	last = ft_lstlast(*stack_b);
	bfrlast = ft_beforelast(*stack_b);
	bfrlast -> next = NULL;
	ft_lstadd_front(stack_b, last);
	write (1, "rrb\n", 4);
	cnt = 1;
	}
	return (cnt);
}
