# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 22:41:49 by arnaud            #+#    #+#              #
#    Updated: 2023/10/29 13:03:14 by arnaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = include/
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f
SRC_FILE =	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_itoa.c \
			ft_putendl.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
			
NAME = libft.a
SRC = $(addprefix src/, $(SRC_FILE))
OBJS = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -I./$(INCLUDE) -c $< -o $@

${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS}

all: ${NAME}

clean:                                                                                                                                                                                                                                                                                                                                                                                                                                                
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}

re: fclean all clean re

.PHONY: all clean fclean re
