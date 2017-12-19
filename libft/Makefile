NAME = libft.a

CC = gcc

SRCS = ft_isalpha.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_isprint.c \
	   ft_isdigit.c \
	   ft_isascii.c \
	   ft_isalnum.c \
	   ft_isspace.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putnbr.c \
	   ft_atoi.c \

OBJS = $(SRCS:.c=.o)

INCLUDE = -I includes/

LDFLAGS = -L.

LDLIBS = -lft

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS) $(INCLUDE)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: make all clean fclean re
	/* I used .PHONY to make sure that gnu make will still run \
		even if files called already exist in the directory
