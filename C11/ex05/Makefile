# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/22 16:00:16 by dpoinsu           #+#    #+#              #
#    Updated: 2020/07/22 16:28:10 by dpoinsu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c

NAME	= do-op

GCC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:
			${GCC} -o ${NAME} ${CFLAGS} ${SRCS}

all:		${NAME}
   				
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
