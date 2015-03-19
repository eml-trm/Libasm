# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/19 13:09:37 by etermeau          #+#    #+#              #
#    Updated: 2015/03/19 13:09:39 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# option

CC = gcc
FLAGS = -Wall -Werror -Wextra

# path

HEADER = includes/
SRCDIR = srcs/

# Files

LIB = libft.a
SRC =

O_FILES = $(SRC:.c=.o)

STATE = Updated

.PHONY: all clean fclean re

all: $(LIB)

$(LIB): $(O_FILES)
    @ranlib $(LIB)

%.o: $(SRCDIR)%.c
    @$(CC) -o $@ $(FLAGS) -I $(HEADER) -c $<
    @ar -rcs $(LIB) $@

clean:
    @rm -f $(O_FILES)

fclean: clean
    $(eval STATE = Created)
    @rm -f $(LIB)

re: fclean all
