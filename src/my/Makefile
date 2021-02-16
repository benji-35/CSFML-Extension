##
## EPITECH PROJECT, 2020
## create sfml libraries
## File description:
## Makefile
##

SRC = can_openread_file.c	\
	read_file.c	\
	destroy_map.c	\
	read_to_map.c	\
	int_to_char.c	\
	add_in_str.c	\
	copy_str.c

OBJ = $(SRC:.c=.o)

HEADER = my.h

NAME = libmy.a

PATH_HEADER = ../../includes/

PATH_LIBS = ../../libs/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(HEADER) $(PATH_HEADER)$(HEADER)
	cp $(NAME) $(PATH_LIBS)$(NAME)

fclean:
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_LIBS)$(NAME)
	rm -f $(NAME)

re:	fclean all