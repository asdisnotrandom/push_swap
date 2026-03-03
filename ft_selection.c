/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:55:22 by ademirel          #+#    #+#             */
/*   Updated: 2026/03/03 08:30:23 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sortto_five(t_stack **a, t_count *cnt)
{
	if (cnt->a_cnt == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a, cnt);
	}
	else if (cnt->a_cnt == 3)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a, cnt);
		if ((*a)->value > (*a)->next->next->value)
			
	}
}

static int	find_min(t_stack *a)
{
	t_stack	*min;
	int		move;
	t_stack	*tmp;

	move = 0;
	min = a;
	tmp = a;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	while (a != min)
	{
		move++;
		a = a->next;
	}
	return (move);
}

void	ft_selection(t_stack **a, t_stack **b, t_count *cnt)
{
	int	move;
	int	rra_s;

	while ((*a)->next)
	{
		move = find_min(*a);
		rra_s = cnt->a_cnt - move;
		if ((cnt->a_cnt + 1) / 2 >= move)
		{
			while (move--)
				ra(a, cnt);
		}
		else
		{
			while (rra_s--)
				rra(a, cnt);
		}
		pb(a, b, cnt);
	}
	while (*b)
		pa(a, b, cnt);
}
