# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 13:26:21 by bel-kala          #+#    #+#              #
#    Updated: 2023/10/06 09:55:51 by bel-kala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

NAME = PhoneBook

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp PhoneBook.cpp Contact.cpp

OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Contact.hpp PhoneBook.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all