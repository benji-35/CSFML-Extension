SRC =	sources/display_stdargs.c	\
		sources/sum_numbers.c	\
		sources/calc_bin.c	\
		sources/calc_hexa.c	\
		sources/simple_maths.c	\
		sources/print_str.c	\
		sources/calc_octal.c	\
		sources/shorter_array.c	\
		sum_strings_length.c	\
		print_infos.c	\
		sources/getnbr.c	\
		my_printf.c

OBJ = $(SRC:.c=.o)

NAME = libmyprint.a

HEADER_PRINTF =	my_printf.h

HEADER_INFO =	infos.h

PATH_HEADER = ../../includes/

PATH_LIBS = ../../libs/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) $(PATH_LIBS)$(NAME)
	cp $(HEADER_INFO) $(PATH_HEADER)$(HEADER_INFO)
	cp $(HEADER_PRINTF) $(PATH_HEADER)$(HEADER_PRINTF)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(PATH_LIBS)$(NAME)
	rm -f $(PATH_HEADER)$(HEADER_INFO)
	rm -f $(PATH_HEADER)$(HEADER_PRINTF)

re:	fclean $(NAME)

mr_clean:
	find -name "*.o" -delete
	find -name "*.a" -delete
	find -name "a.out" -delete
	find -name "*~" -delete
	find -name "#*#" -delete