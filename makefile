NAME = push_swap

INCLUDES = -I ./includes
FILES = push_swap_tools.c memory_tools.c push_swap.c error_handler.c \
		validation.c sort_utils.c swap_utils.c push_utils.c rotate_utils.c \
		rrotate_utils.c stack_utils.c push_swap_utils.c find_tools.c \
		sort_utils_m.c sort_utils_m2.c print_tools.c
SRC = $(FILES)
SRC_PATH = ./src/mandatory/
OBJECTS = $(SRC:%.c=%.o)
SRC_ALL = $(addprefix $(SRC_PATH), $(FILES))

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES) -g #-fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -I. -c $<

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re