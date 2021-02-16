##
## EPITECH PROJECT, 2020
## create sfml libraries
## File description:
## Makefile
##

SRC = add_node.c	\
	find_node.c	\
	free_node.c	\
	str_equality.c	\
	free_data.c	\
	find_data.c	\
	free_list.c	\
	add_list_tag.c	\
	find_all_flags.c	\
	collision_with_object.c	\
	display_all_tag.c	\
	free_list_extrem.c

OBJ = $(SRC:.c=.o)

HEADER = my_list.h

HEADER_STRUCTURE = list_structure.h

NAME = libmy_list.a

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
	rm -f ../buttons/$(HEADER)
	rm -f ../buttons/$(HEADER_STRUCTURE)
	cp $(HEADER_STRUCTURE) ../buttons/$(HEADER_STRUCTURE)
	cp $(HEADER) ../buttons/$(HEADER)