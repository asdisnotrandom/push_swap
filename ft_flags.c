/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:55:51 by ademirel          #+#    #+#             */
/*   Updated: 2026/03/03 07:16:22 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	flag_work(t_count *cnt, int nmb)
{
	if (cnt->op != 4)
		ft_error();
	cnt->op = nmb;
	return (1);
}

static int	algo_flags(char **argv, t_count **cnt)
{
	int	i;

	i = 1;
	while (argv[i] != NULL && i < 3)
	{
		if (ft_strncmp(argv[i], "--simple", 9) == 0)
			flag_work(*cnt, 0);
		else if (ft_strncmp(argv[i], "--medium", 9) == 0)
			flag_work(*cnt, 1);
		else if (ft_strncmp(argv[i], "--complex", 10) == 0)
			flag_work(*cnt, 2);
		else if (ft_strncmp(argv[i], "--adaptive", 11) == 0)
			flag_work(*cnt, 3);
		i++;
	}
	if ((*cnt)->op == 4)
		return (0);
	return (1);
}
int	ft_flags(char **argv, t_count **cnt)
{
	int	i;

	i = 1;
	while (argv[i] != NULL && i < 3)
	{
		if (ft_strncmp(argv[i], "--bench", 8) == 0)
		{
			if ((*cnt)->bench != 0)
				ft_error();
			(*cnt)->bench = 1;
		}
		i++;
	}
	return ((*cnt)->bench + algo_flags(argv, cnt));
}
void	chosen_alg(t_stack **stack_a, t_stack **stack_b, t_count *cnt)
{
	if (cnt->op == 0)
		ft_selection(stack_a, stack_b, cnt);
	// else if (cnt->op == 1)
	// {
	// 	ft_range();
	// }
	// else if (cnt->op == 2)
	// 	ft_radix();
	else if (cnt->op == 3 || cnt->op == 4)
	{
		if (cnt->disorder < 0.2)
			ft_selection(stack_a, stack_b, cnt);
		// else if (cnt->disorder >= 0.2 && cnt->disorder < 0.5)
		// 	ft_range();
		// else if (cnt->disorder >= 0.5)
		// 	ft_radix();
	}
	if (cnt->bench == 1)
		ft_bench(cnt);
}
