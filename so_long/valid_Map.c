/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_Map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 23:27:34 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/14 19:47:42 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_Map (char **map, t_game *game)
{
	int	bool_Value;

	bool_Value = 1;

	while (map[game->obj->y])
	{
		if (ft_strlen(map[game->obj->y]) != (size_t)game->obj->size_x)
			printf("Number of columns and lines is incorrect;\n");
		game->obj->x = 0;
		while (map[game->obj->y][game->obj->x])
		{
			if (ft_valid(map, game) == 0)
			{
				bool_Value = 0;
				printf("map not valid!");
			}
			game->obj->x++;
		}
		game->obj->y++;
	}
	if (!game->obj->player || !game->obj->exit || !game->obj->item)
	{
		bool_Value = 0;
		printf("Objects not valid!\n");
	}
	return (bool_Value);

}
