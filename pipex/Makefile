# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 10:33:13 by seujeon           #+#    #+#              #
#    Updated: 2022/02/21 10:51:20 by seujeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc

LIB = libft

HEAD = -I includes

FLAG = -Wall -Wextra -Werror $(HEAD)

SRCS = srcs/pipex.c \
	srcs/error/error.c \
	srcs/init/init.c \
	srcs/init/init_info.c \
	srcs/free/free.c \
	srcs/run/run_program.c \
	srcs/run/pipe_utils.c \
	srcs/validation/invalid.c

OBJS = $(SRCS:.c=.o)

.c.o :
	$(CC) $(FLAG) -c $< -o $(<:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(RM) $(BONUS_OBJS)
	make -C $(LIB)
	mv $(LIB)/libft.a libft.a
	$(CC) $(FLAG) $(OBJS) libft.a -o $(NAME)

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	make fclean -C $(LIB)
	$(RM) $(NAME) libft.a

re : fclean all