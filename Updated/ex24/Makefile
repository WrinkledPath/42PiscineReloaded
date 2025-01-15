# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ywagner <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 20:46:58 by ywagner           #+#    #+#              #
#    Updated: 2025/01/15 20:47:05 by ywagner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

