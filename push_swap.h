#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stx
{
	int				val;
	struct s_stx	*next;
}					t_stx;
typedef struct s_cnt
{
	int	sa_cnt;
	int sb_cnt;
	int	ss_cnt;
	int	pa_cnt;
	int	pb_cnt;
	int	ra_cnt;
	int	rb_cnt;
	int	rr_cnt;
	int	rra_cnt;
	int	rrb_cnt;
	int	rrr_cnt;
}		t_cnt;

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
void	ft_lstadd_back(t_stx **lst, t_stx *new);
t_stx	*ft_lstlast(t_stx *lst);
t_stx	*ft_lstnew(int content);
void	sa(t_stx **a, t_cnt *cnt);
void	sb(t_stx **b, t_cnt *cnt);
void	ss(t_stx **a, t_stx **b, t_cnt *cnt);
void	pa(t_stx **b, t_stx **a, t_cnt *cnt);
void	pb(t_stx **a, t_stx **b, t_cnt *cnt);
void    ra(t_stx **a, t_cnt *cnt);
void    rb(t_stx **b, t_cnt *cnt);
void    rr(t_stx **a, t_stx **b, t_cnt *cnt);
void	rra(t_stx **a, t_cnt *cnt);
void	rrr(t_stx **a, t_stx **b, t_cnt *cnt);

#endif
