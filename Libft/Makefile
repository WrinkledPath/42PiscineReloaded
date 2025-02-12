# Variables
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
SRCS    = $(wildcard src/*.c)            # Source files in src directory
MAIN_SRCS = $(wildcard main/*_main.c)    # Main files in main directory
EXES    = $(patsubst src/%.c,%,$(basename $(notdir $(SRCS))))   # Executable names

# Default target
all: $(EXES)

# Rule to build each executable
%: src/%.c main/%_main.c
	@echo "Compiling your program..."
	@$(CC) $(CFLAGS) $^ -o $@

# Clean up executables
clean:
	@echo "Removing Executables..."
	@rm -f $(EXES)

# Remove executables and object files
fclean: clean
	@echo "Deleting all Object Files..."
	@rm -f $(EXES)

# Rebuild everything
re: fclean all
	@echo "Deleting and building everything..."

