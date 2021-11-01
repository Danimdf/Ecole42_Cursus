/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/10/28 20:41:51 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
	{
		printf("Error! Input a valid .ber file\n");
		exit(1);
	}

	game.obj_map.map = this_Read(argv[1], &game);
	if(!game.obj_map.map)
		return (0);
	/*if (this_CheckWalls(&game) == 0)
	{
		ft_free_matriz(map);
		exit(1);
	}*/

}
