/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirel <ademirel@student.42istanbul.com.tr> + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:41:16 by ademirel          #+#    #+#             */
/*   Updated: 2026/02/25 23:41:22 by ademirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void	same_check(t_stack *stack_a)
{
	t_stack *tmp;
	t_stack *last;
	
	last = ft_lstlast(stack_a);
	tmp = stack_a;
	while (tmp->next != NULL)
	{
		if (last->value == tmp->value)
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		tmp = tmp->next;
	}
}
