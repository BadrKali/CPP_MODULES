CC = c++ 

NAME = serializer

CPFLAGS = #-Wall -Wextra -Werror -std=c++98 

CPFILES = main.cpp A.cpp B.cpp C.cpp Base.cpp
OFILES = $(CPFILES:.cpp=.o)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp A.hpp B.hpp C.hpp Base.hpp
	$(CC) $(CPFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all