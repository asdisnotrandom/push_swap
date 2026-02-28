/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:53:31 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 20:10:26 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int	main(int argc, char **argv)
{
	char	**f_input;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_count	*stack_cnt;
	int		flag_val;

	if (argc < 2)
		return (0);
	stack_cnt = ft_calloc(1, sizeof(t_count)); //basarisiz freeleri
	flag_val = ft_flags(argv, &stack_cnt);
	argc -= flag_val;
	argv += flag_val;
	if (argc < 2)
	{
		free(stack_cnt);
		return (0);
	} 
	stack_cnt->a_cnt = fill_a(argv, &stack_a, f_input);
	is_listed(stack_a);
	chosen_alg(&stack_a, &stack_b, stack_cnt);
	printf("%d\n", total_move(stack_cnt));
	return (0);
}
