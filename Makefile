# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sganon <sganon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/29 17:11:57 by sganon            #+#    #+#              #
#    Updated: 2018/09/17 16:11:27 by sganon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror -O3 -fPIC

RM=rm -f

LDFLAGS=-L.

LDLIBS=-lft

HDDIRS=-I includes/

SRC=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_itoa.c\
	ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strstr.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
	ft_putstr_fd.c ft_strchr.c ft_strrchr.c \
	ft_strcmp.c ft_strncmp.c ft_strstr.c ft_strnstr.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isspace.c\
	ft_striter.c ft_striteri.c ft_putendl.c ft_toupper.c ft_tolower.c \
	ft_strsub.c ft_strclr.c ft_memdel.c ft_strnew.c ft_strdel.c \
	ft_strequ.c ft_strnequ.c ft_memalloc.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putchar.c ft_putstr.c ft_putnbr.c ft_putchar_fd.c \
	ft_strsplit.c ft_strjoin.c ft_strtrim.c \
	ft_strmap.c ft_strmapi.c ft_strtrim.c ft_strlcat.c\
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c\
	ft_lstmap.c \

OBJ=$(SRC:.c=.o)

$(NAME): libft.h
		$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
			ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
