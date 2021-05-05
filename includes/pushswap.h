/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:16:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/05 17:17:38 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdio.h>

# include "../libft/includes/libft.h"

typedef struct	s_stack
{
	int				*tab;
	int				size;
	int				inf;
	int				pos;
}				t_stack;

t_stack				*ft_init_struct(void);
int					ft_check_errors(char **argv);
void				ft_fill_tab(int size, char **argv, t_stack *st);


#endif