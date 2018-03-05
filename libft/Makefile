# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atemunov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 12:35:02 by atemunov          #+#    #+#              #
#    Updated: 2018/03/05 14:32:40 by atemunov         ###   ########.fr        #
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
		 strings/ft_strlcat \
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
		 strings/ft_strstr \
		 strings/ft_strnstr \
		 strings/ft_striter \
		 strings/ft_striteri \
		 strings/ft_strmap \
		 strings/ft_strmapi \
		 strings/ft_strtrim \
		 strings/ft_strsplit \
		 strings/ft_strjoin \
		 strings/ft_atoi \
		 strings/ft_itoa \
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
		output/ft_putnbr \
		output/ft_putnbr_fd \
		output/print_bits \
		output/ft_putendl \
		output/ft_putendl_fd \

LISTS= lists/ft_lstnew \
		lists/ft_lstdelone \
		lists/ft_lstdel \
		lists/ft_lstadd \
		lists/ft_lstnew \
		lists/ft_lstiter \
	

SRCS= 	$(addprefix srcs/, $(STRINGS) $(MEMORY) $(OUTPUT) $(LISTS))

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
