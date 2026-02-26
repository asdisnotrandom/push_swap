#include "push_swap.h"

int main(int argc, char **argv)
{
    char **f_input;
    t_stack *stack_a = NULL;
	int		i;
    int     j;

    if (argc < 2)
        return (0);
	j = 1;
	while (j < argc)
	{
		if (argv[j][0] == '\0')
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		j++;
	}
    i = 1;
    while (argv[i] != NULL)
    {
	    f_input = ft_split(argv[i], ' ');
		j = 0;
		if (f_input[j] == NULL)
		{
			write (2, "Error\n", 6);
			exit(1);
		}
        while (f_input[j])
        {
            if (ft_isdigit(f_input[j]))
			{
                ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(f_input[j])));
				same_check(stack_a);
			}
            else
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			free(f_input[j]);
			j++;
		}
		free(f_input);
        i++;
    }
    while (stack_a)
    {
        printf("%d\n", stack_a -> value);
        stack_a = stack_a -> next;
    }
}
