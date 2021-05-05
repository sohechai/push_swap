/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:19:23 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/05 17:19:32 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void				ft_fill_tab(int size, char **argv, t_stack *st)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	st->tab = (int*)malloc(sizeof(int) * size - 1);
	while (argv[i] != NULL)
	{
		st->tab[j++] = ft_atoi(argv[i++]);
	}

}

t_stack		*ft_init_struct(void)
{
	t_stack	*st;

	if (!(st = malloc(sizeof(t_stack))))
		return (NULL);
	st->size = 0;
	st->inf = 0;
	st->pos = 0;
	
	return (st);
}