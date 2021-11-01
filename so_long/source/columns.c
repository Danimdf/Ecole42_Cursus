/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   columns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:22:15 by dmonteir          #+#    #+#             */
/*   Updated: 2021/10/28 21:01:49 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char		**columns(char *file, t_game *game)
{
	int		fd;
	int		read_line;
	char	c;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (NULL);

	if (!check_File(file, "ber"))
	{
		printf("Error1000\n");
		exit (1);
	}
	game->obj_map.row = 1;
	read_line = 1;
	while (read_line)
	{
		read_line = read(fd, &c, 1);
		if (read_line < 0)
			return (NULL);
		if (c == '\n')
			game->obj_map.row++;
	}
	close(fd);
	if (game->obj_map.row < 0)
		printf("ERROR!1\n");
	game->obj_map.map = (char **)ft_calloc(game->obj_map.row + 1, sizeof(char *));
	if (game->obj_map.map == NULL)
		printf("ERROR!2\n");
	return (game->obj_map.map);
}
