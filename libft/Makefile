NAME = libft.a

CC = gcc

SRCS = $(addprefix srcs/, $(STRINGS) $(MEMORY) $(OUTPUT))

STRINGS= strings/ft_isalpha.c \
	strings/ft_toupper.c \
	strings/ft_tolower.c \
	strings/ft_isprint.c \
	strings/ft_isdigit.c \
	strings/ft_isascii.c \
	strings/ft_isalnum.c \
	strings/ft_isspace.c \
	strings/ft_strlen.c \
	strings/ft_strdup.c \
	strings/ft_strcpy.c \
	strings/ft_strcat.c \
	strings/ft_strncat.c \
	strings/ft_strchr.c \
	strings/ft_strrchr.c \
	strings/ft_strcmp.c \
	strings/ft_strncmp.c \
	strings/ft_strnew.c \
	strings/ft_strdel.c \
	strings/ft_strclr.c \
	strings/ft_strequ.c \
	strings/ft_strnequ.c \
	strings/ft_strsub.c \
	strings/ft_atoi.c \

MEMORY= memory/ft_memcmp.c \
        memory/ft_memcpy.c \
        memory/ft_memccpy.c \
        memory/ft_memchr.c \
        memory/ft_memalloc.c \
        memory/ft_memset.c \
        memory/ft_memdel.c \
	
OUTPUT= output/ft_putchar.c \
	output/ft_putchar_fd.c \
	output/ft_putstr.c \
	output/ft_putstr_fd.c \
	output/ft_putnbr.c \
	output/print_bits.c \
	

OBJS = $(SRCS:.c=.o)

INCLUDE = -I includes/

LDFLAGS = -L.

LDLIBS = -lft

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS) $(INCLUDE)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: make all clean fclean re
	/* I used .PHONY to make sure that gnu make will still run \
		even if files called already exist in the directory */
