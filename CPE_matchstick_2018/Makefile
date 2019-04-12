##
## EPITECH PROJECT, 2018
## garysoko
## File description:
## garysoko
##
NAME	= 	matchstick

SRC	=	main.c \
		draw.c\
		info_console.c\
		my_get_nbr.c\
		my_putchar.c\
		my_put_nbr.c\
		my_putstr.c\
		my_put_nbr_octal.c\
		my_put_nbr_binary.c\
		my_put_nbr_hexa.c\
		my_put_nbr_hexa_carac.c\
		my_printf.c\


CFLAGS	+=	-Wall -Wextra 

OBJ	=	$(SRC:.c=.o)

GCC	=	gcc -o

RM	=	rm -f

ASUPR2	=	matchstick

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(ASUPR2)

re:	fclean all

.PHONY: all clean fclean re
