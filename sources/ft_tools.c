/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:57:10 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/21 18:49:19 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_set_pos_a(t_stack *st, int nb)
{
	int		i;

	i = 0;
	while (i < st->len_a)
	{
		if (st->tab_a[i] == nb)
			return (i + 1);
		i++;
	}
	return (1);
}

int	ft_set_pos_b(t_stack *st, int nb)
{
	int		i;

	i = 0;
	while (i < st->len_b)
	{
		if (st->tab_b[i] == nb)
			return (i + 1);
		i++;
	}
	return (1);
}

void	ft_set_inf_sup(t_stack *st)
{
	int		i;

	i = 0;
	st->inf = st->tab_a[0];
	st->sup = st->tab_a[0];
	while (i < st->len_a)
	{
		if (st->tab_a[i] < st->inf)
			st->inf = st->tab_a[i];
		else if (st->tab_a[i] > st->sup)
			st->sup = st->tab_a[i];
		i++;
	}
}

int	ft_set_len(t_stack *st)
{
	int		len;

	ft_set_inf_sup(st);
	if (st->size == 1)
		len = (st->sup - st->inf) / 5;
	else
		len = (st->sup - st->inf) / 9;
	return (len);
}

void	ft_set_part(t_stack *st, int len)
{
	if (st->part_s == 0)
		st->part_i = st->inf;
	else
		st->part_i = st->part_s + 1;
	st->part_s = st->part_i + len;
}
