FLAG = -Wall -Wextra -Werror

CC = gcc

NAME = libft.a

SOURCE = srcs/ft_bzero.c \
		srcs/ft_calloc.c \
		srcs/ft_isalnum.c \
		srcs/ft_isalpha.c \
		srcs/ft_isascii.c \
		srcs/ft_isdigit.c \
		srcs/ft_isprint.c \
		srcs/ft_memcpy.c \
		srcs/ft_memset.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_putstr_fd.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_strchr.c \
		srcs/ft_strlen.c \
		srcs/ft_substr.c \
		srcs/ft_tolower.c \
		srcs/ft_toupper.c \
		srcs/ft_strdup.c \
		srcs/ft_striteri.c \
		srcs/ft_memchr.c \
		srcs/ft_atoi.c \
		srcs/ft_latoi.c \
		srcs/ft_memcmp.c \
		srcs/ft_strjoin.c \
		srcs/ft_memmove.c \
		srcs/ft_strrchr.c \
		srcs/ft_strlcat.c \
		srcs/ft_strlcpy.c \
		srcs/ft_strncmp.c \
		srcs/ft_strnstr.c \
		srcs/ft_itoa.c \
		srcs/ft_strmapi.c \
		srcs/ft_strtrim.c \
		srcs/ft_split.c \
		srcs/ft_lstadd_back.c \
		srcs/ft_lstadd_front.c \
		srcs/ft_lstclear.c \
		srcs/ft_lstdelone.c \
		srcs/ft_lstiter.c \
		srcs/ft_lstlast.c \
		srcs/ft_lstmap.c \
		srcs/ft_lstnew.c \
		srcs/ft_lstsize.c \
		srcs/get_next_line.c \
		srcs/ft_printf_print_char.c \
		srcs/ft_printf_print_hex.c \
		srcs/ft_printf_print_int.c \
		srcs/ft_printf_print_pointer_address.c \
		srcs/ft_printf_print_str.c \
		srcs/ft_printf_print_u_int.c \
		srcs/ft_printf_utils.c \
		srcs/ft_printf.c \
		srcs/ft_strndup.c \
		srcs/ft_lstlen.c \
		srcs/ft_tabcpy.c \

OBJECT = $(SOURCE:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

$(NAME):	$(OBJECT)
					ar rc  $(NAME) $(OBJECT)
					ranlib $(NAME)
clean:				
					rm -f $(OBJECT)
fclean:		clean	
					rm -f $(NAME)

re:			fclean all