# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 20:21:37 by skomyshe          #+#    #+#              #
#    Updated: 2026/01/16 21:54:51 by skomyshe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = raplace
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp replace.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re