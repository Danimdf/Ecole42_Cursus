/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:08:07 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/10 13:22:34 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_Obj(char c)
{
	if (c == '1' || c == '0' || c == 'C' || c == 'P' || c == 'E')
		return (1);
	return (0);
}

int	ft_valid(char **map, t_game *game)
{
	int	x;
	int	y;

	x = game->obj->x;
	y = game->obj->y;

	if(!valid_Obj(map[x][y]))
		return (0);
}
