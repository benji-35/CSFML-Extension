##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##

SRC = create_animation.c	\
	create_game_object.c	\
	destroy_anim.c	\
	set_anim_line.c	\
	destroy_gameobject.c	\
	show_object.c	\
	set_velocity.c	\
	update_animation.c

OBJ = $(SRC:.c=.o)

HEADER_STRUCTURE = game_object_structure.h

HEADER = my_game_object.h

NAME = libmy_gameobject.a

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

update:
	rm -f ../list/$(HEADER_STRUCTURE)
	cp $(HEADER_STRUCTURE) ../list/$(HEADER_STRUCTURE)