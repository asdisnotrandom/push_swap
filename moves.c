#include "push_swap.h"

void	sa(t_stx **a, t_cnt *cnt)
{
	if (*a != NULL || (*a)->next != NULL)
	{
		t_stx	*tmp;

		tmp = *a;
		tmp = tmp->next;
		(*a)->next = (*a)->next->next;
		tmp->next = *a;
		*a = tmp;
		cnt->sa_cnt++;
	}
}

void	sb(t_stx **b, t_cnt *cnt)
{
	if (*b != NULL || (*b)->next != NULL)
	{
		t_stx	*tmp;

		tmp = *b;
		tmp = tmp->next;
		(*b)->next = (*b)->next->next;
		tmp->next = *b;
		*b = tmp;
		cnt->sb_cnt++;
	}
}
void	ss(t_stx **a, t_stx **b, t_cnt *cnt)
{
	sa(a, cnt);
	sb(b, cnt);
	cnt->sa_cnt--;
	cnt->sb_cnt--;
	cnt->ss_cnt++;
}
void	pa(t_stx **b, t_stx **a, t_cnt *cnt)
{
	t_stx	*temp;

	if (*b != NULL)
	{
		temp = *b;
		temp = temp->next;
		(*b)->next = *a;
		*a = *b;
		*b = temp;
		cnt->pa_cnt++;
	}
}
void	pb(t_stx **a, t_stx **b, t_cnt *cnt)
{
	t_stx	*temp;

	if (*a != NULL)
	{
		temp = *a;
		temp = temp->next;
		(*a)->next = *b;
		*b = *a;
		*a = temp;
		cnt->pb_cnt++;
	}
}
