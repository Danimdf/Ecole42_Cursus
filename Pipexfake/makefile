# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 16:52:46 by dmonteir          #+#    #+#              #
#    Updated: 2022/01/09 17:28:28 by dmonteir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = clang
CFLAGS = -Wall -Wextra -Werror -g3
INCLUDE = ./includes/pipex.h

FILES =			./sources/pipex.c \
				./sources/this_pipe.c \
				./sources/free_pipex.c \
				./sources/get_path_full.c \

FILES_UTILS =	./utils/ft_bzero.c \
				./utils/ft_strncmp.c \
				./utils/ft_strdup.c \
				./utils/ft_split.c \
				./utils/ft_calloc.c \
				./utils/ft_substr.c \
				./utils/ft_strjoin.c \

RM = rm -f
OBJS = $(FILES:.c=.o)
OBJS_UTILS = $(FILES_UTILS:.c=.o)

all:		$(NAME) $(INCLUDE)

$(NAME):	$(OBJS) $(OBJS_UTILS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJS_UTILS)

clean:
			$(RM) $(OBJS) $(OBJS_UTILS)

fclean:
			$(RM) $(NAME) $(OBJS) $(OBJS_UTILS)

re:			fclean all

