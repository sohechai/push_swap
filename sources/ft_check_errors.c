/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:27:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/21 18:56:14 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_isdigit_equal(int c)
{
	if ((c >= '0' && c <= '9') || c == '-')
		return (1);
	return (0);
}

int	ft_check_double(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i] != NULL)
	{
		j = i + 1;
		while (argv[j] != NULL)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_int_max(char **argv)
{
	int		i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (ft_strlen(argv[i]) == 10)
		{
			if (ft_strncmp(argv[i], "2147483647", 10) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
		else if (ft_strlen(argv[i]) > 10)
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	return (ft_check_double(argv));
}

int	ft_check_errors(char **argv, int argc)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	while (argv[++i] != NULL)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit_equal(argv[i][j]) == 0 || (argv[i][j] == '-'
				&& !ft_isdigit(argv[i][j + 1])))
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}
		j = 0;
	}
	return (ft_check_int_max(argv));
}
