# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 13:35:57 by bel-kala          #+#    #+#              #
#    Updated: 2023/10/06 09:56:20 by bel-kala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

NAME = megaphone

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp

OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all