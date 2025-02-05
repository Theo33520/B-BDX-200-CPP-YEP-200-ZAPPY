##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

# Sources
SRC = src/main.c \
      src/param.c \
	  src/parser_args.c \
	  src/server.c \

# Object files
OBJ = $(SRC:.c=.o)

# Executable name
NAME = server

# Compiler flags
DEBUG = -g3
CPPFLAGS = -I./includes -Wall -Wextra
CXXFLAGS = $(CPPFLAGS)
CFLAGS = $(CPPFLAGS)

# Compiler
CXX = gcc  # Using gcc for C files (you can change it to g++ if it's for C++)

# Optional libraries for linking (e.g., if you need to link math, pthread, etc.)
LIBS =

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ) $(LIBS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: $(OBJ)
	$(CXX) -o $(NAME) $(OBJ) $(DEBUG) $(LIBS)

# If you plan to use tests with Criterion, define OBJ_TEST and NAME1 here
# tests_run: $(OBJ_TEST)
#	$(CC) -o $(NAME1) $(OBJ_TEST) -lcriterion --coverage

.PHONY: all clean fclean re debug tests_run
