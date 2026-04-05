#include "push_swap.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ln;

	ln = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (ln);
	if (size > ln)
		size = ln + 1;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ln);
}
size_t	ft_strlen(const char *s)
{
	size_t	cnt;

	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
void    is_printed(t_stx **a, int new)
{
	t_stx	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->val == new)
			free_exit(a, NULL);
		tmp = tmp->next;
	}
}
long	ft_atol(t_stx **a, char **f_input, const char *nptr)
{
	int		i;
	int		sgn;
	long	rst;

	i = 0;
	sgn = 1;
	rst = 0;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sgn = -sgn;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		rst = (rst * 10) + (nptr[i++] - '0');
	if (rst * sgn < -2147483648 || rst * sgn > 2147483647)
		free_exit(a, f_input);
	else
		{
		ft_isdigit(nptr, a, f_input);
		is_printed(a, rst * sgn);
		return (rst * sgn);
		}
	return(1);
}
void	ft_isdigit(const char *str, t_stx **a, char **f_input)
{
	int	i;

	if (str == NULL)
		free_exit(a, f_input);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		free_exit(a, f_input);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			free_exit(a, f_input);
		i++;
	}
}
