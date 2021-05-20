/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:08:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/20 16:15:56 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

int	*ft_intjoin(int c, int len, int *tab)
{
	int		*copy_tmp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	copy_tmp = ft_calloc(len + 1, sizeof(int *));
	if (!(copy_tmp))
		return (0);
	copy_tmp[0] = c;
	while (j < len + 1)
		copy_tmp[j++] = tab[i++];
	return (copy_tmp);
}

int	*ft_copytab(int start, int len, int *tab)
{
	int		*copy_tab;
	int		i;

	i = 0;
	if (len == 0)
		return (0);
	copy_tab = ft_calloc(len, sizeof(int));
	if (!(copy_tab))
		return (0);
	while (start < len)
		copy_tab[i++] = tab[start++];
	return (copy_tab);
}

void	ft_push_b(t_stack *st)
{
	int		*tmp_tab_a;
	int		*tmp_tab_b;

	tmp_tab_a = NULL;
	if (st->len_a == 0)
		return ;
	tmp_tab_b = ft_intjoin(st->tab_a[0], st->len_b, st->tab_b);
	if (st->len_a != 1)
	{
		tmp_tab_a = ft_copytab(1, st->len_a, st->tab_a);
		free(st->tab_a);
		st->tab_a = ft_copytab(0, st->len_a - 1, tmp_tab_a);
	}
	free(st->tab_b);
	st->tab_b = ft_copytab(0, st->len_b + 1, tmp_tab_b);
	free(tmp_tab_a);
	free(tmp_tab_b);
	st->len_a -= 1;
	st->len_b += 1;
	printf("pb\n");
}
