
INC=%%%%

NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLIB = $(INC)/../minilibx-linux

FILES = main.c \
		check_File.c \
		./srcs/ft_strcmp.c \



LFLAGS = -L.. -lmlx -L$(INCLIB) -lXext -lX11 -lm

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(FILES) $(LFLAGS)

clean:
		$(RM) $(OBJS)

fclean:
		${RM} ${NAME} ${OBJS}

re:		fclean all


.PHONY: clean fclean all re
