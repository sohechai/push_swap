/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:07:55 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/16 20:13:23 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void			ft_set_inf(t_stack *st)
{
	int		i;

	i = 0;
	st->inf = st->tab_a[0];
	st->pos = 1;
	while (st->tab_a[i])
	{
		if (st->tab_a[i] < st->inf)
		{
			st->inf = st->tab_a[i];
			st->pos = i + 1;
		}
		i++;
	}
}

int			ft_count_len(int *tab)
{
	return (sizeof(tab) + 1);
}

void		ft_pushswap(t_stack *st)
{
	ft_set_inf(st);
	while (st->len_a > 3)
	{
		if (st->pos == 1)
			ft_push_b(st); // (push inf dans b)
		else
			ft_rotate_a(st);
		// else
		// 	ft_reverse_rotate_a(st);
		ft_set_inf(st);
	}
	// if (st->len_a == 3)
	// 	ft_three(st);
	// while (ft_count_len(st->tab_b) != 0)
	// 	ft_push_a(st);
	printf("------------------\n");
	for (int i = 0; i < st->len_a; i++)
		printf("tab_a = [%d]\n", st->tab_a[i]);
	printf("------------------\n");
	for (int i = 0; i < st->len_b; i++)
		printf("tab_b = [%d]\n", st->tab_b[i]);
	printf("------------------\n");
}