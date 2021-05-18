/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:21:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/18 20:41:25 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pushswap.h"

int			main(int argc, char **argv)
{
	t_stack	*st;

	if (argc <= 1)
		return (0);
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
	if (ft_is_sort(st) == -1)
		return (0);
	if ((argc - 1) == 3)
		ft_three(st);
	else if ((argc - 1) >= 100 && (argc - 1) < 500)
		ft_pushswap(st);
	else if ((argc - 1) >= 500)
	{
		st->size = 0;
		ft_pushswap(st);
	}
	else
		ft_classic_pushswap(st);
		// ft_classique push swap
	return (0);
}