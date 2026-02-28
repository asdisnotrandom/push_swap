#include "push_swap.h"
#include <stdio.h>

void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

static int	fill_a(char **argv, t_stack **stack_a, char **f_input)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
    {
	    f_input = ft_split(argv[i], ' ');
		j = 0;
		if (f_input[j] == NULL)
			ft_error();
        while (f_input[j])
        {
            if (ft_isdigit(f_input[j]))
			{
                ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(f_input[j])));
				same_check(*stack_a);
			}
            else
				ft_error();
			free(f_input[j++]);
		}
		free(f_input);
        i++;
    }
	return (j);
}

int main(int argc, char **argv)
{
    char **f_input;
    t_stack *stack_a;
	t_stack *stack_b;
    int     j;
	int		a_cnt;
	long	cnt;

    if (argc < 2)
        return (0);
	stack_a = NULL;
	stack_b = NULL;
	j = 1;
	while (j < argc)
	{
		if (argv[j++][0] == '\0')
			ft_error();
	}
    a_cnt = fill_a(argv, &stack_a, f_input);
	is_listed(stack_a);
	cnt = ft_insertion(&stack_a, &stack_b, a_cnt);
    while (stack_a)
    {
        printf("%d\n", stack_a -> value);
        stack_a = stack_a -> next;
    }
	printf("%ld\n", cnt);
}
