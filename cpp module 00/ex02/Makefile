# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 07:55:44 by slee2             #+#    #+#              #
#    Updated: 2021/10/10 02:19:49 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRCS = tests.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

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