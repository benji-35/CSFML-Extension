##
## EPITECH PROJECT, 2021
## create sfml libraries
## File description:
## Makefile
##

NAME = test

SRC = main.c	\
	my_window_drawing.c	\
	button_interract.c

INCLUDES = -I includes

LIBS = -l csfml-graphics -l csfml-audio -l csfml-system \
	-L libs/ -lmy_list -lmy_window -lmy_button -lmy_audio -lmy -lmy_gameobject -lmy_physics -lmyprint

EXTRA = -g -W -Werror

all: $(NAME)

$(NAME):
	$(MAKE) -C src/list
	$(MAKE) -C src/audio
	$(MAKE) -C src/game_object
	$(MAKE) -C src/buttons
	$(MAKE) -C src/my
	$(MAKE) -C src/my_printf
	$(MAKE) -C src/physics
	$(MAKE) -C src/window
	gcc -o $(NAME) $(SRC) $(LIBS) $(INCLUDES) $(EXTRA)

fclean:
	$(MAKE) fclean -C src/list
	$(MAKE) fclean -C src/audio
	$(MAKE) fclean -C src/game_object
	$(MAKE) fclean -C src/buttons
	$(MAKE) fclean -C src/my
	$(MAKE) fclean -C src/my_printf
	$(MAKE) fclean -C src/physics
	$(MAKE) fclean -C src/window
	rm -f $(NAME)

re:	fclean all