##
## EPITECH PROJECT, 2020
## create sfml libraries
## File description:
## Makefile
##

SRC = create_window.c	\
	destroy_window.c	\
	display_window.c	\
	destroy_background.c	\
	create_background.c	\
	background_speed.c	\
	draw_background.c

OBJ = $(SRC:.c=.o)

HEADER = my_window.h

HEADER_STRUCTURE = my_window_structures.h

HEADER_BG_STRUCTURE = background_structure.h

HEADER_BG = my_background.h

PATH_HEADER = ../../includes/

PATH_LIBS = ../../libs/

NAME = libmy_window.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(NAME) $(PATH_LIBS)$(NAME)
	cp $(HEADER) $(PATH_HEADER)$(HEADER)
	cp $(HEADER_STRUCTURE) $(PATH_HEADER)$(HEADER_STRUCTURE)
	cp $(HEADER_BG_STRUCTURE) $(PATH_HEADER)$(HEADER_BG_STRUCTURE)
	cp $(HEADER_BG) $(PATH_HEADER)$(HEADER_BG)

fclean:
	rm -f $(NAME)
	rm -f $(PATH_LIBS)$(NAME)
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_HEADER)$(HEADER_STRUCTURE)
	rm -f $(PATH_HEADER)$(HEADER_BG_STRUCTURE)
	rm -f $(PATH_HEADER)$(HEADER_BG)

re:	fclean all