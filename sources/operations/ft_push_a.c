/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:44:06 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/20 15:35:43 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_push_a(t_stack *st)
{
	int		*tmp_tab_a;
	int		*tmp_tab_b;

	tmp_tab_a = NULL;
	tmp_tab_b = NULL;
	if (st->len_b == 0)
		return ;
	tmp_tab_a = ft_intjoin(st->tab_b[0], st->len_a, st->tab_a);
	if (st->len_b != 1)
	{
		tmp_tab_b = ft_copytab(1, st->len_b, st->tab_b);
		free(st->tab_b);
		st->tab_b = ft_copytab(0, st->len_b - 1, tmp_tab_b);
	}
	free(st->tab_a);
	st->tab_a = ft_copytab(0, st->len_a + 1, tmp_tab_a);
	free(tmp_tab_a);
	free(tmp_tab_b);
	st->len_a += 1;
	st->len_b -= 1;
	printf("pa\n");
}
