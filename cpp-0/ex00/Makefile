NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	clang++ $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all $(NAME) fclean re
