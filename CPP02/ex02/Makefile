# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 15:27:25 by bel-kala          #+#    #+#              #
#    Updated: 2023/10/13 15:27:27 by bel-kala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 

NAME = Fixed

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp Fixed.cpp

OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all