#!/bin/sh
# Exit immediately if any command fails
set -e

# Library name
LIB_NAME="libft.a"

# List of source files (without the .c extension) to be compiled
files="ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp"

# Check if all source files exist
for f in $files; do
	if [ ! -f "$f.c" ]; then
		echo "Error: Source file $f.c not found."
		exit 1
	fi
done

echo "Compiling object files..."
# Compile each source file into an object file
for f in $files; do
	cc -Wall -Wextra -Werror -c $f.c -o $f.o
done

echo "Creating static library..."
# Create or update the static library
ar ruv "$LIB_NAME" $(for f in $files; do echo $f.o; done)

echo "Indexing static library..."
# Index the archive
ranlib "$LIB_NAME"

echo "Library $LIB_NAME successfully created."
