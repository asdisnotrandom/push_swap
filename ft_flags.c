/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:55:51 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 12:39:51 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_flags(char **argv, t_stack **stack_a, t_stack **stack_b, int a_cnt)
{
	if (strncmp(argv[1], "--bench", 7) == 0)
	{
		ft_bench();
		if (ft_strncmp(argv[2], "--simple", 8) == 0)
		{
			ft_selection();
		}
		else if (ft_strncmp(argv[2], "--medium", 8) == 0)
		{
			ft_medumalg();
		}
		else if (ft_strncmp(argv[2], "--complex", 9) == 0)
		{
			ft_insertion(stack_a, stack_b, a_cnt);
		}
		else if (ft_strncmp(argv[2], "--adaptive", 10) == 0)
		{
			ft_adaptive();
		}
		else
			ft_adaptive();
	}
}
