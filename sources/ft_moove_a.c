/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:03:08 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/20 17:09:13 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_2left(t_stack *st)
{
	while (1)
	{
		if (ft_set_pos_a(st, st->save_first) == 1)
			break ;
		else if (ft_set_pos_a(st, st->save_second) == 1)
			break ;
		else
			ft_rotate_a(st);
	}
}

void	ft_2right(t_stack *st)
{
	while (1)
	{
		if (ft_set_pos_a(st, st->save_first) == st->len_a)
			break ;
		if (ft_set_pos_a(st, st->save_second) == st->len_a)
			break ;
		ft_reverse_rotate_a(st);
	}
}

void	ft_2opposite(t_stack *st, int cmp1, int cmp2)
{
	cmp1 = st->save_first - st->inf;
	cmp2 = st->sup - st->save_second;
	if (cmp1 < cmp2)
	{
		while (ft_set_pos_a(st, st->save_first) != 1)
			ft_rotate_a(st);
	}
	else
	{
		while (ft_set_pos_a(st, st->save_second) != 1)
			ft_reverse_rotate_a(st);
	}
}

void	ft_bigger_than_b(t_stack *st, int inf, int op)
{
	if (ft_set_pos_b(st, inf) > (st->len_b / 2))
		op = 1;
	while (st->tab_b[0] != inf)
	{
		if (op == 0)
			ft_rotate_b(st);
		else
			ft_reverse_rotate_b(st);
	}
}

void	ft_smaller_than_b(t_stack *st, int sup, int op)
{
	if (ft_set_pos_b(st, sup) > (st->len_b / 2))
		op = 1;
	while (st->tab_b[0] != sup)
	{
		if (op == 0)
			ft_rotate_b(st);
		else
			ft_reverse_rotate_b(st);
	}
}
