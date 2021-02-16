##
## EPITECH PROJECT, 2020
## create sfml libraries
## File description:
## Makefile
##

SRC = click_button.c	\
		create_button.c	\
		destroy_button.c	\
		over_button.c	\
		size_button.c	\
		show_button.c	\
		set_button_font.c	\
		change_button_pos.c

OBJ = $(SRC:.c=.o)

NAME = libmy_button.a

HEADER = my_buttons.h

HEADER_STRUCTURE = my_buttons_structure.h

PATH_LIB = ../../libs/

PATH_HEADER = ../../includes/

all: $(NAME)

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