# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 10:03:21 by bel-kala          #+#    #+#              #
#    Updated: 2023/10/20 10:03:22 by bel-kala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 

NAME = ScavTrap

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp ClapTrap.cpp ScavTrap.cpp

OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all