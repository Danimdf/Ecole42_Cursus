
INC=%%%%

NAME = so_long
CC = clang
CFLAGS = -Wall -Wextra -Werror

INCLIB = $(INC)/../minilibx-linux
INCLUDE = ./include

FILES = main.c \
		check_File.c \
		./utils/ft_strcmp.c \
		./utils/ft_memset.c \
		columns.c \
		valid_Map.c \
		ft_valid.c \
		ft_count_line.c \
		./gnl/get_next_line.c \
		./gnl/get_next_line_utils.c \
		this_Read.c \




LFLAGS = -L.. -lmlx -L$(INCLIB) -lXext -lX11 -lm

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -g $(CFLAGS) -I $(INCLUDE) -o $(NAME) $(FILES) $(LFLAGS)

clean:
		$(RM) $(OBJS)

fclean:
		${RM} ${NAME} ${OBJS}

re:		fclean all


.PHONY: clean fclean all re
