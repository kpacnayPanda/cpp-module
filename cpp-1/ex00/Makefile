NAME = zombie

SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

HEADERS = Zombie.hpp

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

all: $(NAME)

.c.o: $(HEADERS)
	clang++ $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) $(HEADERS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all $(NAME) fclean re
