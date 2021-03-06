/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:39:01 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/21 14:55:10 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_swap_a(t_stack *st)
{
	int		*tmp_tab_a;
	int		i;

	i = 2;
	if (st->len_a == 0)
		return ;
	tmp_tab_a = ft_calloc(st->len_a, sizeof(int *));
	if (!(tmp_tab_a))
		return ;
	tmp_tab_a[0] = st->tab_a[1];
	tmp_tab_a[1] = st->tab_a[0];
	while (i < st->len_a)
	{
		tmp_tab_a[i] = st->tab_a[i];
		i++;
	}
	free(st->tab_a);
	st->tab_a = ft_copytab(0, st->len_a, tmp_tab_a);
	free(tmp_tab_a);
	printf("sa\n");
}
