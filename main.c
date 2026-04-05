#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stx	*a;
	t_stx	*b;
	t_stx	*tmp;
	t_cnt	cnt;
	char **f_input;
	int i = 1;
	int j;

	(&cnt)->rrr_cnt = 0;
	a = NULL;
	b = NULL;
	tmp = a;
	if (argc < 2)
	{
		exit(1);
	}
	while (argv[i] != NULL)
	{
		f_input = ft_split(argv[i], ' ');
		j = 0;
		while (f_input[j] != NULL)
		{
			ft_lstadd_back(&a, ft_lstnew((ft_atoi(f_input[j]))));
			j++;
		}
		i++;
	}
}
