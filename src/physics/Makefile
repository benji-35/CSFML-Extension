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

PATH_HEADER = ../../includes/

PATH_LIBS = ../../includes/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(HEADER) $(PATH_HEADER)$(HEADER)
	cp $(HEADER_STRUCTURE) $(PATH_HEADER)$(HEADER_STRUCTURE)
	cp $(NAME) $(PATH_LIBS)$(NAME)

fclean:
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_HEADER)$(HEADER_STRUCTURE)
	rm -f $(PATH_LIBS)$(NAME)
	rm -f $(NAME)

re:	fclean all