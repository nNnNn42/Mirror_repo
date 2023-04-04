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

all: clean $(TARGET_BINARY)

$(TARGET_BINARY) : $(OBJ)
	$(CC) $(OBJ) $(LIBS) -o $(TARGET_BINARY)

tests_run: $(OBJ)
	$(CC) $(OBJ) unit_tests/tests_run.c $(LIBS) -o unit_tests/tests_run
	./unit_tests/tests_run

clean:
	rm -rf $(OBJ)
	rm -rf *.gc*
	rm -rf unit_tests/tests_run
	rm -rf unit_tests/*.o

fclean : clean
	rm -rf $(TARGET_BINARY)


re : fclean all
	rm -rf $(OBJ)

