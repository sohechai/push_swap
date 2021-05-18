/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:16:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/05/18 20:36:08 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdio.h>

# include "../libft/includes/libft.h"

typedef struct	s_stack
{
	int				*tab_a;
	int				*tab_b;
	int				size;
	int				inf;
	int				sup;
	int				part_i;
	int				part_s;
	int				save_first;
	int				save_second;
	int				pos;
	int				len_a;
	int				len_b;
}				t_stack;

t_stack				*ft_init_struct(void);
void				ft_classic_pushswap(t_stack *st);
int					ft_check_errors(char **argv);
void				ft_fill_tab(int size, char **argv, t_stack *st);
void				ft_pushswap(t_stack *st);
void				ft_push_b(t_stack *st);
int					*ft_copytab(int start, int len, int *tab);
int					*ft_intjoin(int c, int len, int *tab);
void				ft_rotate_a(t_stack *st);
void				ft_rotate_b(t_stack *st);
void				ft_reverse_rotate_a(t_stack *st);
void				ft_reverse_rotate_b(t_stack *st);
void				ft_three(t_stack *st);
void				ft_swap_a(t_stack *st);
void				ft_push_a(t_stack *st);
int					ft_is_sort(t_stack *st);


#endif