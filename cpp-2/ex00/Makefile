HEADERS = Fixed.hpp

SRCS = main.cpp Fixed.cpp

FLAGS = -g -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.c=.o)

NAME = fixed

all: $(NAME)

.c.o:
	clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all $(NAME) fclean re
