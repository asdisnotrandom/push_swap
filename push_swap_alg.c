/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:45:01 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 19:51:51 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **stack_a, t_stack **stack_b, t_count *cnt)
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
	if (succes && cnt->bench == 0)
		write (1, "rrr\n", 4);
	cnt->rrr_cnt += succes;
}

void is_listed(t_stack *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return ;
		stack_a = stack_a->next;
	}
	exit(0); //stack free lazım
}
void	same_check(t_stack *stack_a)
{
	t_stack *tmp;
	t_stack *last;
	
	last = ft_lstlast(stack_a);
	tmp = stack_a;
	while (tmp->next != NULL)
	{
		if (last->value == tmp->value)
		{
			write (2, "Error\n", 6); //stack free lazım
			exit(1);
		}
		tmp = tmp->next;
	}
}
int	total_move(t_count *stck_cnt)
{
	int	sum;

	sum = 0;
	sum += stck_cnt->sa_cnt;
	sum += stck_cnt->sb_cnt;
	sum += stck_cnt->ss_cnt;
	sum += stck_cnt->pa_cnt;
	sum += stck_cnt->pb_cnt;
	sum += stck_cnt->ra_cnt;
	sum += stck_cnt->rb_cnt;
	sum += stck_cnt->rr_cnt;
	sum += stck_cnt->rra_cnt;
	sum += stck_cnt->rrb_cnt;
	sum += stck_cnt->rrr_cnt;
	return (sum);
}
