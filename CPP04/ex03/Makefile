# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 15:27:53 by bel-kala          #+#    #+#              #
#    Updated: 2023/11/06 10:14:26 by bel-kala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

NAME = AMateria

CPFLAGS = #-Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp 

OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all