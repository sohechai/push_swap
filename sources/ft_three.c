/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:31:38 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/16 16:41:54 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void		ft_three(t_stack *st)
{
	int		a;
	int		b;
	int		c;

	a = st->tab_a[0];
	b = st->tab_a[1];
	c = st->tab_a[2];
	if (a > b && b < c && a < c)
		ft_swap_a(st);
	else if (a > b && b > c && a > c)
	{
		ft_swap_a(st);
		ft_reverse_rotate_a(st);
	}
	else if (a > b && b < c && a > c)
		ft_rotate_a(st);
	else if (a < b && b > c && a < c)
	{
		ft_swap_a(st);
		ft_rotate_a(st);
	}
	else
		ft_reverse_rotate_a(st);
}