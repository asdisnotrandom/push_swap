/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 04:12:17 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/28 11:20:44 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

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

char	**ft_split(char const *s, char c);
t_stack	*ft_lstnew(int value);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_isdigit(const char *s);
int		sa(t_stack **stack_a);
int		sb(t_stack **stack_b);
int		ss(t_stack **stack_a, t_stack **stack_b);
int		pa(t_stack **stack_a, t_stack **stack_b);
int		pb(t_stack **stack_a, t_stack **stack_b);
int		ra(t_stack **stack_a);
int		rb(t_stack **stack_b);
int		rr(t_stack **stack_a, t_stack **stack_b);
int		rra(t_stack **stack_a);
int		rrb(t_stack **stack_b);
int		rrr(t_stack **stack_a, t_stack **stack_b);
t_stack	*pick_cheap(t_stack *stack_a);
int	operation_p(t_stack **stack_a, t_stack **stack_b, t_stack *cheap);
int	operation_n(t_stack **stack_a, t_stack **stack_b, t_stack *cheap);
int	operation_m(t_stack **stack_a, t_stack **stack_b, t_stack *cheap);
int	operation_all(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_beforelast(t_stack *lst);
void	same_check(t_stack *stack_a);
void	ft_error(void);
int		abs(int check);
long	ft_insertion(t_stack **stack_a, t_stack **stack_b, int a_cnt);
void 	is_listed(t_stack *stack_a);
#endif