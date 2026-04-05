#include "push_swap.h"

static void	null_0(t_stx**a, t_stx **b, t_cnt *cnt)
{
	*a = NULL;
	*b = NULL;
	cnt->bench = 0;
	cnt->sa_cnt = 0;
	cnt->sb_cnt = 0;
	cnt->ss_cnt = 0;
	cnt->pa_cnt = 0;
	cnt->pb_cnt = 0;
	cnt->ra_cnt = 0;
	cnt->rb_cnt = 0;
	cnt->rr_cnt = 0;
	cnt->rra_cnt = 0;
	cnt->rrb_cnt = 0;
	cnt->rrr_cnt = 0;
}

static void	printer(t_stx **a, t_stx **b, t_cnt *cnt, char **argv)
{
	char	**f_input;
	int		i;
	int		j;

	null_0(a, b, cnt);
	i = 1;
	while (argv[i] != NULL)
	{
		f_input = ft_split(argv[i], ' ');
		j = 0;
		while (f_input[j] != NULL)
		{
			ft_lstadd_back(a, ft_lstnew((ft_atol(a, f_input, f_input[j]))));
			free(f_input[j]);
			j++;
		}
		free(f_input);
		i++;
	}
}

int main(int argc, char **argv)
{
	t_stx	*a;
	t_stx	*b;
	t_cnt	cnt;

	if (argc < 2)
	{
		exit(1);
	}
	printer(&a, &b, &cnt, argv);
	while(a)
	{
		printf("%d", a->val);
		a = a->next;
	}
}
