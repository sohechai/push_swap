/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:38:12 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/20 16:18:25 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_rotate_b(t_stack *st)
{
	int		*tmp_tab_b;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (st->len_b == 0)
		return ;
	tmp_tab_b = ft_calloc(st->len_b, sizeof(int *));
	if (!(tmp_tab_b))
		return ;
	while (j < st->len_b - 1)
		tmp_tab_b[j++] = st->tab_b[i++];
	tmp_tab_b[j] = st->tab_b[0];
	free(st->tab_b);
	st->tab_b = ft_copytab(0, st->len_b, tmp_tab_b);
	printf("rb\n");
}
