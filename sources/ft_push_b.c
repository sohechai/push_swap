/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:08:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/12 19:58:57 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int			*ft_intjoin(int c, int *tab)
{
	int		*copy_tmp;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 1;
	len = ft_count_len(tab) + 1;
	if (!(copy_tmp = calloc(len, sizeof(int *))))
		return (0);
	copy_tmp[0] = c;
	while (tab[i])
		copy_tmp[j++] = tab[i++];
	return (copy_tmp);
}

int			*ft_copytab(int start, int *tab)
{
	int		*copy_tab;
	int		len;
	int		i;

	i = 0;
	len = ft_count_len(tab) - start;
	if (ft_count_len(tab) == 0)
		return (0);
	if (!(copy_tab = calloc(len, sizeof(int *))))
		return (0);
	while (tab[start])
		copy_tab[i++] = tab[start++];
	return (copy_tab);
}

void		ft_push_b(t_stack *st)
{
	int		*tmp_tab_a = NULL;
	int		*tmp_tab_b;

//	cpy 1 er pile a dans pile b + rajoute pile b a la suite avec malloc free etc;
	tmp_tab_b = ft_intjoin(st->tab_a[0], st->tab_b);
//	cpy de tab a sans le 1 er de la pile;
	if (ft_count_len(st->tab_a) != 1)
	{
		tmp_tab_a = ft_copytab(1, st->tab_a);
		free(st->tab_a);
		st->tab_a = ft_copytab(0, tmp_tab_a);
	}
	else
		free(st->tab_a);
	free(st->tab_b);
	st->tab_b = ft_copytab(0, tmp_tab_b);
	free(tmp_tab_a);
	free(tmp_tab_b);
	st->size -= 1;
}