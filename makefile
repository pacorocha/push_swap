NAME = push_swap
LIBFT = libft.a

LIBFT_PATH = ./libs/libft/
INCLUDES = -I ./includes
FILES = push_swap.c error_handler.c validation.c sort_utils.c swap_utils.c \
		push_utils.c shift_utils.c rotate_utils.c rrotate_utils.c stack_utils.c

SRC = $(FILES)
OBJECTS = $(SRC:%.c=%.o)
SRC_ALL = $(addprefix ./src/mandatory/, $(FILES))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS)
	make --no-print-directory -C $(LIBFT_PATH) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) -I $(HEADER) -L $(LIBFT_PATH)$(LIBFT)

$(OBJECTS): $(SRC_ALL)
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRC_ALL)

clean:
	make --no-print-directory -C $(LIBFT_PATH) fclean
	$(RM) $(OBJECTS)

fclean: clean
	echo cleaning!
	make --no-print-directory -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)
	echo done!

re: fclean all

.PHONY: all clean fclean re