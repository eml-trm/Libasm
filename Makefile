CC = ~/.brew/Cellar/nasm/2.11.06/bin/nasm
FLAGS = -f macho64
HEADER = includes/
SRCDIR = srcs/
NAME = libfts.a

SRC = ft_bzero.s

O_FILES = $(SRC:.s=.o)

STATE = Updated

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(O_FILES)
	ranlib $(NAME)
	echo "\033[3;32m$(NAME) Successfully $(STATE)\033[0m"

%.o: $(SRCDIR)%.s
	$(CC) $(FLAGS) $< -o $@
	ld $@ -macosx_version_min 10.8 -lSystem
	ar -rcs $(NAME) $@

clean:
	rm -f $(O_FILES)

fclean: clean
	$(eval STATE = Created)
	rm -f $(NAME)

re: fclean all
