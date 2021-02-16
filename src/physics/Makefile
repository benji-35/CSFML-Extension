##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##

SRC = create_physics.c	\
	destroy_physics.c

OBJ = $(SRC:.c=.o)

HEADER = physics.h
HEADER_STRUCTURE = physics_structre.h

NAME = libmy_physics.a

PATH_LIB = ../../libs/

PATH_HEADER = ../../includes/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(HEADER) $(PATH_HEADER)$(HEADER)
	cp $(HEADER_STRUCTURE) $(PATH_HEADER)$(HEADER_STRUCTURE)
	cp $(NAME) $(PATH_LIB)$(NAME)

fclean:
	rm -f $(NAME)
	rm -f $(PATH_LIB)$(NAME)
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_HEADER)$(HEADER_STRUCTURE)

re:	fclean all