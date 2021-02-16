##
## EPITECH PROJECT, 2021
## create sfml libraries
## File description:
## Makefile
##

NAME = test

SRC = main.c

INCLUDES = -I includes

LIBS = -L libs -lmy_audio -lmy_button -lmy_gameobject	\
	-lmy_list -lmy -lmyprintf -lmy_physics -lmy_window

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