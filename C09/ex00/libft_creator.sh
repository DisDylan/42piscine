# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoinsu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 12:10:06 by dpoinsu           #+#    #+#              #
#    Updated: 2020/07/20 13:41:33 by dpoinsu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror *.c
ar rc libft.a *.o
ranlib libft.a
rm *.o