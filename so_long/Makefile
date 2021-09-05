
INC=%%%%

NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLIB = $(INC)/../minilibx-linux
INCLUDE = ./include

FILES = main.c \
		check_File.c \
		./srcs/ft_strcmp.c \
		columns.c \
		./gnl/get_next_line.c \
		./gnl/get_next_line_utils.c \
		this_Read.c \




LFLAGS = -L.. -lmlx -L$(INCLIB) -lXext -lX11 -lm

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -I $(INCLUDE) -o $(NAME) $(FILES) $(LFLAGS)

clean:
		$(RM) $(OBJS)

fclean:
		${RM} ${NAME} ${OBJS}

re:		fclean all


.PHONY: clean fclean all re
