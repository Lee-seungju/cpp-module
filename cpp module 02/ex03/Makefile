# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 07:55:44 by slee2             #+#    #+#              #
#    Updated: 2021/10/09 11:42:30 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re :
	make fclean
	make all

.PHONY :
	all
	clean
	fclean
	re