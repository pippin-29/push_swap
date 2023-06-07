NAME    = push_swap
ARCHIVE = libft/libft.a
LIBFT   = libft/ 
CC      = gcc
FLAGS   = -Wextra -Werror -Wall
X86     = arch -x86_64

SRC     = srcs/exit.c \
			srcs/main.c \
			srcs/program.c \
			srcs/push.c \
			srcs/rev_rotate.c \
			srcs/rotate.c \
			srcs/setup.c \
			srcs/sort_2_5.c \
			srcs/swap.c \
			srcs/utils.c \
			srcs/utils_2.c
			
			
COMPILE = $(CC) $(FLAGS) $(SRC) $(ARCHIVE) -o $(NAME)

$(NAME): all

all:
				$(X86) make -C $(LIBFT)
				$(X86) $(COMPILE)

clean:

fclean: clean
				make fclean -C $(LIBFT)
				rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
#-g -fsanitize=address