/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/10 11:09:44 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	t_game	game;

	if (argc != 2)
	{
		printf("Error! broe\n");
		exit(1);
	}

	map = this_Read(argv[1]);


	game.obj->size_x = ft_strlen(map[0]);
	game.obj->size_y = ft_count_line(map);
	ft_memset(&game, 0, sizeof(t_game));
	if (valid_Map(map, &game) == 0)
	{
		ft_free_matriz(map);
		exit (1);
	}
}
