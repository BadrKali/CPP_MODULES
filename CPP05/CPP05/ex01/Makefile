
CC = c++ 

NAME = Bureaucrat

CPFLAGS = #-Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp Bureaucrat.cpp Form.cpp
OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp  Bureaucrat.hpp Form.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all