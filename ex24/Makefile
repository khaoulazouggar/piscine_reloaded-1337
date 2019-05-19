
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -Iincludes
CC = gcc $(CFLAGS)
SRCS = $(wildcard srcs/*.c)

all:
	$(CC) -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
