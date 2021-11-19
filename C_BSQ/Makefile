NAME = bsq
CC = gcc
CFLAGS = -Werror -Wall -Wextra
NORM = norminette
SRCDIR = ./src
SRC = main.c read.c ft_string.c ft_atoi.c ft_find_square.c
OBJ = $(SRC:.c=.o)
VPATH = $(SRCDIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
