# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 12:46:34 by dpoinsu           #+#    #+#              #
#    Updated: 2020/07/20 14:45:54 by dpoinsu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

HEADER	= includes

GCC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:	
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
