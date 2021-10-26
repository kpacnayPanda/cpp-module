HEADERS = Fixed.hpp

SRCS = main.cpp Fixed.cpp

FLAGS = -g -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

NAME = fixed

all: $(NAME)

.cpp.o:
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all $(NAME) fclean re
