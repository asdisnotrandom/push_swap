#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sgn;
	long	rst;

	i = 0;
	sgn = 1;
	rst = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sgn = -sgn;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rst = (rst * 10) + (nptr[i] - '0');
		i++;
	}
	if (rst < -2147483648 || rst > 2147483647)
		write(2, "Error\n", 6);
	return (rst * sgn);
}

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
