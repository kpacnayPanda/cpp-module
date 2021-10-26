HEADERS = ClapTrap.hpp

SRCS = main.cpp ClapTrap.cpp

FLAGS = -g -Wall -Wextra -Werror

OBJS = $(SRCS:.cpp=.o)

NAME = trap

all: $(NAME)

.cpp.o:
	clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all $(NAME) fclean re
