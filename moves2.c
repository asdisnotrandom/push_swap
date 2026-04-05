#include "push_swap.h"

void    ra(t_stx **a, t_cnt *cnt)
{
    t_stx   *last;
    t_stx   *tmp;

    if (*a != NULL || (*a)->next != NULL)
    {
        tmp = *a;
        tmp = tmp->next;
        last = *a;
        while (last->next != NULL)
            last = last->next;
        last->next = *a;
        (*a)->next = NULL;
        *a = tmp;
        cnt->ra_cnt++;
    }
}
void    rb(t_stx **b, t_cnt *cnt)
{
    t_stx   *last;
    t_stx   *tmp;

    if (*b != NULL || (*b)->next != NULL)
    {
        tmp = *b;
        tmp = tmp->next;
        last = *b;
        while (last->next != NULL)
            last = last->next;
        last->next = *b;
        (*b)->next = NULL;
        *b = tmp;
        cnt->rb_cnt++;
    }
}
void    rr(t_stx **a, t_stx **b, t_cnt *cnt)
{
    ra(a, cnt);
    rb(a, cnt);
    cnt->ra_cnt--;
    cnt->rb_cnt--;
    cnt->rr_cnt++;
}
