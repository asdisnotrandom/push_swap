/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:45:01 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/26 23:08:55 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// insertion sort

// range based algoritm

// quick sort

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
