/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:35:44 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/20 15:55:49 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_is_sort(t_stack *st)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < st->len_a && (i + 1) < st->len_a)
	{
		if (st->tab_a[i] < st->tab_a[i + 1])
			j++;
		i++;
	}
	if (j + 1 == st->len_a)
		return (-1);
	return (0);
}
