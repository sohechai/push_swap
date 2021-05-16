/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:54:20 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/16 20:14:04 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void		ft_rotate_a(t_stack *st)
{
	int		*tmp_tab_a;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (st->tab_a[0] == 0)
		return ;
	if(!(tmp_tab_a = ft_calloc(st->len_a, sizeof(int*))))
		return ;
	while (st->tab_a[i])
		tmp_tab_a[j++] = st->tab_a[i++];
	tmp_tab_a[j] = st->tab_a[0];
	free(st->tab_a);
	st->tab_a = ft_copytab(0, tmp_tab_a);
	printf("ra\n");
}