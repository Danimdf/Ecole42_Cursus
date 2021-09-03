/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   columns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:22:15 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/03 15:23:44 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	**columns(char *file, t_game *game)
{
	char	**map;
	int		fd;
	int		read;
	char	char;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (-1);
	game->map_Lines->count = 1;
	while (game->map_Lines->count)
	{
		read = read(fc, &char, 1);
		if (read <= 0)
			return (-1);
		if (char == '\n')
			game->map_Lines->count++;
	}
	close(fd);
	if (game->map_Lines->count <= 0)
		printf("ERROR!\n");
	map = calloc(sizeof(char *) * game->map_Lines->count) + 1);
	if (map == NULL)
		printf("ERROR!\n");
	return (map);
}
