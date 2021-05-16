/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:36:18 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/16 20:15:53 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void		ft_reverse_rotate_a(t_stack *st)
{
	int		*tmp_tab_a;
	int		len;
	int		i;
	int		j;

	len = st->len_a;
	i = 0;
	j = 1;
	if (st->tab_a[0] == 0)
		return ;
	if(!(tmp_tab_a = ft_calloc(len, sizeof(int*))))
		return ;
	tmp_tab_a[0] = st->tab_a[len - 1];
	while (j < len)
		tmp_tab_a[j++] = st->tab_a[i++];
	free(st->tab_a);
	st->tab_a = ft_copytab(0, tmp_tab_a);
	printf("rra\n");
}