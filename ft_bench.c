/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr>+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 22:26:17 by ademirel          #+#    #+#             */
/*   Updated: 2026/03/03 07:13:41 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_disorder(t_count *cnt)
{
	float	main;
	int		part_1;
	int		part_2;

	main = cnt->disorder * 100.0f;
	part_2 = (int)(main * 100.0f) % 100;
	part_1 = (int)main;

	ft_putstr_fd("[bench] disorder: ", 2);
	ft_putnbr_fd(part_1, 2);
	ft_putstr_fd(".", 2);
	if (part_2 < 10)
		ft_putnbr_fd(part_2, 2);
	ft_putnbr_fd(part_2, 2);
	ft_putstr_fd("%", 2);
	ft_putstr_fd("\n", 2);
}

static void	print_algo(t_count *cnt)
{
	if (cnt->op == 0)
		ft_putstr_fd("[bench] strategy: Simple / O(n^2)\n", 2);
	else if (cnt->op == 1)
		ft_putstr_fd("[bench] strategy: Medium / O(n\\sqrt{n})\n", 2);
	else if (cnt->op == 2)
		ft_putstr_fd("[bench] strategy: Complex / O(nlogn)\n", 2);
	else if ((cnt->op == 3 || cnt->op == 4) && cnt->disorder < 0.2)
		ft_putstr_fd("[bench] strategy: Adaptive / O(n^2)\n", 2);
	else if ((cnt->op == 3 || cnt->op == 4) && cnt->disorder >= 0.2 && cnt->disorder < 0.5)
		ft_putstr_fd("[bench] strategy: Adaptive / O(n\\sqrt{n})\n", 2);
	else if ((cnt->op == 3 || cnt->op == 4) && cnt->disorder >= 0.5)
		ft_putstr_fd("[bench] strategy: Adaptive / O(nlogn)\n", 2);
}
static void	print_mvs1(t_count *cnt)
{
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(total_move(cnt), 2);
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
static void	print_mvs2(t_count *cnt)
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
	print_disorder(cnt);
	print_algo(cnt);
	print_mvs1(cnt);
	print_mvs2(cnt);
}