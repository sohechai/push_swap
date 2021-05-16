/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:44:06 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/16 21:49:49 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void		ft_push_a(t_stack *st)
{
	int		*tmp_tab_a = NULL;
	int		*tmp_tab_b = NULL;

//	cpy 1 er pile a dans pile b + rajoute pile b a la suite avec malloc free etc;
	tmp_tab_a = ft_intjoin(st->tab_b[0], st->len_a, st->tab_a);
//	cpy de tab a sans le 1 er de la pile;
	if (st->len_b == 0)
		return ;
	else if (st->len_b != 1)
	{
		tmp_tab_b = ft_copytab(1, st->len_b, st->tab_b);
		free(st->tab_b);
		st->tab_b = ft_copytab(0, st->len_b - 1, tmp_tab_b);
	}
	else
	{
		free(st->tab_b);
		st->tab_b[0] = 0;
	}
	free(st->tab_a);
	st->tab_a = ft_copytab(0, st->len_a + 1, tmp_tab_a);
	free(tmp_tab_a);
	free(tmp_tab_b);
	st->len_a += 1;
	st->len_b -= 1;
	printf("pa\n");
}