##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for my_navy project
##



SRC	=	lib/my/my_compute_power_rec.c	\
		lib/my/my_compute_square_root.c	\
		lib/my/my_isneg.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strcat.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strncat.c	\
		lib/my/my_strncpy.c	\
		lib/my/my_swap.c	\
		lib/my/my_getnbr.c	\
		src/main.c	\
		src/read.c	\
		src/ini.c	\
		src/errors.c	\
		src/tools.c	\
		src/game.c	\
		src/engine.c 	\
		src/free.c	\
		src/player.c \
		src/hit_or_missed.c \
		src/signals_utils.c 	\
		src/display.c

OBJ	=	$(SRC:.c=.o)

NAME	=	navy.a

CFLAGS = -W -Wall -Wextra -Wshadow

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			gcc -o navy navy.a $(CFLAGS)  -I./include

clean:
		rm -f $(OBJ)
		rm -f navy
		rm -f navy.a

fclean:	clean
		rm -f $(NAME)

re:	fclean all
