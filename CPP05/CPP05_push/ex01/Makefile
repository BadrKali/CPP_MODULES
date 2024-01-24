# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 15:48:48 by bel-kala          #+#    #+#              #
#    Updated: 2023/11/18 16:43:20 by bel-kala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

NAME = Form

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp Bureaucrat.cpp Form.cpp
OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all