##
## EPITECH PROJECT, 2020
## create sfml libraries
## File description:
## Makefile
##

SRC = create_audio_source.c	\
	destroy_audio_source.c	\
	set_audio_volume.c

OBJ = $(SRC:.c=.o)

HEADER = my_audio.h

HEADER_STRUCTURE = my_audio_structure.h

NAME = libmy_audio.a

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