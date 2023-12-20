
CC = c++ 

NAME = convert

CPFLAGS = #-Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp ScalarConverter.cpp
OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp ScalarConverter.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all