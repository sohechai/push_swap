/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:08:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/06 19:59:43 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

int			*ft_copytab(int start, int *tab)
{
	int		*copy_tab;
	int		len;
	int		i;

	i = 0;
	len = ft_count_len(tab) - start;
	copy_tab = (int*)malloc(sizeof(int) * len);
	while (tab[start])
		copy_tab[i++] = tab[start++];
	return (copy_tab);
}

void		ft_push_b(t_stack *st)
{
	int		*tmp_tab;
	int		i;

	i = 1;
	if (st->tab_b[0] == 0)
		st->tab_b[0] = st->tab_a[0];
	else
	{
		tmp_tab = ft_copytab(0, st->tab_b);
		free(st->tab_b);
		st->tab_b[0] = st->tab_a[0];
		st->tab_b = ft_copytab(1, tmp_tab);
		free(tmp_tab);
	}
	tmp_tab = ft_copytab(0, st->tab_a);
	free(st->tab_a);
	st->tab_a = ft_copytab(1, tmp_tab);
	free(tmp_tab);
	st->size -= 1;
}