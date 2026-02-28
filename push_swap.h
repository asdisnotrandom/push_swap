/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 04:12:17 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 22:34:25 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct s_stack
{
	int	value;
	int	cost_a;
	int	cost_b;
	int	cost;
	struct s_stack	*dest;	
	struct	s_stack	*next;
}			t_stack;

typedef struct	s_count
{
	int	bench;
	int	op;
	int	sa_cnt;
	int	sb_cnt;
	int	ss_cnt;
	int	pa_cnt;
	int pb_cnt;
	int	ra_cnt;
	int	rb_cnt;
	int	rr_cnt;
	int	rra_cnt;
	int	rrb_cnt;
	int	rrr_cnt;
	int	a_cnt;
}		t_count;

void	chosen_alg(t_stack **stack_a, t_stack **stack_b, t_count *cnt);
int		ft_flags(char **argv, t_count **cnt);
void	*ft_calloc(size_t nmemb, size_t size);
int		total_move(t_count *stck_cnt);
char	**ft_split(char const *s, char c);
t_stack	*ft_lstnew(int value);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_isdigit(const char *s);
void	sa(t_stack **stack_a, t_count *cnt);
void	sb(t_stack **stack_b, t_count *cnt);
void	ss(t_stack **stack_a, t_stack **stack_b, t_count *cnt);
void	pa(t_stack **stack_a, t_stack **stack_b, t_count *cnt);
void	pb(t_stack **stack_a, t_stack **stack_b, t_count *cnt);
void	ra(t_stack **stack_a, t_count *cnt);
void	rb(t_stack **stack_b, t_count *cnt);
void	rr(t_stack **stack_a, t_stack **stack_b, t_count *cnt);
void    rra(t_stack **stack_a, t_count *cnt);
void    rrb(t_stack **stack_b, t_count *cnt);
void	rrr(t_stack **stack_a, t_stack **stack_b, t_count *cnt);
t_stack	*pick_cheap(t_stack *stack_a);
void	operation_p(t_stack **stack_a, t_stack **stack_b, t_stack *cheap, t_count **cnt);
void	operation_n(t_stack **stack_a, t_stack **stack_b, t_stack *cheap, t_count **cnt);
void	operation_m(t_stack **stack_a, t_stack **stack_b, t_stack *cheap, t_count **cnt);
void	operation_all(t_stack **stack_a, t_stack **stack_b, t_count **stack_cnt);
t_stack	*ft_beforelast(t_stack *lst);
void	same_check(t_stack *stack_a);
void	ft_error(void);
int		ft_abs(int check);
void	ft_insertion(t_stack **stack_a, t_stack **stack_b, t_count **stack_cnt);
void 	is_listed(t_stack *stack_a);

#endif