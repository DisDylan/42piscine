gcc -c -Wall -Wextra -Werror *.c
ar r libft.a *.o
ranlib libft.a
rm *.o
