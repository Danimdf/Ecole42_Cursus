/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_Read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:17:27 by dmonteir          #+#    #+#             */
/*   Updated: 2021/10/28 21:05:39 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**this_Read(char *file, t_game *game)
{
	int		index;
	int		fd;
	int		gnl;

	game->obj_map.map = columns(file, &*game);
	if (game->obj_map.map == NULL)
	{
		printf("ERROR!miau\n");
		exit (1);
	}
	fd = open(file, O_RDONLY);
	index = 0;
	gnl = 1;
	while (gnl)
		gnl = get_next_line(fd, &game->obj_map.map[index++]);
	game->obj_map.map[index] = NULL;
	game->obj_map.col = ft_strlen (game->obj_map.map[0]);
	/*int i;
	i = 0;
	while (i < index)
	{
		printf("%s", game->obj_map.map[i++]);
	}*/
	close(fd);
	return (game->obj_map.map);
}
