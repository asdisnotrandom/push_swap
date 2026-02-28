/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 04:16:10 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 19:42:36 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a, t_count *cnt)
{
	t_stack *tmp;

	tmp = *stack_a;
	if (tmp != NULL && tmp->next != NULL)
	{
	tmp = tmp->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	if (cnt->bench == 0)
		write(1, "sa\n", 3);
	cnt->sa_cnt++;
	}
}
void	sb(t_stack **stack_b, t_count *cnt)
{
	t_stack *tmp;

	tmp = *stack_b;
	if (tmp != NULL || tmp -> next != NULL)
	{
	tmp = tmp -> next;
	(*stack_b) -> next = tmp -> next;
	tmp -> next = *stack_b;
	*stack_b = tmp;
	if (cnt->bench == 0)
		write(1, "sb\n", 3);
	cnt->sb_cnt++;
	}
}
void	ss(t_stack **stack_a, t_stack **stack_b, t_count *cnt)
{
	t_stack	*tmp;
	int	succes;

	succes = 0;
	if (*stack_a != NULL && (*stack_a) -> next != NULL)
	{
		tmp = *stack_a;
		tmp = tmp -> next;
		(*stack_a) -> next = tmp -> next;
		tmp -> next = *stack_a;
		*stack_a = tmp;
		succes = 1;
	}
	if (*stack_b != NULL && (*stack_b) -> next != NULL)
	{
		tmp = *stack_b;
		tmp = tmp -> next;
		(*stack_b) -> next = tmp -> next;
		tmp -> next = *stack_b;
		*stack_b = tmp;
		succes = 1;
	}
	if (succes && cnt->bench == 0)
		write(1, "ss\n", 3);
	cnt->ss_cnt += succes;
}
void	pa(t_stack **stack_a, t_stack **stack_b, t_count *cnt)
{
	t_stack	*tmp;

	if (*stack_b != NULL)
	{
		tmp = (*stack_b) -> next;
		(*stack_b) -> next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = tmp;
		if (cnt->bench == 0)
			write (1, "pa\n", 3);
		cnt->pa_cnt++;
	}
}
void	pb(t_stack **stack_a, t_stack **stack_b, t_count *cnt)
{
	t_stack	*tmp;

	if (*stack_a != NULL)
	{
		tmp = (*stack_a) -> next;
		(*stack_a) -> next = *stack_b;
		*stack_b = *stack_a;
		*stack_a = tmp;
		if (cnt->bench == 0)
			write (1, "pb\n", 3);
		cnt->pb_cnt++;
	}
}
