#include "push_swap.h"

t_stx	*ft_lstnew(int content)
{
	t_stx	*d;

	d = (t_stx *)malloc(sizeof(t_stx));
	if (d == 0)
		return (0);
	d->val = content;
	d->next = 0;
	return (d);
}

void	ft_lstadd_back(t_stx **lst, t_stx *new)
{
	t_stx	*a;

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
t_stx	*ft_lstlast(t_stx *lst)
{
	t_stx	*a;

	if (lst == 0)
		return (0);
	a = lst;
	while (a->next)
		a = a->next;
	return (a);
}
