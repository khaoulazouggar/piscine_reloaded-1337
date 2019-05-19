NAME = ft_display_file
CFLAGS = -Wall -Wextra -Werror
CC = gcc $(CFLAGS)
SRC =$(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(SRC))

all: $(OBJ)
	$(CC) -o $(NAME) $^

%.o : %.c
	$(CC) -c $(SRC) -o $@ 

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
