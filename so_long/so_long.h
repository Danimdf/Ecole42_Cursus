/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:46:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/03 16:03:51 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_map
{
	int		count;

}	t_map;

typedef struct s_game
{
	t_map *map_Lines;

}	t_game;





int	check_File(char *file, char *sufx);

int	this_Read(char *file);

int	**columns(char *file, t_game *game);

int	main(int argc, char **argv);

int ft_strcmp(const char *str1, const char *str2);







#endif
