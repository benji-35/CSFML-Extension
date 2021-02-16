##
## EPITECH PROJECT, 2021
## myprintflib
## File description:
## Makefile
##

SRC =	my_getnbr.c	\
		myprintf.c	\
		check_flag.c	\
		add_char_str.c	\
		display_int.c	\
		my_putstr.c	\
		empty_str.c	\
		display_float.c	\
		malloc_str.c	\
		concat_str.c	\
		int_to_hex.c	\
		power_number.c	\
		int_to_binary.c	\
		divisible.c	\
		malloc_str_from_size.c	\
		splitstr_from_end.c	\
		free_splitted.c	\
		start_with.c	\
		display_long.c	\
		display_text.c	\
		display_base.c	\
		init_flags.c	\
		inverse_str.c	\
		delete_many_o.c

OBJ = $(SRC:.c=.o)

NAME = libmyprintf.a

HEADER = my_printf.h

PATH_HEADER = ../../includes/

PATH_LIB = ../../libs/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(NAME) $(PATH_LIB)
	cp $(HEADER) $(PATH_HEADER)

fclean:
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_LIB)$(NAME)