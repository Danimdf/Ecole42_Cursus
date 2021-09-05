/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:46:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/05 16:20:29 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H



#include <mlx.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_map
{
	int		count;

}	t_map;

typedef struct s_game
{
	t_map *map_Lines;

}	t_game;





int	check_File(char *file, char *sufx);

char	**this_Read(char *file);

char		**columns(char *file);

int	main(int argc, char **argv);

int ft_strcmp(const char *str1, const char *str2);







#endif
