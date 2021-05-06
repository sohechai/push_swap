/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:21:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/06 19:36:31 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pushswap.h"

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