##
## EPITECH PROJECT, 2019
## Makefile matchstick
## File description:
## compile programe
##

NAME	=	matchstick

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

LIB	=	-lmy -L./lib/my

all: $(NAME)

$(NAME): $(OBJ) lib
	gcc -o $(NAME) $(OBJ) $(LIB)

lib:
	make -C lib/my

clean:
	rm -f $(OBJ)
	make -C	lib/my clean

fclean:	clean
	rm -f $(NAME)
	make -C	lib/my fclean

re: fclean all

.PHONY: all lib clean fclean re
