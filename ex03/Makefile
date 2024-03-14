SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = ${SRC:.cpp=.o}

NAME = DiamondTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) -r $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
