/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 22:26:17 by ademirel          #+#    #+#             */
/*   Updated: 2026/03/01 00:31:16 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_algo(t_count *cnt)
{
	if (cnt->op == 0)
		ft_putstr_fd("[bench] strategy: Simple / O(n^2)\n", 2);
	else if (cnt->op == 1)
		ft_putstr_fd("[bench] strategy: Medium / O(n\\sqrt{n})\n", 2);
	else if (cnt->op == 2)
		ft_putstr_fd("[bench] Complex / O(nlogn)\n", 2);
	else
		ft_putstr_fd("[bench] Adaptive / disorderlazim\n", 2);
}
void	print_mvs1(t_count *cnt)
{
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(cnt->op, 2);
	ft_putstr_fd("\n", 2);
	ft_putstr_fd("[bench] sa: ", 2);
	ft_putnbr_fd(cnt->sa_cnt, 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd(cnt->sb_cnt, 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd(cnt->ss_cnt, 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd(cnt->pa_cnt, 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd(cnt->pb_cnt, 2);
	ft_putstr_fd("\n", 2);
}
void	print_mvs1(t_count *cnt)
{
	ft_putstr_fd("[bench] ra: ", 2);
	ft_putnbr_fd(cnt->ra_cnt, 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd(cnt->rb_cnt, 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd(cnt->rr_cnt, 2);
	ft_putstr_fd(" rra: ", 2);
	ft_putnbr_fd(cnt->rra_cnt, 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd(cnt->rrb_cnt, 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd(cnt->rrr_cnt, 2);
	ft_putstr_fd("\n", 2);
}
void	ft_bench(t_count *cnt)
{
	
}