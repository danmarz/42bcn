# Source and target dirs

SRC_DIR := srcs
OBJ_DIR := srcs

# Compiler and flags
CC := cc
CPPFLAGS := -Iincludes
CFLAGS   := -Wall -Wextra -Werror

# Library and object files
LIB := libft.a
FILES := ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp
SRC := $(FILES:%=$(SRC_DIR)/%.c)
OBJ_FILES := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

.PHONY: all clean fclean re

# Default target: Build the library
all: $(LIB)

# Rule to create the static library
$(LIB): $(OBJ_FILES)
	ar ruv $(LIB) $(OBJ_FILES)
	ranlib $(LIB)

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJ_FILES)

# Clean up object files and the library
fclean: clean
	rm -f $(LIB)

# Rebuild everything from scratch
re: fclean all
