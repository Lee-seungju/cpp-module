# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 07:55:44 by slee2             #+#    #+#              #
#    Updated: 2021/10/10 05:16:38 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
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