# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 22:41:49 by arnaud            #+#    #+#              #
#    Updated: 2023/09/01 09:57:02 by arnaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = include/
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f
SRC_FILE =	ft_bzero.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c
			ft_strdup.c \
		 	ft_strlen.c \

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