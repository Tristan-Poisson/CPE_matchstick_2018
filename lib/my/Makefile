##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile libmy
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)

re: fclean all


.PHONY:	all clean fclean re