# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atemunov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 12:35:02 by atemunov          #+#    #+#              #
#    Updated: 2018/02/19 12:52:02 by atemunov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

STRINGS= strings/ft_isalpha \
	 	 strings/ft_toupper \
		 strings/ft_tolower \
		 strings/ft_isprint \
		 strings/ft_isdigit \
		 strings/ft_isascii \
		 strings/ft_isalnum \
		 strings/ft_isspace \
		 strings/ft_strlen \
		 strings/ft_strdup \
		 strings/ft_strcpy \
		 strings/ft_strncpy \
		 strings/ft_strcat \
		 strings/ft_strncat \
		 strings/ft_strchr \
		 strings/ft_strrchr \
		 strings/ft_strcmp \
		 strings/ft_strncmp \
		 strings/ft_strnew \
		 strings/ft_strdel \
		 strings/ft_strclr \
		 strings/ft_strequ \
		 strings/ft_strnequ \
		 strings/ft_strsub \
		 strings/ft_atoi \
		 strings/ft_bzero \

MEMORY= memory/ft_memcmp \
		memory/ft_memcpy \
		memory/ft_memccpy \
        memory/ft_memchr \
        memory/ft_memalloc \
        memory/ft_memset \
        memory/ft_memdel \
		memory/ft_memmove \
	
OUTPUT= output/ft_putchar \
		output/ft_putchar_fd \
		output/ft_putstr \
		output/ft_putstr_fd \
		output/ft_putnbr \output/print_bits \
	

SRCS= 	$(addprefix srcs/, $(STRINGS) $(MEMORY) $(OUTPUT))

CFILES= $(addsuffix .c, $(SRCS))

OFILES= $(addsuffix .o, $(SRCS))

OBJS= $(addsuffix .o, $(notdir $(SRCS)))

INCLUDE= -I ../libft

LDFLAGS = -L.

LDLIBS = -lft

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(OFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

$(OBJ): $(CFILES)
	$(CC) $(INCLUDE) $(CFLAGS) $(CFILES) -c

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: make all clean fclean re
	/* I used .PHONY to make sure that gnu make will still run \
		even if files called already exist in the directory */
