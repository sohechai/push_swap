/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:19:23 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/18 20:48:54 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void				ft_fill_tab(int size, char **argv, t_stack *st)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if(!(st->tab_a = (int*)malloc(sizeof(int) * size - 1)))
		return ;
	while (j < size - 1)
		st->tab_a[j++] = ft_atoi(argv[i++]);
	st->len_a = j;
}

t_stack		*ft_init_struct(void)
{
	t_stack	*st;

	if (!(st = malloc(sizeof(t_stack))))
		return (NULL);
	st->tab_a = 0;
	st->tab_b = (int*)malloc(sizeof(int));
	st->inf = 0;
	st->sup = 0;
	st->size = 1;
	st->part_i = 0;
	st->part_s = 0;
	st->save_first = 0;
	st->save_second = 0;
	st->pos = 1;
	st->len_a = 0;
	st->len_b = 0;

	return (st);
}
