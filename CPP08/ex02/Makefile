CC = c++ 

NAME = MutantStack

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp 
OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

%.o: %.cpp MutantStack.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all