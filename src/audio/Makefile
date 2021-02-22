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

PATH_LIBS = ../../libs/

PATH_HEADER = ../../includes/

NAME = libmy_audio.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(NAME) $(PATH_LIBS)$(NAME)
	cp $(HEADER) $(PATH_HEADER)$(HEADER)
	cp $(HEADER_STRUCTURE) $(PATH_HEADER)$(HEADER_STRUCTURE)

fclean:
	rm -f $(NAME)
	rm -f $(PATH_HEADER)$(HEADER_STRUCTURE)
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_LIBS)$(NAME)

re:	fclean all