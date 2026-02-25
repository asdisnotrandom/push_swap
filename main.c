#include "push_swap.h"

int main(int argc, char **argv)
{
    char **f_input;
    t_stack *stack_a;
	int		i;
    int     j;

    if (argc == 1)
        return (0);
    if (argv[1][0] == '\0')
    {
        write(2, "Error\n", 6);
        return (1);
    }
    i = 0;
    j = 0;
	f_input = ft_split(argv, ' ');
    while (f_input[i] != 0)
    {
        
    }
    i = 0;
	while (f_input[i] != 0)
		ft_lstadd_back(&stack_a, ft_lstnew(ft_strdup(f_input[i++])));
}