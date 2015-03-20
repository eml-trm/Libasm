cc = gcc
ASM = nasm
ASMFLAGS = -f macho64
FLAGS = -Wall -Wextra -Werror
HEADER = includes/
SRCDIR = srcs/
NAME = libfts.a

SRC = ft_isdigit.s \
	  ft_isalpha.s \
	  ft_isascii.s \
	  ft_isalnum.s \
	  ft_toupper.s \
	  ft_tolower.s \
	  ft_strlen.s

O_FILES = $(SRC:.s=.o)

STATE = Updated

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(O_FILES)
	@ranlib $(NAME)
	@echo "\033[3;32m$(NAME) Successfully $(STATE)\033[0m"

%.o: $(SRCDIR)%.s
	@$(ASM) $(ASMFLAGS) $< -o $@ -I $(HEADER)
	# ld $@ -macosx_version_min 10.8 -lSystem
	@ar -rcs $(NAME) $@

test: $(NAME)
	@$(CC) $(FLAGS) $< tests/main.c -I $(HEADER)

clean:
	@rm -f $(O_FILES)

fclean: clean
	@$(eval STATE = Created)
	@rm -f $(NAME)

re: fclean all
