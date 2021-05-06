/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:07:55 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/06 19:55:00 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

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
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void		ft_pushswap(t_stack *st)
{
	int		i;

	i = 0;
	ft_set_inf(st);
	st->size = ft_count_len(st->tab_a);
	while (st->size > 3)
	{
	// 	printf("allo\n");
	// 	if (st->pos == 1)
			ft_push_b(st); // (push inf dans b)
		// else
		// 	printf("rotatea\n");
		// rotateA; (1er element devient le dernier)
	}
	i = 0;
	while (st->tab_a[i])
		printf("tab_a = [%d]\n", st->tab_a[i++]);
	i = 0;
	while (st->tab_b[i])
		printf("tab_b = [%d]\n", st->tab_b[i++]);
}