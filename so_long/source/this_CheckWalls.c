#include "../includes/so_long.h"

int this_CheckWalls (t_game *game)
{
	int valid;
	valid = true;
	while(game->obj_map.col)
	{
		game->obj_map.row = 0;
		while(game->obj_map.map[game->obj_map.col][game->obj_map.row])
		{
			if(check(&game) == false)
				valid = true;
		}
	}
}