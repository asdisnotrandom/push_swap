#include "push_swap.h"

void	rra(t_stx **a, t_cnt *cnt)
{
	t_stx	*before_last;
	t_stx	*last;

	if(*a != NULL || (*a)->next != NULL)
	{
		last = *a;
		before_last = *a;
		while (last->next != NULL)
			last = last->next;
		while (before_last->next->next != NULL)
			before_last = before_last->next;
		last->next = *a;
		before_last->next = NULL;
		*a = last;
		cnt->rra_cnt++;
	}
}
void	rrb(t_stx **b, t_cnt *cnt)
{
	t_stx	*before_last;
	t_stx	*last;

	if(*b != NULL || (*b)->next != NULL)
	{
		last = *b;
		before_last = *b;
		while (last->next != NULL)
			last = last->next;
		while (before_last->next->next != NULL)
			before_last = before_last->next;
		last->next = *b;
		before_last->next = NULL;
		*b = last;
		cnt->rrb_cnt++;
	}
}
void	rrr(t_stx **a, t_stx **b, t_cnt *cnt)
{
	rra(a, cnt);
	rrb(b, cnt);
	cnt->rra_cnt--;
	cnt->rrb_cnt--;
	cnt->rrr_cnt++;
}