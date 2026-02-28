/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:55:51 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 22:34:41 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	algo_flags(char *argv, t_count **cnt)
{
	if (argv == NULL)
		return (0);
	if (ft_strncmp(argv, "--simple", 9) == 0)
		(*cnt)->op = 0;
	else if (ft_strncmp(argv, "--medium", 9) == 0)
		(*cnt)->op = 1;
	else if (ft_strncmp(argv, "--complex", 10) == 0)
		(*cnt)->op = 2;
	else if (ft_strncmp(argv, "--adaptive", 11) == 0)
		(*cnt)->op = 3;
	else
		return (0);
	return (1);
}
int	ft_flags(char **argv, t_count **cnt)
{
	int	i;

	i = 0;
	(*cnt)->op = 3;
	(*cnt)->bench = 0;
	if (argv[1] && ft_strncmp(argv[1], "--bench", 8) == 0)
	{
		(*cnt)->bench = 1;
		i++;
	}
	i += algo_flags(argv[1 + i], cnt);
	return (i);
}
void	chosen_alg(t_stack **stack_a, t_stack **stack_b, t_count *cnt)
{
	if (cnt->op == 2)
		ft_insertion(stack_a, stack_b, &cnt);
	if (cnt->bench == 1)
		ft_bench(cnt);
}
