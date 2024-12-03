# Compiler to use
CC := cc

# Compiler flags (options passed to the compiler)
CFLAGS := -Iincludes -Wall -Wextra -Werror

# Target executable name
TARGET := ft_tail

#Source dir
SRC_DIR := srcs

# File names
FILES := main ft_atoi ft_strlen ft_strcmp

# Source files
SRCS := $(FILES:%=$(SRC_DIR)/%.c)

# Object files (replace .c with .o)
OBJS := $(SRCS:.c=.o)

# Default rule (first rule, run when typing "make")
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up object files
clean:
	rm -f $(OBJS)

# Rule to clean up everything (object files and the executable)
fclean: clean
	rm -f $(TARGET)
