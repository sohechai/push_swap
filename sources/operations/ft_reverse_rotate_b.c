/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:39:10 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/18 19:40:00 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void		ft_reverse_rotate_b(t_stack *st)
{
	int		*tmp_tab_b;
	int		len;
	int		i;
	int		j;

	len = st->len_b - 1;
	i = 0;
	j = 1;
	if (st->len_b == 0)
		return ;
	if(!(tmp_tab_b = ft_calloc(len, sizeof(int*))))
		return ;
	tmp_tab_b[0] = st->tab_b[len];
	while (j <= len)
		tmp_tab_b[j++] = st->tab_b[i++];
	free(st->tab_b);
	st->tab_b = ft_copytab(0, st->len_b, tmp_tab_b);
	printf("rrb\n");
}
