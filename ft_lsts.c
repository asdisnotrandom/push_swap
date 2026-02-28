/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:37:44 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/25 18:34:24 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*a;

	if (lst == 0 || new == 0)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	a = ft_lstlast(*lst);
	a->next = new;
	new->next = 0;
}
void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst == 0 || new == 0)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*a;

	if (lst == 0)
		return (0);
	a = lst;
	while (a->next)
		a = a->next;
	return (a);
}
t_stack	*ft_beforelast(t_stack *lst)
{
	t_stack	*a;

	if (lst == 0 || lst -> next == NULL)
		return (0);
	a = lst;
	while (a -> next -> next)
		a = a -> next;
	return (a);
}
t_stack	*ft_lstnew(int value)
{
	t_stack	*d;

	d = (t_stack *)malloc(sizeof(t_stack));
	if (d == 0)
		return (0);
	d->value = value;
	d->next = 0;
	return (d);
}