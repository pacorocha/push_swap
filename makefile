NAME = push_swap
LIBFT_PATH = ./libs/libft/
LIBFT = $(LIBFT_PATH)libft.a

INCLUDES = -I ./includes
FILES = push_swap.c error_handler.c validation.c sort_utils.c swap_utils.c \
		push_utils.c rotate_utils.c rrotate_utils.c stack_utils.c \
		push_swap_utils.c sort_utils2.c sort_m_utils.c
SRC = $(FILES)
SRC_PATH = ./src/mandatory/
OBJECTS = $(SRC:%.c=%.o)
SRC_ALL = $(addprefix $(SRC_PATH), $(FILES))

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES) -g #-fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS)
	make --no-print-directory -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) -o $(NAME)

%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -I. -c $<

clean:
	make --no-print-directory -C $(LIBFT_PATH) clean
	$(RM) $(OBJECTS)

fclean: clean
	make --no-print-directory -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re