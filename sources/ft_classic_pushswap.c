/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_classic_pushswap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:35:14 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/18 20:48:49 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void			ft_set_inf(t_stack *st)
{
	int		i;

	i = 0;
	st->inf = st->tab_a[0];
	st->pos = 1;
	while (i < st->len_a)
	{
		if (st->tab_a[i] < st->inf)
		{
			st->inf = st->tab_a[i];
			st->pos = i + 1;
		}
		i++;
	}
}

void		ft_classic_pushswap(t_stack *st)
{
	ft_set_inf(st);
	while (st->len_a > 3)
	{
		if (st->pos == 1)
			ft_push_b(st); // (push inf dans b)
		else if (st->pos <= (st->len_a / 2))
			ft_rotate_a(st); // (1er -> dernier)
		else
			ft_reverse_rotate_a(st); // (dernier -> 1er)
		ft_set_inf(st);
	}
	if (st->len_a == 3)
		ft_three(st);
	while (st->len_b >= 1)
		ft_push_a(st);

	// printf("------------------\n");
	// for (int i = 0; i < st->len_a; i++)
	// 	printf("tab_a = [%d]\n", st->tab_a[i]);
	// printf("------------------\n");
	// for (int i = 0; i < st->len_b; i++)
	// 	printf("tab_b = [%d]\n", st->tab_b[i]);
	// printf("------------------\n");
}
