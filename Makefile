# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daelee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/29 20:23:48 by daelee            #+#    #+#              #
#    Updated: 2020/04/20 23:23:56 by daelee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
TEST = ft_printf.out
SRCS = ft_printf.c \
       srcs/
	   libft/



OBJS =
CC = gcc
RM = rm -f
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = includes/

all: ${NAME}

${NAME}: ${OBJS}

${OBJS}: ${SRCS} ${INCLUDES}
	${CC} -c ${SRCS}
	${AR} ${NAME} ${OBJS}


test:
	${CC} -g -L. -lftprintf ${SRCS} main.c -o ${TEST}


clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all
