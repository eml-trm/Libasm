# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/22 18:04:37 by tmerlier          #+#    #+#              #
#    Updated: 2015/03/19 13:53:09 by tmerlier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# option

CC = nasm
FLAGS = -f macho64

# path

HEADER = includes/
SRCDIR = srcs/

# Files

NAME = libfts.a

SRC = bzero.s

O_FILES = $(SRC:.s=.o)

STATE = Updated

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(O_FILES)
	@ranlib $(NAME)
	@echo "\033[3;32m$(NAME) Successfully $(STATE)\033[0m"

%.o: $(SRCDIR)%.s
	@$(CC) $< -o $@
	@ ld $@ -macosx_version_min 10.8 -lSystem
	@ar -rcs $(NAME) $@

clean:
	@rm -f $(O_FILES)

fclean: clean
	$(eval STATE = Created)
	@rm -f $(NAME)

re: fclean all
