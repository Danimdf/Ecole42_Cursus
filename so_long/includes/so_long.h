/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:46:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/10/28 21:25:15 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H



#include "../gnl/get_next_line.h"
#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define true 1
#define false 0


typedef struct s_map
{
	int		row;
	int		col;
	char	**map;
}	t_map;

typedef struct s_game
{
	t_map	obj_map;
}	t_game;



int	main(int argc, char **argv);

int	check_File(char *file, char *sufx);

char	**this_Read(char *file, t_game *game);

int this_CheckWalls (t_game *game);

char	**columns(char *file, t_game *game);



int	ft_count_line(char **matriz);

void	ft_free_matriz(char **matriz);

//libft
int ft_strcmp(const char *str1, const char *str2);
void	*ft_memset(void *str, int c, size_t n);








#endif
