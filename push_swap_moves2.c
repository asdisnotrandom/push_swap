/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:21:16 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/25 17:50:47 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack **stack_a)
{
    t_stack *tmp;

    if (*stack_a == NULL || (*stack_a) -> next == NULL)
        return ;
    tmp = *stack_a;
    tmp = tmp -> next;
    ft_lstadd_back(stack_a, *stack_a);
    *stack_a = tmp;
    write (1, "ra\n", 3);
}
void	rb(t_stack **stack_b)
{
    t_stack	*tmp;

	if (*stack_b == NULL || (*stack_b) -> next == NULL)
		return ;
    tmp = *stack_b;
    tmp = tmp -> next;
    ft_lstadd_back(stack_b, *stack_b);
    *stack_b = tmp;
    write (1, "rb\n", 3);
}
void	rr(t_stack **stack_a, t_stack **stack_b)
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
}
void    rra(t_stack **stack_a)
{
    
}
void    rrb(t_stack **stack_b)
{
    
}