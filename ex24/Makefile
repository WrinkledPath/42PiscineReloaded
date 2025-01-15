CODEDIRS = ./srcs/
INCDIRS = ./includes/
LIB = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra

CFILES = $(wildcard $(CODEDIRS)*.c)
OBJS = $(CFILES:$(CODEDIRS)%.c=$(CODEDIRS)%.o)

# Debugging information
$(info CFILES: $(CFILES))
$(info OBJS: $(OBJS))

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $@ $^

$(CODEDIRS)%.o : $(CODEDIRS)%.c
	$(CC) $(FLAGS) -I$(INCDIRS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all

