# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 10:37:40 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/08 15:48:36 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  main.cpp Span.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = span

all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all