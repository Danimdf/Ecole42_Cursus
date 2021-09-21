/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:46:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/10 17:42:33 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H



#include "./gnl/get_next_line.h"
#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



typedef struct s_obj
{
	int		x;
	int		y;
	int		size_x;
	int		size_y;
	int		player;
	int		item;
	int		exit;

}	t_obj;

typedef struct s_game
{
	t_obj *obj;
}	t_game;



int	main(int argc, char **argv);

int	check_File(char *file, char *sufx);

char	**this_Read(char *file);



char	**columns(char *file);

void	ft_free_matriz(char **matriz);

int	ft_count_line(char **matriz);

//validation
int	valid_Map (char **map, t_game *game);
int	ft_valid(char **map, t_game *game);
int	valid_Obj(char c);

//libft
int ft_strcmp(const char *str1, const char *str2);
void	*ft_memset(void *str, int c, size_t n);








#endif
