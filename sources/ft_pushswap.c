/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:07:55 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/20 17:10:24 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_save_first_second(t_stack *st)
{
	int		i;

	i = 0;
	while (i < st->len_a)
	{
		if (st->tab_a[i] >= st->part_i && st->tab_a[i] <= st->part_s)
		{
			st->save_first = st->tab_a[i];
			break ;
		}
		i++;
	}
	if (i == st->len_a)
		return (0);
	while (i > 0)
	{
		if (st->tab_a[i] >= st->part_i && st->tab_a[i] <= st->part_s)
		{
			st->save_second = st->tab_a[i];
			break ;
		}
		i--;
	}
	return (1);
}

void	ft_fill_a(t_stack *st)
{
	int		sup;
	int		i;
	int		op;

	sup = st->tab_b[0];
	i = 0;
	op = 0;
	while (i < st->len_b && st->tab_b)
	{
		if (st->tab_b[i] > sup)
			sup = st->tab_b[i];
		i++;
	}
	if (ft_set_pos_b(st, sup) > st->len_b / 2)
		op = 1;
	while (st->tab_b[0] != sup)
	{
		if (op == 0)
			ft_rotate_b(st);
		else
			ft_reverse_rotate_b(st);
	}
	ft_push_a(st);
}

void	ft_set_stack_b(t_stack *st)
{
	int		i;
	int		inf;
	int		sup;
	int		op;

	i = 0;
	inf = st->tab_b[0];
	sup = st->tab_b[0];
	op = 0;
	while (i < st->len_b && st->tab_b)
	{
		if (st->tab_b[i] < inf)
			inf = st->tab_b[i];
		else if (st->tab_b[i] > sup)
			sup = st->tab_b[i];
		i++;
	}
	if (st->tab_a[0] > sup)
		ft_bigger_than_b(st, inf, op);
	else
		ft_smaller_than_b(st, sup, op);
	ft_push_b(st);
}

void	ft_pushswap(t_stack *st)
{
	int		cmp1;
	int		cmp2;
	int		len;

	cmp1 = 0;
	cmp2 = 0;
	len = ft_set_len(st);
	ft_set_part(st, len);
	ft_save_first_second(st);
	while (st->len_a > 0)
	{
		if (ft_set_pos_a(st, st->save_first) <= (st->len_a / 2)
			&& ft_set_pos_a(st, st->save_second) <= (st->len_a / 2))
			ft_2left(st);
		else if (ft_set_pos_a(st, st->save_first) > (st->len_a / 2)
			&& ft_set_pos_a(st, st->save_second) > (st->len_a / 2))
			ft_2right(st);
		else
			ft_2opposite(st, cmp1, cmp2);
		ft_set_stack_b(st);
		if (ft_save_first_second(st) == 0)
			ft_set_part(st, len);
	}
	while (st->len_b > 0)
		ft_fill_a(st);
}
