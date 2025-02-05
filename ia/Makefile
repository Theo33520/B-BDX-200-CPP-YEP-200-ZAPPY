##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC = 	src/Main.cpp

OBJ = $(SRC:.cpp=.o)


NAME = ia

DEBUG = -g3

CPPFLAGS = -I./includes -Wall -Wextra


CXX = g++


all: $(NAME)


$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)  $(LIBS)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)


re: fclean all


debug: $(OBJ)
	$(CXX) -o $(NAME) $(OBJ) $(DEBUG)  $(LIBS)


tests_run: $(OBJ_TEST)
	$(CC) -o $(NAME1) $(OBJ_TEST) -lcriterion --coverage

.PHONY: all clean fclean re debug tests_run