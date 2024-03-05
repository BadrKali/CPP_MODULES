CC = c++ 

NAME = Base

CPFLAGS = -Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp Base.cpp A.cpp B.cpp C.cpp
OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all