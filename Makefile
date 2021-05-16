# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 14:12:19 by sohechai          #+#    #+#              #
#    Updated: 2021/05/16 22:38:01 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	push_swap

HEADER 	=	./includes/pushswap.h

SRC 	=	./main.c	\
			./sources/ft_init_struct.c \
			./sources/ft_check_errors.c \
			./sources/ft_pushswap.c \
			./sources/ft_push_b.c \
			./sources/ft_rotate_a.c \
			./sources/ft_reverse_rotate_a.c \
			./sources/ft_three.c \
			./sources/ft_swap_a.c \
			./sources/ft_push_a.c \
			./sources/ft_is_sort.c \


CC		=	gcc

FLAGS 	=	-Wall -Wextra -Werror

OBJ		= 	$(SRC:.c=.o)

RM		=	rm -rf

LIB 	= 		libft/libft.a

all: 		$(NAME)

$(NAME): 	$(OBJ)
			@make  -C libft
			@$(CC) $(FLAGS) $(OBJ) -I $(HEADER) $(LIB) -o $(NAME)

			@printf "\33[2K\r\033[0;31;5;110m[$(NAME)] is ready to be executed\033[37m\n"

%.o: %.c $(HEADER)
			@$(CC) $(FLAGS) -c $< -o $@ -I includes

			@printf "\33[2K\r\033[0;31;5;110mLoading .\033[37m"
			@sleep 0.5
			@printf "\33[2K\r\033[0;31;5;110mLoading ..\033[37m"
			@sleep 0.5
			@printf "\33[2K\r\033[0;31;5;110mLoading ...\033[37m"
			@sleep 0.5
			@printf "\33[2K\r\033[0;31;5;110mLoading ....\033[37m"

clean:
			@$(MAKE) clean -C libft
			@$(RM) $(OBJ)
	@echo "\033[2K\033[0;38;5;121m\n[$(NAME)] is clean\n"

fclean: 	clean
			@$(RM) $(NAME)
			@$(RM) libft/*.a

re: 		fclean all

.PHONY: 	re fclean clean all
