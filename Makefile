##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

CFLAGS = -W -Wall -Wextra -Werror

CC = gcc

FILES = my_chocolatine.c

OBJ = $(FILES:.c=.o)

TARGET_BINARY = chocolatine

LIBS = -lcriterion

all: clean $(TARGET_BINARY)

$(TARGET_BINARY) : $(OBJ)
	$(CC) $(OBJ) $(LIBS) -o $(TARGET_BINARY)

tests_run: $(OBJ)
	$(CC) $(OBJ) tests/*.c $(LIBS) -o unit_tests
	./unit_tests

clean:
	rm -rf $(OBJ)
	rm -rf *.gc*
	rm -rf unit_tests

fclean : clean
	rm -rf $(TARGET_BINARY)


re : fclean all
	rm -rf $(OBJ)

