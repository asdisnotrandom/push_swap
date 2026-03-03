/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:53:31 by ademirel          #+#    #+#             */
/*   Updated: 2026/03/03 07:55:16 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}
static void	fill_a(char **argv, t_stack **stack_a, char **f_input, t_count *cnt)
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
				cnt->a_cnt++;
			}
			else
				ft_error();
			free(f_input[j++]);
		}
		free(f_input);
		i++;
	}
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
	stack_a = NULL;
	stack_b = NULL;
	stack_cnt->op = 4;
	flag_val = ft_flags(argv, &stack_cnt);
	argc -= flag_val;
	argv += flag_val;
	if (argc < 2)
	{
		free(stack_cnt);
		return (0);
	}
	fill_a(argv, &stack_a, f_input, stack_cnt);
	is_listed(stack_a);
	set_disorder(&stack_a, stack_cnt);
	chosen_alg(&stack_a, &stack_b, stack_cnt);
	return (0);
}
