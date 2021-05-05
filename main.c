/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:21:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/05 17:46:25 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pushswap.h"

void			ft_set_inf(t_stack *st)
{
	int		i;
	int		j;

	i = 0;
	st->inf = st->tab[0];
	while (st->tab[i])
	{
		printf("[%d]\n", st->tab[i]);
		j = i + 1;
		while (st->tab[j])
		{
			if (st->tab[j] < st->tab[i])
			{
				st->inf = st->tab[j];
				st->pos = j + 1;
			}
			j++;
		}
		i++;
	}
}

void		ft_pushswap(t_stack *st)
{
	ft_set_inf(st);
}

int			main(int argc, char **argv)
{
	t_stack	*st;

	if (argc <= 1)
	{
		printf("Error, wrong arguments\n");
		return (0);
	}
	else if (ft_check_errors(argv) == 0)
	{
		dprintf(1, "Error\n");
		return (0);
	}
	if (!(st = ft_init_struct()))
	{
		printf("Failed allocate memory to structure\n");
		return (0);
	}
	ft_fill_tab(argc, argv, st);
	ft_pushswap(st);

	return (0);
}